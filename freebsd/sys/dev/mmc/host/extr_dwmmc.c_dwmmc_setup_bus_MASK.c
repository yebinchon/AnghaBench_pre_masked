
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwmmc_softc {int bus_hz; int dev; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dwmmc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct dwmmc_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct dwmmc_softc *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;

 if (VAR_10 == 0) {
  FUNC_2(VAR_9, VAR_1, 0);
  FUNC_2(VAR_9, VAR_5, (VAR_8 |
   VAR_7 | VAR_6));

  VAR_11 = 1000;
  do {
   if (VAR_11-- < 0) {
    FUNC_3(VAR_9->dev, "Failed update clk\n");
    return (1);
   }
  } while (FUNC_1(VAR_9, VAR_5) & VAR_6);

  return (0);
 }

 FUNC_2(VAR_9, VAR_1, 0);
 FUNC_2(VAR_9, VAR_4, 0);

 VAR_12 = (VAR_9->bus_hz != VAR_10) ? FUNC_0(VAR_9->bus_hz, 2 * VAR_10) : 0;

 FUNC_2(VAR_9, VAR_0, VAR_12);
 FUNC_2(VAR_9, VAR_5, (VAR_8 |
   VAR_7 | VAR_6));

 VAR_11 = 1000;
 do {
  if (VAR_11-- < 0) {
   FUNC_3(VAR_9->dev, "Failed to update clk");
   return (1);
  }
 } while (FUNC_1(VAR_9, VAR_5) & VAR_6);

 FUNC_2(VAR_9, VAR_1, (VAR_2 | VAR_3));
 FUNC_2(VAR_9, VAR_5, VAR_8 |
   VAR_7 | VAR_6);

 VAR_11 = 1000;
 do {
  if (VAR_11-- < 0) {
   FUNC_3(VAR_9->dev, "Failed to enable clk\n");
   return (1);
  }
 } while (FUNC_1(VAR_9, VAR_5) & VAR_6);

 return (0);
}
