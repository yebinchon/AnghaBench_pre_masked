
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* vparams; TYPE_9__* seed; int counter; int j; int g; int q; int p; } ;
typedef TYPE_1__ int_dhx942_dh ;
struct TYPE_12__ {int * data; int length; } ;
struct TYPE_11__ {int counter; int seedlen; int * seed; int j; int g; int q; int p; } ;
typedef TYPE_2__ DH ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,unsigned char const**,long) ;

DH *FUNC_5(DH **VAR_0, const unsigned char **VAR_1, long VAR_2)
{
    int_dhx942_dh *VAR_3 = ((void*)0);
    DH *VAR_4 = ((void*)0);
    VAR_4 = FUNC_2();
    if (VAR_4 == ((void*)0))
        return ((void*)0);
    VAR_3 = FUNC_4(((void*)0), VAR_1, VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_4);
        return ((void*)0);
    }

    if (VAR_0) {
        FUNC_1(*VAR_0);
        *VAR_0 = VAR_4;
    }

    VAR_4->p = VAR_3->p;
    VAR_4->q = VAR_3->q;
    VAR_4->g = VAR_3->g;
    VAR_4->j = VAR_3->j;

    if (VAR_3->vparams) {
        VAR_4->seed = VAR_3->vparams->seed->data;
        VAR_4->seedlen = VAR_3->vparams->seed->length;
        VAR_4->counter = VAR_3->vparams->counter;
        VAR_3->vparams->seed->data = ((void*)0);
        FUNC_0(VAR_3->vparams->seed);
        FUNC_3(VAR_3->vparams);
        VAR_3->vparams = ((void*)0);
    }

    FUNC_3(VAR_3);
    return VAR_4;
}
