
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* nvp_curr; TYPE_3__* nvp_last; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int nvpair_t ;
struct TYPE_8__ {scalar_t__ nvl_priv; } ;
typedef TYPE_2__ nvlist_t ;
struct TYPE_9__ {int nvi_nvp; struct TYPE_9__* nvi_prev; } ;
typedef TYPE_3__ i_nvp_t ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;

nvpair_t *
FUNC_2(nvlist_t *VAR_0, nvpair_t *VAR_1)
{
 nvpriv_t *VAR_2;
 i_nvp_t *VAR_3;

 if (VAR_0 == ((void*)0) ||
     (VAR_2 = (nvpriv_t *)(uintptr_t)VAR_0->nvl_priv) == ((void*)0))
  return (((void*)0));

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_1 == ((void*)0))
  VAR_3 = VAR_2->nvp_last;
 else if (VAR_2->nvp_curr == VAR_3 || FUNC_1(VAR_0, VAR_1))
  VAR_3 = VAR_3->nvi_prev;
 else
  VAR_3 = ((void*)0);

 VAR_2->nvp_curr = VAR_3;

 return (VAR_3 != ((void*)0) ? &VAR_3->nvi_nvp : ((void*)0));
}
