
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_shmem_dscptr {void* vaddr; int size; int paddr; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,int ,int ,int) ;

void *FUNC_4(struct cvmx_shmem_dscptr *VAR_3, int VAR_4)
{
    int VAR_5;


    VAR_5 = FUNC_2();

    if (VAR_5 < 0 )
    {
        FUNC_1("cvmx-shmem: shmem_map failed, out TLB entries \n");
        return ((void*)0);
    }







    FUNC_3(VAR_5, FUNC_0(VAR_3->vaddr),
            VAR_3->paddr, VAR_3->size,
            VAR_0 | VAR_2 | VAR_1);

    return VAR_3 -> vaddr;
}
