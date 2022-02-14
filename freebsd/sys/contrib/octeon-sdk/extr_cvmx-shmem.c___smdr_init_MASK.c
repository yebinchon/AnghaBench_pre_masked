
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cvmx_shmem_smdr {int lock; } ;
struct TYPE_3__ {size_t size; int base_addr; } ;
typedef TYPE_1__ cvmx_bootmem_named_block_desc_t ;


 char* VAR_0 ;
 struct cvmx_shmem_smdr* VAR_1 ;
 int FUNC_0 (struct cvmx_shmem_smdr*) ;
 scalar_t__ FUNC_1 (size_t,int,char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline struct cvmx_shmem_smdr *FUNC_7()
{
    const cvmx_bootmem_named_block_desc_t *VAR_2 = ((void*)0);
    size_t VAR_3 = sizeof(*VAR_1);
    char *VAR_4 = VAR_0;

    VAR_1 = (struct cvmx_shmem_smdr *) FUNC_1(VAR_3, 0x10000, VAR_4);

    if (VAR_1)
       FUNC_0 (VAR_1);
    else
    {

        VAR_2 = FUNC_2(VAR_4);
        if (VAR_2)
        {
            VAR_1 = (struct cvmx_shmem_smdr *)
            (FUNC_4(VAR_2->base_addr));

            FUNC_5 (&VAR_1->lock);
            if (VAR_2->size != VAR_3)
            {
                FUNC_3("SMDR named block is created by another "
                    "application with different size %lu, "
                    "expecting %lu \n",
                    (long unsigned int)VAR_2->size, (long unsigned int)VAR_3);
                VAR_1 = ((void*)0);
            }
            FUNC_6 (&VAR_1->lock);
        }
    }

   if (!VAR_1)
       FUNC_3("cvmx_shmem: Failed to allocate or find SMDR from bootmem \n");

   return VAR_1;
}
