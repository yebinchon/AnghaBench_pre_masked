
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_imask; int sc_running; int sc_watchdog; int sc_dev; struct mwl_hal* sc_mh; } ;
struct mwl_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mwl_softc*) ;
 int FUNC_1 (int *,int ,int ,struct mwl_softc*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_11 ;
 int FUNC_3 (struct mwl_hal*,int) ;
 int FUNC_4 (struct mwl_softc*) ;
 int FUNC_5 (struct mwl_softc*) ;
 int FUNC_6 (struct mwl_softc*) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_7(struct mwl_softc *VAR_13)
{
 struct mwl_hal *VAR_14 = VAR_13->sc_mh;
 int VAR_15 = 0;

 FUNC_0(VAR_13);





 FUNC_6(VAR_13);




 if (!FUNC_4(VAR_13)) {
  FUNC_2(VAR_13->sc_dev, "unable to reset hardware\n");
  return VAR_0;
 }




 VAR_15 = FUNC_5(VAR_13);
 if (VAR_15 != 0) {
  FUNC_2(VAR_13->sc_dev, "unable to start recv logic\n");
  return VAR_15;
 }




 VAR_13->sc_imask = VAR_8
       | VAR_9
       | VAR_5



       | VAR_3
       | VAR_7
       | VAR_2



       | VAR_1
       | VAR_10
       ;

 VAR_13->sc_running = 1;
 FUNC_3(VAR_14, VAR_13->sc_imask);
 FUNC_1(&VAR_13->sc_watchdog, VAR_11, VAR_12, VAR_13);

 return 0;
}
