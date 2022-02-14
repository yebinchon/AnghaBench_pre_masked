
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cvmx_shmem_dscptr {int dummy; } ;
struct TYPE_2__ {struct cvmx_shmem_dscptr* shmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct cvmx_shmem_dscptr* FUNC_0 (struct cvmx_shmem_dscptr*,void*) ;

__attribute__((used)) static struct cvmx_shmem_dscptr *FUNC_1(struct cvmx_shmem_dscptr *(*VAR_3)(struct cvmx_shmem_dscptr *VAR_4, void *VAR_5), void *VAR_6 )
{
    struct cvmx_shmem_dscptr *VAR_7, *VAR_8 = ((void*)0);
    int VAR_9;

    VAR_1;

    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    {
        VAR_7 = &VAR_2->shmd[VAR_9];
        if ((VAR_8 = (*VAR_3)(VAR_7, VAR_6)) != ((void*)0))
            break;
    }

   return VAR_8;
}
