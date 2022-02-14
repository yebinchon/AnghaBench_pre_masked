
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_tll_softc {int sc_dev; } ;


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
 int FUNC_0 (int ,char*) ;
 int VAR_10 ;
 int FUNC_1 (struct omap_tll_softc*,int ) ;
 int FUNC_2 (struct omap_tll_softc*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct omap_tll_softc *VAR_11)
{
 unsigned long VAR_12;
 int VAR_13 = 0;


 FUNC_5(VAR_9);


 FUNC_2(VAR_11, VAR_1, VAR_7);


 VAR_12 = (VAR_10 < 10) ? 1 : ((100 * VAR_10) / 1000);


 while ((FUNC_1(VAR_11, VAR_2) &
         VAR_8) == 0x00) {


  FUNC_3("USBRESET", 1);

  if (VAR_12-- == 0) {
   FUNC_0(VAR_11->sc_dev, "TLL reset operation timed out\n");
   VAR_13 = VAR_0;
   goto err_sys_status;
  }
 }






 FUNC_2(VAR_11, VAR_1, VAR_5 |
                                             VAR_3 |
                                             VAR_6 |
                                             VAR_4);

 return(0);

err_sys_status:

 FUNC_4(VAR_9);

 return(VAR_13);
}
