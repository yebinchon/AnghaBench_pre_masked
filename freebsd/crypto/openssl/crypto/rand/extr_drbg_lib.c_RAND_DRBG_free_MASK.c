
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ secure; int ex_data; int lock; int adin_pool; TYPE_1__* meth; } ;
struct TYPE_8__ {int (* uninstantiate ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(RAND_DRBG *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;

    if (VAR_1->meth != ((void*)0))
        VAR_1->meth->uninstantiate(VAR_1);
    FUNC_4(VAR_1->adin_pool);
    FUNC_0(VAR_1->lock);
    FUNC_1(VAR_0, VAR_1, &VAR_1->ex_data);

    if (VAR_1->secure)
        FUNC_3(VAR_1, sizeof(*VAR_1));
    else
        FUNC_2(VAR_1, sizeof(*VAR_1));
}
