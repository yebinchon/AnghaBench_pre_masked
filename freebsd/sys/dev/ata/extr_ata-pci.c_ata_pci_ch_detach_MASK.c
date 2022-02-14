
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_channel {TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {int res; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct ata_channel* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_5)
{
    struct ata_channel *VAR_6 = FUNC_2(VAR_5);

    FUNC_0(VAR_5);

    FUNC_1(VAR_5, VAR_4, VAR_1,
 VAR_6->r_io[VAR_0].res);
    FUNC_1(VAR_5, VAR_4, VAR_3,
 VAR_6->r_io[VAR_2].res);

    return (0);
}
