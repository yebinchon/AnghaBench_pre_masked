
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct ata_pci_controller {int r_res2; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int FUNC_2 (struct ata_channel*,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_8 ;

 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_14, int VAR_15, int VAR_16, u_int32_t VAR_17)
{
    struct ata_pci_controller *VAR_18 = FUNC_6(FUNC_5(VAR_14));
    struct ata_channel *VAR_19 = FUNC_6(VAR_14);
    int VAR_20 = 0;

    if (VAR_15 < 0) {
 FUNC_2(VAR_19, VAR_16, VAR_17);
 return (0);
    }
    if (VAR_15 < VAR_8) {
 switch (VAR_16) {
 case 128:
     VAR_16 = 0;
     break;
 case 129:
     VAR_16 = 1;
     break;
 case 130:
     VAR_16 = 2;
     break;
 default:
     return (VAR_13);
 }
    }

    FUNC_3(VAR_18->r_res2, 0x4e8 + (VAR_19->unit << 8), 0x0f);

    FUNC_1(VAR_19, VAR_7, VAR_16);
    FUNC_1(VAR_19, VAR_4, VAR_15);
    FUNC_1(VAR_19, VAR_1, VAR_17 & 0xff);
    FUNC_1(VAR_19, VAR_9, (VAR_17 >> 8) & 0xff);
    FUNC_1(VAR_19, VAR_2, (VAR_17 >> 16) & 0xff);
    FUNC_1(VAR_19, VAR_3, (VAR_17 >> 24) & 0xff);

    FUNC_1(VAR_19, VAR_0, VAR_12);

    while (VAR_20 < 1000000) {
 u_int8_t VAR_21 = FUNC_0(VAR_19, VAR_10);
 if (!(VAR_21 & VAR_11))
     break;
 VAR_20 += 1000;
 FUNC_4(1000);
    }
    if (VAR_20 >= 1000000)
 return VAR_6;

    return FUNC_0(VAR_19, VAR_5);
}
