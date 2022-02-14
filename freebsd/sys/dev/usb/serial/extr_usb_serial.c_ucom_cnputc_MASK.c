
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_softc {TYPE_1__* sc_callback; int sc_tty; } ;
struct consdev {int dummy; } ;
struct TYPE_2__ {int (* ucom_poll ) (struct ucom_softc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ucom_softc*) ;
 int FUNC_1 (struct ucom_softc*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ucom_softc*) ;
 struct ucom_softc* VAR_1 ;
 int* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct consdev *VAR_5, int VAR_6)
{
 struct ucom_softc *VAR_7 = VAR_1;
 unsigned int VAR_8;

 if (VAR_7 == ((void*)0))
  return;

 repeat:

 FUNC_0(VAR_7);



 VAR_8 = (VAR_0 - 1) - VAR_3 + VAR_4;
 VAR_8 %= VAR_0;

 if (VAR_8) {
  VAR_2[VAR_3] = VAR_6;
  VAR_3 ++;
  VAR_3 %= VAR_0;
 }


 FUNC_4(VAR_7->sc_tty);

 FUNC_1(VAR_7);


 if (FUNC_2() && VAR_7->sc_callback->ucom_poll) {
  (VAR_7->sc_callback->ucom_poll) (VAR_7);

  if (VAR_8 == 0)
   goto repeat;
 }
}
