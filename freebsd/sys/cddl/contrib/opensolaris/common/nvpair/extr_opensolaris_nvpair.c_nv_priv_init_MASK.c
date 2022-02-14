
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int nvp_stat; int * nvp_nva; } ;
typedef TYPE_1__ nvpriv_t ;
typedef int nv_alloc_t ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(nvpriv_t *VAR_0, nv_alloc_t *VAR_1, uint32_t VAR_2)
{
 FUNC_0(VAR_0, sizeof (nvpriv_t));

 VAR_0->nvp_nva = VAR_1;
 VAR_0->nvp_stat = VAR_2;
}
