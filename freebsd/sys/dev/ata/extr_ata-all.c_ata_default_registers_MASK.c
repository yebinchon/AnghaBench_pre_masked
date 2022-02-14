
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_channel {TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {int offset; int res; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct ata_channel* FUNC_0 (int ) ;

void
FUNC_1(device_t VAR_8)
{
    struct ata_channel *VAR_9 = FUNC_0(VAR_8);


    VAR_9->r_io[VAR_4].res = VAR_9->r_io[VAR_5].res;
    VAR_9->r_io[VAR_4].offset = VAR_9->r_io[VAR_5].offset;
    VAR_9->r_io[VAR_6].res = VAR_9->r_io[VAR_3].res;
    VAR_9->r_io[VAR_6].offset = VAR_9->r_io[VAR_3].offset;
    VAR_9->r_io[VAR_7].res = VAR_9->r_io[VAR_1].res;
    VAR_9->r_io[VAR_7].offset = VAR_9->r_io[VAR_1].offset;
    VAR_9->r_io[VAR_0].res = VAR_9->r_io[VAR_2].res;
    VAR_9->r_io[VAR_0].offset = VAR_9->r_io[VAR_2].offset;
}
