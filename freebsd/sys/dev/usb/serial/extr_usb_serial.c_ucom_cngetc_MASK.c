
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_softc {TYPE_1__* sc_callback; int sc_tty; } ;
struct consdev {int dummy; } ;
struct TYPE_2__ {int (* ucom_poll ) (struct ucom_softc*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct ucom_softc*) ;
 int FUNC_1 (struct ucom_softc*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ucom_softc*) ;
 int* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct ucom_softc* VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct consdev *VAR_5)
{
 struct ucom_softc *VAR_6 = VAR_4;
 int VAR_7;

 if (VAR_6 == ((void*)0))
  return (-1);

 FUNC_0(VAR_6);

 if (VAR_3 != VAR_2) {
  VAR_7 = VAR_1[VAR_3];
  VAR_3 ++;
  VAR_3 %= VAR_0;
 } else {
  VAR_7 = -1;
 }


 FUNC_4(VAR_6->sc_tty);

 FUNC_1(VAR_6);


 if (FUNC_2() && VAR_6->sc_callback->ucom_poll)
  (VAR_6->sc_callback->ucom_poll) (VAR_6);

 return (VAR_7);
}
