
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amr_softc {int amr_dev; } ;
struct TYPE_2__ {char* aa_firmware; char* aa_bios; int aa_memorysize; } ;
struct amr_prodinfo {char* ap_product; char* ap_firmware; char* ap_bios; scalar_t__ ae_signature; TYPE_1__ ae_adapter; int ap_memsize; } ;
struct amr_enquiry {char* ap_product; char* ap_firmware; char* ap_bios; scalar_t__ ae_signature; TYPE_1__ ae_adapter; int ap_memsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,scalar_t__) ;
 struct amr_prodinfo* FUNC_1 (struct amr_softc*,int,int ,int ,int ,int*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct amr_prodinfo*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct amr_softc *VAR_7)
{
    struct amr_prodinfo *VAR_8;
    struct amr_enquiry *VAR_9;
    char *VAR_10;
    int VAR_11;




    if ((VAR_8 = FUNC_1(VAR_7, 2048, VAR_0, VAR_3, 0, &VAR_11)) != ((void*)0)) {
 FUNC_2(VAR_7->amr_dev, "<LSILogic %.80s> Firmware %.16s, BIOS %.16s, %dMB RAM\n",
        VAR_8->ap_product, VAR_8->ap_firmware, VAR_8->ap_bios,
        VAR_8->ap_memsize);

 FUNC_3(VAR_8, VAR_5);
 return;
    }




    if ((VAR_9 = (struct amr_enquiry *)FUNC_1(VAR_7, 2048, VAR_2, 0, 0, &VAR_11)) != ((void*)0)) {
 VAR_10 = FUNC_0(VAR_6, VAR_9->ae_signature);

    } else if ((VAR_9 = (struct amr_enquiry *)FUNC_1(VAR_7, 2048, VAR_1, 0, 0, &VAR_11)) != ((void*)0)) {




 switch (FUNC_4(VAR_7->amr_dev)) {
 case 0x9010:
     VAR_10 = "Series 428";
     break;
 case 0x9060:
     VAR_10 = "Series 434";
     break;
 default:
     VAR_10 = "unknown controller";
     break;
 }
    } else {
 FUNC_2(VAR_7->amr_dev, "<unsupported controller>\n");
 return;
    }
    if(VAR_9->ae_adapter.aa_firmware[2] >= 'A' &&
       VAR_9->ae_adapter.aa_firmware[2] <= 'Z' &&
       VAR_9->ae_adapter.aa_firmware[1] < ' ' &&
       VAR_9->ae_adapter.aa_firmware[0] < ' ' &&
       VAR_9->ae_adapter.aa_bios[2] >= 'A' &&
       VAR_9->ae_adapter.aa_bios[2] <= 'Z' &&
       VAR_9->ae_adapter.aa_bios[1] < ' ' &&
       VAR_9->ae_adapter.aa_bios[0] < ' ') {



     if(VAR_9->ae_signature == VAR_4) {

      VAR_10 = "HP NetRaid 3si";
     }

 FUNC_2(VAR_7->amr_dev, "<%s> Firmware %c.%02d.%02d, BIOS %c.%02d.%02d, %dMB RAM\n",
        VAR_10, VAR_9->ae_adapter.aa_firmware[2],
        VAR_9->ae_adapter.aa_firmware[1],
        VAR_9->ae_adapter.aa_firmware[0],
        VAR_9->ae_adapter.aa_bios[2],
        VAR_9->ae_adapter.aa_bios[1],
        VAR_9->ae_adapter.aa_bios[0],
        VAR_9->ae_adapter.aa_memorysize);
    } else {
 FUNC_2(VAR_7->amr_dev, "<%s> Firmware %.4s, BIOS %.4s, %dMB RAM\n",
        VAR_10, VAR_9->ae_adapter.aa_firmware, VAR_9->ae_adapter.aa_bios,
        VAR_9->ae_adapter.aa_memorysize);
    }
    FUNC_3(VAR_9, VAR_5);
}
