
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int attached; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
    struct ata_channel *VAR_1 = FUNC_1(VAR_0);

    if (!VAR_1->attached)
 return (0);

    return FUNC_0(VAR_0);
}
