
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int block ;
struct TYPE_5__ {int memory_blocks; int segment_length; int * pseudo_rands; TYPE_1__* region; } ;
typedef TYPE_2__ argon2_instance_t ;
struct TYPE_4__ {int * memory; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(argon2_instance_t *VAR_0, int VAR_1)
{

    if (VAR_1) {
        if (VAR_0->region != ((void*)0)) {
            FUNC_0(VAR_0->region->memory,
                           sizeof(block) * VAR_0->memory_blocks);
        }
        if (VAR_0->pseudo_rands != ((void*)0)) {
            FUNC_0(VAR_0->pseudo_rands,
                           sizeof(uint64_t) * VAR_0->segment_length);
        }
    }

}
