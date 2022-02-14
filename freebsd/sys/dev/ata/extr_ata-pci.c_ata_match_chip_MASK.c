
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct ata_chip_id {scalar_t__ chipid; scalar_t__ chiprev; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

const struct ata_chip_id *
FUNC_2(device_t VAR_0, const struct ata_chip_id *VAR_1)
{
    uint32_t VAR_2;
    uint8_t VAR_3;

    VAR_2 = FUNC_0(VAR_0);
    VAR_3 = FUNC_1(VAR_0);
    while (VAR_1->chipid != 0) {
 if (VAR_2 == VAR_1->chipid && VAR_3 >= VAR_1->chiprev)
     return (VAR_1);
 VAR_1++;
    }
    return (((void*)0));
}
