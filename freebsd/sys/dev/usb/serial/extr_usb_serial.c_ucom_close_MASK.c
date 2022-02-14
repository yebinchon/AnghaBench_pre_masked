
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucom_softc {int sc_flag; TYPE_2__* sc_callback; TYPE_1__* sc_close_task; } ;
struct tty {int dummy; } ;
struct TYPE_4__ {int (* ucom_stop_read ) (struct ucom_softc*) ;} ;
struct TYPE_3__ {int hdr; } ;


 int FUNC_0 (char*,struct tty*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ucom_softc*,int ) ;
 int FUNC_2 (struct ucom_softc*) ;
 struct ucom_softc* FUNC_3 (struct tty*) ;
 int VAR_3 ;
 int FUNC_4 (struct ucom_softc*,int ,int *,int *,int *) ;
 int FUNC_5 (struct ucom_softc*) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_4)
{
 struct ucom_softc *VAR_5 = FUNC_3(VAR_4);

 FUNC_1(VAR_5, VAR_0);

 FUNC_0("tp=%p\n", VAR_4);

 if (!(VAR_5->sc_flag & VAR_1)) {
  FUNC_0("tp=%p already closed\n", VAR_4);
  return;
 }
 FUNC_5(VAR_5);

 FUNC_4(VAR_5, VAR_3, ((void*)0),
     &VAR_5->sc_close_task[0].hdr,
     &VAR_5->sc_close_task[1].hdr);

 VAR_5->sc_flag &= ~(VAR_1 | VAR_2);

 if (VAR_5->sc_callback->ucom_stop_read) {
  (VAR_5->sc_callback->ucom_stop_read) (VAR_5);
 }
}
