
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucom_super_softc {int dummy; } ;
struct ucom_softc {int sc_flag; TYPE_1__* sc_callback; struct tty* sc_tty; int * sc_consdev; } ;
struct tty {int dummy; } ;
struct TYPE_2__ {int (* ucom_stop_write ) (struct ucom_softc*) ;int (* ucom_stop_read ) (struct ucom_softc*) ;} ;


 int FUNC_0 (char*,struct ucom_softc*,struct tty*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ucom_softc*) ;
 int FUNC_2 (struct ucom_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ucom_softc*) ;
 int FUNC_8 (struct ucom_softc*) ;
 int FUNC_9 (struct tty*) ;
 int FUNC_10 (struct tty*) ;
 int FUNC_11 (struct tty*) ;
 int VAR_5 ;
 struct ucom_softc* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_12(struct ucom_super_softc *VAR_8, struct ucom_softc *VAR_9)
{
 struct tty *VAR_10 = VAR_9->sc_tty;

 FUNC_0("sc = %p, tp = %p\n", VAR_9, VAR_9->sc_tty);

 if (VAR_9->sc_consdev != ((void*)0)) {
  FUNC_3(VAR_9->sc_consdev);
  FUNC_4(VAR_9->sc_consdev, VAR_0);
  VAR_9->sc_consdev = ((void*)0);
 }

 if (VAR_9->sc_flag & VAR_1) {
  FUNC_1(VAR_6);
  FUNC_11(VAR_6->sc_tty);
  VAR_9->sc_flag &= ~VAR_1;
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
 }



 FUNC_1(VAR_9);
 VAR_9->sc_flag |= VAR_2;
 VAR_9->sc_flag &= ~(VAR_3 | VAR_4);
 FUNC_2(VAR_9);

 if (VAR_10) {
  FUNC_5(&VAR_7);
  VAR_5++;
  FUNC_6(&VAR_7);

  FUNC_9(VAR_10);

  FUNC_11(VAR_10);

  FUNC_10(VAR_10);

  FUNC_1(VAR_9);



  if (VAR_9->sc_callback->ucom_stop_read)
   (VAR_9->sc_callback->ucom_stop_read) (VAR_9);
  if (VAR_9->sc_callback->ucom_stop_write)
   (VAR_9->sc_callback->ucom_stop_write) (VAR_9);
  FUNC_2(VAR_9);
 }
}
