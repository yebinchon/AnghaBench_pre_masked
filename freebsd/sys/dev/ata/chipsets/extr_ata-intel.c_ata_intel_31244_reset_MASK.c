
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {scalar_t__ devices; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0)
{
    struct ata_channel *VAR_1 = FUNC_2(VAR_0);

    if (FUNC_1(VAR_0, -1, 1))
 FUNC_0(VAR_0);
    else
 VAR_1->devices = 0;
}
