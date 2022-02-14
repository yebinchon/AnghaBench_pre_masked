
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * nvp_nva; } ;
typedef TYPE_1__ nvpriv_t ;
struct TYPE_5__ {scalar_t__ nvl_priv; } ;
typedef TYPE_2__ nvlist_t ;
typedef int nv_alloc_t ;



nv_alloc_t *
FUNC_0(nvlist_t *VAR_0)
{
 nvpriv_t *VAR_1;

 if (VAR_0 == ((void*)0) ||
     (VAR_1 = (nvpriv_t *)(uintptr_t)VAR_0->nvl_priv) == ((void*)0))
  return (((void*)0));

 return (VAR_1->nvp_nva);
}
