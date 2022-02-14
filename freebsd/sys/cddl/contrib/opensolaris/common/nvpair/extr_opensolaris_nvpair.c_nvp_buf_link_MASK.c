
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* nvp_last; TYPE_3__* nvp_list; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int nvpair_t ;
struct TYPE_7__ {scalar_t__ nvl_priv; } ;
typedef TYPE_2__ nvlist_t ;
struct TYPE_8__ {struct TYPE_8__* nvi_next; struct TYPE_8__* nvi_prev; } ;
typedef TYPE_3__ i_nvp_t ;


 TYPE_3__* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(nvlist_t *VAR_0, nvpair_t *VAR_1)
{
 nvpriv_t *VAR_2 = (nvpriv_t *)(uintptr_t)VAR_0->nvl_priv;
 i_nvp_t *VAR_3 = FUNC_0(VAR_1);


 if (VAR_2->nvp_list == ((void*)0)) {
  VAR_2->nvp_list = VAR_2->nvp_last = VAR_3;
 } else {
  VAR_3->nvi_prev = VAR_2->nvp_last;
  VAR_2->nvp_last->nvi_next = VAR_3;
  VAR_2->nvp_last = VAR_3;
 }
}
