
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cvmx_shmem_smdr {int lock; void* break64; TYPE_1__* shmd; } ;
struct TYPE_2__ {scalar_t__ alignment; scalar_t__ size; scalar_t__ paddr; int * vaddr; int * name; scalar_t__ use_count; scalar_t__ is_named_block; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cvmx_shmem_smdr *VAR_4) {

    if (VAR_4 != ((void*)0))
    {
        int VAR_5;

        FUNC_0 (&VAR_4->lock);
        FUNC_1 (&VAR_4->lock);

        for ( VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
        {
            VAR_4 -> shmd[VAR_5].owner = VAR_1;
            VAR_4 -> shmd[VAR_5].is_named_block = 0;
            VAR_4 -> shmd[VAR_5].use_count = 0;
            VAR_4 -> shmd[VAR_5].name = ((void*)0);
            VAR_4 -> shmd[VAR_5].vaddr = ((void*)0);
            VAR_4 -> shmd[VAR_5].paddr = 0;
            VAR_4 -> shmd[VAR_5].size = 0;
            VAR_4 -> shmd[VAR_5].alignment = 0;
        };


        VAR_4->break64 = (void *)VAR_2;
        FUNC_2 (&VAR_4->lock);
    }


    VAR_3;
}
