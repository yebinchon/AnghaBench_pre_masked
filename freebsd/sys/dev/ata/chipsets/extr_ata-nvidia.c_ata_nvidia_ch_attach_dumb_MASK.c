
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ata_channel* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
    struct ata_channel *VAR_3 = FUNC_1(VAR_2);

    if (FUNC_0(VAR_2))
 return VAR_1;
    VAR_3->flags |= VAR_0;
    return 0;
}
