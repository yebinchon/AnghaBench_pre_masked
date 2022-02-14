
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int devices; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ata_channel* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, int VAR_2)
{
    struct ata_channel *VAR_3 = FUNC_0(VAR_1);

    return (VAR_3->devices & (VAR_0 << VAR_2));
}
