
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mmc_softc*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct mmc_softc *VAR_0)
{
 device_t VAR_1 = VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_1);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1, "Failed to acquire bus for scanning\n");
  return;
 }
 FUNC_3(VAR_0);
 VAR_2 = FUNC_4(VAR_1, VAR_1);
 if (VAR_2 != 0) {
  FUNC_1(VAR_1, "Failed to release bus after scanning\n");
  return;
 }
 (void)FUNC_0(VAR_1);
}
