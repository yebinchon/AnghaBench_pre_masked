
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_softc {int sc_flag; TYPE_1__* sc_callback; } ;
struct TYPE_2__ {int (* ucom_start_write ) (struct ucom_softc*) ;int (* ucom_start_read ) (struct ucom_softc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ucom_softc*) ;
 int FUNC_1 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_1)
{
 if (!(VAR_1->sc_flag & VAR_0)) {
  return;
 }




 if (VAR_1->sc_callback->ucom_start_read) {
  (VAR_1->sc_callback->ucom_start_read) (VAR_1);
 }
 if (VAR_1->sc_callback->ucom_start_write) {
  (VAR_1->sc_callback->ucom_start_write) (VAR_1);
 }
}
