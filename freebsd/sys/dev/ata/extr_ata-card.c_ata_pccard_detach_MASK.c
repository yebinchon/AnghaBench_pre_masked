
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_channel {TYPE_1__* r_io; scalar_t__ attached; } ;
typedef int device_t ;
struct TYPE_2__ {int * res; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct ata_channel* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6)
{
    struct ata_channel *VAR_7 = FUNC_2(VAR_6);
    int VAR_8;

    if (!VAR_7->attached)
 return (0);
    VAR_7->attached = 0;

    FUNC_0(VAR_6);
    if (VAR_7->r_io[VAR_0].res != VAR_7->r_io[VAR_2].res)
 FUNC_1(VAR_6, VAR_5, VAR_1,
        VAR_7->r_io[VAR_0].res);
    FUNC_1(VAR_6, VAR_5, VAR_3,
    VAR_7->r_io[VAR_2].res);
    for (VAR_8 = VAR_2; VAR_8 < VAR_4; VAR_8++)
 VAR_7->r_io[VAR_8].res = ((void*)0);
    return 0;
}
