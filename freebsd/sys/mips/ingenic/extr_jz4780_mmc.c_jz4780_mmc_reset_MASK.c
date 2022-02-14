
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_mmc_softc {int sc_intr_mask; int sc_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct jz4780_mmc_softc*,int ) ;
 int FUNC_2 (struct jz4780_mmc_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct jz4780_mmc_softc *VAR_12)
{
 int VAR_13;


 FUNC_2(VAR_12, VAR_4, VAR_2);

 VAR_13 = 1000;
 while (--VAR_13 > 0) {
  if ((FUNC_1(VAR_12, VAR_10) & VAR_1) == 0)
   break;
  FUNC_0(100);
 }
 if (VAR_13 == 0) {
  FUNC_3(VAR_12->sc_dev, "Failed to stop clk.\n");
  return (VAR_0);
 }


 FUNC_2(VAR_12, VAR_4, VAR_11);

 VAR_13 = 10;
 while (--VAR_13 > 0) {
  if ((FUNC_1(VAR_12, VAR_10) & VAR_3) == 0)
   break;
  FUNC_0(1000);
 }

 if (VAR_13 == 0) {




 }


 FUNC_2(VAR_12, VAR_9, 0xffff);
 FUNC_2(VAR_12, VAR_8, 0xffffffff);


 FUNC_2(VAR_12, VAR_6, 0xffffffff);

 FUNC_2(VAR_12, VAR_5, 0xffffffff);


 VAR_12->sc_intr_mask = VAR_7;

 return (0);
}
