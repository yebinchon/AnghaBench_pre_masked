
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ata_pci_controller {int r_res2; TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
    struct ata_pci_controller *VAR_3 = FUNC_6(FUNC_5(VAR_2));
    struct ata_channel *VAR_4 = FUNC_6(VAR_2);
    int VAR_5 = VAR_3->chip->cfg1 & VAR_0 ? 0x0440 : 0x0010;
    int VAR_6 = VAR_4->unit << (VAR_3->chip->cfg1 & VAR_1 ? 4 : 2);
    u_int32_t VAR_7;


    if (VAR_3->chip->cfg1 & VAR_1)
 VAR_7 = FUNC_1(VAR_3->r_res2, VAR_5);
    else
 VAR_7 = FUNC_0(VAR_3->r_res2, VAR_5);


    if (VAR_7 & (0x0c << VAR_6))
 FUNC_4(VAR_2, -1);


    if (VAR_3->chip->cfg1 & VAR_1)
 FUNC_3(VAR_3->r_res2, VAR_5, (0x0f << VAR_6) | 0x00f000f0);
    else
 FUNC_2(VAR_3->r_res2, VAR_5, (0x0f << VAR_6));


    return (VAR_7 & (0x01 << VAR_6));
}
