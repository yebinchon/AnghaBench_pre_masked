
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; unsigned int flags; int state; TYPE_1__* meth; int * adin_pool; } ;
struct TYPE_6__ {int (* uninstantiate ) (TYPE_2__*) ;} ;
typedef TYPE_2__ RAND_DRBG ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(RAND_DRBG *VAR_7, int VAR_8, unsigned int VAR_9)
{
    int VAR_10 = 1;

    if (VAR_8 == 0 && VAR_9 == 0) {
        VAR_8 = VAR_6;
        VAR_9 = VAR_5;
    }


    if (VAR_7->type != 0 && (VAR_8 != VAR_7->type || VAR_9 != VAR_7->flags)) {
        VAR_7->meth->uninstantiate(VAR_7);
        FUNC_2(VAR_7->adin_pool);
        VAR_7->adin_pool = ((void*)0);
    }

    VAR_7->state = VAR_1;
    VAR_7->flags = VAR_9;
    VAR_7->type = VAR_8;

    switch (VAR_8) {
    default:
        VAR_7->type = 0;
        VAR_7->flags = 0;
        VAR_7->meth = ((void*)0);
        FUNC_0(VAR_2, VAR_4);
        return 0;
    case 0:

        VAR_7->meth = ((void*)0);
        return 1;
    case 130:
    case 129:
    case 128:
        VAR_10 = FUNC_1(VAR_7);
        break;
    }

    if (VAR_10 == 0) {
        VAR_7->state = VAR_0;
        FUNC_0(VAR_2, VAR_3);
    }
    return VAR_10;
}
