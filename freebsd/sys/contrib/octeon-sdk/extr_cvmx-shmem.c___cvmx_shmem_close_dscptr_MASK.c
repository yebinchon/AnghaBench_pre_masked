
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_shmem_dscptr {scalar_t__ use_count; int lock; int name; scalar_t__ is_named_block; } ;


 int FUNC_0 (struct cvmx_shmem_dscptr*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct cvmx_shmem_dscptr *VAR_0, int VAR_1)
{
    FUNC_3(&VAR_0->lock);

    if (VAR_0->use_count >0)
        VAR_0->use_count-= 1;

    if ((VAR_0->use_count == 0) && VAR_1)
    {

        FUNC_0(VAR_0);



        if (VAR_0->is_named_block)
        {



            FUNC_1(VAR_0->name, 0);
        }
    }
    FUNC_4(&VAR_0->lock);
    return 0;
}
