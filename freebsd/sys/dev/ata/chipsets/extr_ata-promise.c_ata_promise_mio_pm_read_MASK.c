
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
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_13, int VAR_14, int VAR_15, u_int32_t *VAR_16)
{
    struct ata_pci_controller *VAR_17 = FUNC_6(FUNC_5(VAR_13));
    struct ata_channel *VAR_18 = FUNC_6(VAR_13);
    int VAR_19 = 0;

    if (VAR_14 < 0) {
 *VAR_16 = FUNC_1(VAR_18, VAR_15);
 return (0);
    }
    if (VAR_14 < VAR_7) {
 switch (VAR_15) {
 case 128:
     VAR_15 = 0;
     break;
 case 129:
     VAR_15 = 1;
     break;
 case 130:
     VAR_15 = 2;
     break;
 default:
     return (VAR_12);
 }
    }

    FUNC_3(VAR_17->r_res2, 0x4e8 + (VAR_18->unit << 8), 0x0f);

    FUNC_2(VAR_18, VAR_6, VAR_15);
    FUNC_2(VAR_18, VAR_4, VAR_14);

    FUNC_2(VAR_18, VAR_0, VAR_8);

    while (VAR_19 < 1000000) {
 u_int8_t VAR_20 = FUNC_0(VAR_18, VAR_10);
 if (!(VAR_20 & VAR_11))
     break;
 VAR_19 += 1000;
 FUNC_4(1000);
    }
    if (VAR_19 >= 1000000)
 return VAR_5;

    *VAR_16 = FUNC_0(VAR_18, VAR_1) |
       (FUNC_0(VAR_18, VAR_9) << 8) |
       (FUNC_0(VAR_18, VAR_2) << 16) |
       (FUNC_0(VAR_18, VAR_3) << 24);
    return 0;
}
