
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* vparams; int j; int q; int g; int p; } ;
typedef TYPE_1__ int_dhx942_dh ;
struct TYPE_8__ {scalar_t__ counter; TYPE_4__* seed; } ;
typedef TYPE_2__ int_dhvparams ;
struct TYPE_10__ {scalar_t__ length; scalar_t__ data; int flags; } ;
struct TYPE_9__ {scalar_t__ seedlen; scalar_t__ counter; scalar_t__ seed; int j; int q; int g; int p; } ;
typedef TYPE_3__ DH ;
typedef TYPE_4__ ASN1_BIT_STRING ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char**) ;

int FUNC_1(const DH *VAR_1, unsigned char **VAR_2)
{
    int_dhx942_dh VAR_3;
    int_dhvparams VAR_4;
    ASN1_BIT_STRING VAR_5;
    VAR_3.p = VAR_1->p;
    VAR_3.g = VAR_1->g;
    VAR_3.q = VAR_1->q;
    VAR_3.j = VAR_1->j;
    if (VAR_1->counter && VAR_1->seed && VAR_1->seedlen > 0) {
        VAR_5.flags = VAR_0;
        VAR_5.data = VAR_1->seed;
        VAR_5.length = VAR_1->seedlen;
        VAR_4.seed = &VAR_5;
        VAR_4.counter = VAR_1->counter;
        VAR_3.vparams = &VAR_4;
    } else
        VAR_3.vparams = ((void*)0);

    return FUNC_0(&VAR_3, VAR_2);
}
