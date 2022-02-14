
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int priv_key; int pub_key; int counter; struct TYPE_9__* seed; int j; int q; int g; int p; int lock; int ex_data; int engine; TYPE_1__* meth; int references; } ;
struct TYPE_8__ {int (* finish ) (TYPE_2__*) ;} ;
typedef TYPE_2__ DH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_2__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(DH *VAR_1)
{
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_1(&VAR_1->references, &VAR_2, VAR_1->lock);
    FUNC_7("DH", VAR_1);
    if (VAR_2 > 0)
        return;
    FUNC_6(VAR_2 < 0);

    if (VAR_1->meth != ((void*)0) && VAR_1->meth->finish != ((void*)0))
        VAR_1->meth->finish(VAR_1);

    FUNC_4(VAR_1->engine);


    FUNC_3(VAR_0, VAR_1, &VAR_1->ex_data);

    FUNC_2(VAR_1->lock);

    FUNC_0(VAR_1->p);
    FUNC_0(VAR_1->g);
    FUNC_0(VAR_1->q);
    FUNC_0(VAR_1->j);
    FUNC_5(VAR_1->seed);
    FUNC_0(VAR_1->counter);
    FUNC_0(VAR_1->pub_key);
    FUNC_0(VAR_1->priv_key);
    FUNC_5(VAR_1);
}
