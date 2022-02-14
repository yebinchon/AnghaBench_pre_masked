
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_shmem_dscptr {scalar_t__ owner; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct cvmx_shmem_dscptr *FUNC_0(struct cvmx_shmem_dscptr* VAR_1, void *VAR_2)
{
    if (VAR_1->owner == VAR_0)
        return VAR_1;
    else
        return ((void*)0);
}
