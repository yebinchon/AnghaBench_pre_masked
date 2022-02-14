
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int type; TYPE_1__* meth; int state; } ;
struct TYPE_6__ {int (* uninstantiate ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(RAND_DRBG *VAR_3)
{
    if (VAR_3->meth == ((void*)0)) {
        VAR_3->state = VAR_0;
        FUNC_1(VAR_1,
                VAR_2);
        return 0;
    }





    VAR_3->meth->uninstantiate(VAR_3);
    return FUNC_0(VAR_3, VAR_3->type, VAR_3->flags);
}
