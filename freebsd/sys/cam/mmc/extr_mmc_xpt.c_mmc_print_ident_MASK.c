
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_params {int card_rca; int card_features; int card_ocr; int io_ocr; int sdio_func_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1(struct mmc_params *VAR_5)
{
        FUNC_0("Relative addr: %08x\n", VAR_5->card_rca);
        FUNC_0("Card features: <");
        if (VAR_5->card_features & VAR_1)
                FUNC_0("MMC ");
        if (VAR_5->card_features & VAR_0)
                FUNC_0("Memory ");
        if (VAR_5->card_features & VAR_3)
                FUNC_0("High-Capacity ");
        if (VAR_5->card_features & VAR_2)
                FUNC_0("SD2.0-Conditions ");
        if (VAR_5->card_features & VAR_4)
                FUNC_0("SDIO ");
        FUNC_0(">\n");

        if (VAR_5->card_features & VAR_0)
                FUNC_0("Card memory OCR: %08x\n", VAR_5->card_ocr);

        if (VAR_5->card_features & VAR_4) {
                FUNC_0("Card IO OCR: %08x\n", VAR_5->io_ocr);
                FUNC_0("Number of funcitions: %u\n", VAR_5->sdio_func_count);
        }
}
