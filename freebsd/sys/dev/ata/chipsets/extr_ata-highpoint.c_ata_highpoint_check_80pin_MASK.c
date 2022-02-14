
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {scalar_t__ unit; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, int VAR_4)
{
    device_t VAR_5 = FUNC_1(VAR_3);
    struct ata_pci_controller *VAR_6 = FUNC_2(VAR_5);
    struct ata_channel *VAR_7 = FUNC_2(VAR_3);
    u_int8_t VAR_8, VAR_9, VAR_10;

    if (VAR_6->chip->cfg1 == VAR_1 && FUNC_3(VAR_5) == 1) {
 VAR_8 = VAR_7->unit ? 0x57 : 0x53;
 VAR_9 = FUNC_4(VAR_5, VAR_8, 1);
 FUNC_5(VAR_5, VAR_8, VAR_9 | 0x80, 1);
    }
    else {
 VAR_8 = 0x5b;
 VAR_9 = FUNC_4(VAR_5, VAR_8, 1);
 FUNC_5(VAR_5, VAR_8, VAR_9 & 0xfe, 1);
    }
    VAR_10 = FUNC_4(VAR_5, 0x5a, 1) & (VAR_7->unit ? 0x1:0x2);
    FUNC_5(VAR_5, VAR_8, VAR_9, 1);

    if (VAR_2 && VAR_4 > VAR_0 && VAR_10) {
 FUNC_0(VAR_3, "controller");
 VAR_4 = VAR_0;
    }
    return VAR_4;
}
