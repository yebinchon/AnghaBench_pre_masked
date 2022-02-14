
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mpt_softc {int dev; scalar_t__ is_sas; int fw_dmap; int fw_dmat; scalar_t__ fw_image; int fw_image_size; int * pci_pio_reg; } ;
struct TYPE_4__ {scalar_t__ NextImageHeaderOffset; int ImageSize; int LoadStartAddress; } ;
struct TYPE_3__ {scalar_t__ NextImageHeaderOffset; scalar_t__ IopResetRegAddr; scalar_t__ IopResetVectorValue; int ImageSize; int LoadStartAddress; } ;
typedef TYPE_1__ MpiFwHeader_t ;
typedef TYPE_2__ MpiExtImageHeader_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mpt_softc*,int ,scalar_t__*,int ) ;
 int FUNC_2 (struct mpt_softc*) ;
 int FUNC_3 (struct mpt_softc*) ;
 scalar_t__ FUNC_4 (struct mpt_softc*,int ) ;
 int FUNC_5 (struct mpt_softc*,int ,scalar_t__) ;
 int FUNC_6 (struct mpt_softc*,char*,...) ;
 scalar_t__ FUNC_7 (struct mpt_softc*,int ) ;
 int FUNC_8 (struct mpt_softc*,int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct mpt_softc *VAR_13)
{
 MpiFwHeader_t *VAR_14;
 int VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;

 if (VAR_13->pci_pio_reg == ((void*)0)) {
  FUNC_6(VAR_13, "No PIO resource!\n");
  return (VAR_3);
 }

 FUNC_6(VAR_13, "Downloading Firmware - Image Size %d\n",
  VAR_13->fw_image_size);

 VAR_15 = FUNC_3(VAR_13);
 if (VAR_15 != 0) {
  FUNC_6(VAR_13, "Could not enter diagnostic mode!\n");
  return (VAR_2);
 }

 FUNC_8(VAR_13, VAR_9,
    VAR_6|VAR_4);

 VAR_14 = (MpiFwHeader_t *)VAR_13->fw_image;
 FUNC_0(VAR_13->fw_dmat, VAR_13->fw_dmap, VAR_1);
 FUNC_1(VAR_13, VAR_14->LoadStartAddress, (uint32_t*)VAR_14,
         VAR_14->ImageSize);
 FUNC_0(VAR_13->fw_dmat, VAR_13->fw_dmap, VAR_0);

 VAR_16 = VAR_14->NextImageHeaderOffset;
 while (VAR_16 != 0) {
  MpiExtImageHeader_t *VAR_18;

  VAR_18 = (MpiExtImageHeader_t *)((uintptr_t)VAR_14 + VAR_16);
  VAR_16 = VAR_18->NextImageHeaderOffset;
  FUNC_0(VAR_13->fw_dmat, VAR_13->fw_dmap,
      VAR_1);
  FUNC_1(VAR_13, VAR_18->LoadStartAddress, (uint32_t*)VAR_18,
          VAR_18->ImageSize);
  FUNC_0(VAR_13->fw_dmat, VAR_13->fw_dmap,
      VAR_0);
 }

 if (VAR_13->is_sas) {
  FUNC_10(VAR_13->dev, VAR_12);
 }

 FUNC_5(VAR_13, VAR_10, VAR_14->IopResetRegAddr);
 FUNC_5(VAR_13, VAR_11, VAR_14->IopResetVectorValue);






 FUNC_5(VAR_13, VAR_10, VAR_8);
 VAR_17 = FUNC_4(VAR_13, VAR_11) | VAR_7;
 FUNC_5(VAR_13, VAR_10, VAR_8);
 FUNC_5(VAR_13, VAR_11, VAR_17);

 if (VAR_13->is_sas) {
  FUNC_9(VAR_13->dev, VAR_12);
 }




 VAR_17 = FUNC_7(VAR_13, VAR_9);
 VAR_17 &= ~(VAR_5|VAR_4);
 FUNC_8(VAR_13, VAR_9, VAR_17);

 FUNC_2(VAR_13);
 return (0);
}
