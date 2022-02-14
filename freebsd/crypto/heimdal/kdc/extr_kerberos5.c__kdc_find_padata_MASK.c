
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* padata; } ;
struct TYPE_7__ {unsigned int padata_type; } ;
struct TYPE_6__ {size_t len; TYPE_2__ const* val; } ;
typedef TYPE_2__ PA_DATA ;
typedef TYPE_3__ KDC_REQ ;



const PA_DATA*
FUNC_0(const KDC_REQ *VAR_0, int *VAR_1, int VAR_2)
{
    if (VAR_0->padata == ((void*)0))
 return ((void*)0);

    while((size_t)*VAR_1 < VAR_0->padata->len){
 (*VAR_1)++;
 if(VAR_0->padata->val[*VAR_1 - 1].padata_type == (unsigned)VAR_2)
     return &VAR_0->padata->val[*VAR_1 - 1];
    }
    return ((void*)0);
}
