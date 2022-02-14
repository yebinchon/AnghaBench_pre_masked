
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_softc {int dev; int squelched; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct mmc_softc*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct mmc_softc*,int) ;
 int FUNC_3 (struct mmc_softc*) ;
 int FUNC_4 (struct mmc_softc*) ;
 int FUNC_5 (struct mmc_softc*) ;
 int FUNC_6 (struct mmc_softc*) ;
 int FUNC_7 (struct mmc_softc*) ;
 int FUNC_8 (struct mmc_softc*,int ) ;
 scalar_t__ FUNC_9 (struct mmc_softc*,int,int *) ;
 int FUNC_10 (struct mmc_softc*,int) ;
 scalar_t__ FUNC_11 (struct mmc_softc*,int,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_20(struct mmc_softc *VAR_10)
{
 uint32_t VAR_11;
 device_t VAR_12;
 int VAR_13;

 VAR_12 = VAR_10->dev;
 if (FUNC_14(VAR_12) != VAR_8) {



  VAR_10->squelched++;
  FUNC_17(VAR_12, VAR_6);
  FUNC_6(VAR_10);
  FUNC_15(VAR_12, VAR_9);
  if (VAR_3 || VAR_4)
   FUNC_0(VAR_10->dev, "Probing bus\n");
  FUNC_4(VAR_10);
  VAR_13 = FUNC_10(VAR_10, 1);
  if ((VAR_3 || VAR_4) && VAR_13 == 0)
   FUNC_0(VAR_10->dev,
       "SD 2.0 interface conditions: OK\n");
  if (FUNC_9(VAR_10, 0, &VAR_11) != VAR_0) {
   if (VAR_3 || VAR_4)
    FUNC_0(VAR_10->dev, "SD probe: failed\n");



   FUNC_17(VAR_12, VAR_5);
   if (FUNC_11(VAR_10, 0, &VAR_11) != VAR_0) {
    if (VAR_3 || VAR_4)
     FUNC_0(VAR_10->dev,
         "MMC probe: failed\n");
    VAR_11 = 0;
   } else if (VAR_3 || VAR_4)
    FUNC_0(VAR_10->dev,
        "MMC probe: OK (OCR: 0x%08x)\n", VAR_11);
  } else if (VAR_3 || VAR_4)
   FUNC_0(VAR_10->dev, "SD probe: OK (OCR: 0x%08x)\n",
       VAR_11);
  VAR_10->squelched--;

  FUNC_18(VAR_12, FUNC_8(VAR_10, VAR_11));
  if (FUNC_13(VAR_12) != 0)
   FUNC_4(VAR_10);
 } else {
  FUNC_15(VAR_12, VAR_7);
  FUNC_16(VAR_12, VAR_2);
  FUNC_19(VAR_12);

 }




 if (VAR_3 || VAR_4)
  FUNC_0(VAR_10->dev, "Current OCR: 0x%08x\n",
      FUNC_13(VAR_12));
 if (FUNC_13(VAR_12) == 0) {
  FUNC_0(VAR_10->dev, "No compatible cards found on bus\n");
  (void)FUNC_2(VAR_10, 0);
  FUNC_5(VAR_10);
  return;
 }



 if (FUNC_12(VAR_12) == VAR_6) {
  VAR_13 = FUNC_10(VAR_10, 1);
  FUNC_9(VAR_10,
      (VAR_13 ? 0 : VAR_1) | FUNC_13(VAR_12), ((void*)0));
 } else
  FUNC_11(VAR_10, VAR_1 | FUNC_13(VAR_12), ((void*)0));
 FUNC_3(VAR_10);
 FUNC_7(VAR_10);

 FUNC_15(VAR_12, VAR_9);
 FUNC_19(VAR_12);
 FUNC_1(VAR_10);
}
