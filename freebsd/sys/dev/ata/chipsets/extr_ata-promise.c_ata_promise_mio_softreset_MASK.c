
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
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 int VAR_10 ;
 int FUNC_3 (int ,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_8(device_t VAR_14, int VAR_15)
{
    struct ata_pci_controller *VAR_16 = FUNC_7(FUNC_6(VAR_14));
    struct ata_channel *VAR_17 = FUNC_7(VAR_14);
    int VAR_18;


    FUNC_3(VAR_16->r_res2, 0x4e8 + (VAR_17->unit << 8), VAR_15 & 0x0f);


    FUNC_2(VAR_17, VAR_6, VAR_7 | VAR_8 | FUNC_0(VAR_10));
    FUNC_4(10);
    FUNC_2(VAR_17, VAR_2, VAR_0 | VAR_1);
    FUNC_5(10000);
    FUNC_2(VAR_17, VAR_2, VAR_0);
    FUNC_5(150000);
    FUNC_1(VAR_17, VAR_9);


    for (VAR_18 = 0; VAR_18 < 100; VAR_18++) {
 u_int8_t VAR_19;

             FUNC_1(VAR_17, VAR_9);
 VAR_19 = FUNC_1(VAR_17, VAR_12);




 if (!(VAR_19 & VAR_13)) {

  return FUNC_1(VAR_17, VAR_3) |
         (FUNC_1(VAR_17, VAR_11) << 8) |
         (FUNC_1(VAR_17, VAR_4) << 16) |
         (FUNC_1(VAR_17, VAR_5) << 24);




 }

 if (!(VAR_19 & VAR_13) || (VAR_19 == 0xff && VAR_18 > 10))
     break;
 FUNC_5(100000);
    }
    return -1;
}
