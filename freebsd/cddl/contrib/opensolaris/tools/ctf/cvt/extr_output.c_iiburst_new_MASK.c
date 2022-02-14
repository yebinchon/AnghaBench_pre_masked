
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tdata_t ;
typedef int iidesc_t ;
struct TYPE_3__ {scalar_t__ iib_nobjts; void* iib_objts; scalar_t__ iib_nfuncs; void* iib_funcs; int * iib_td; } ;
typedef TYPE_1__ iiburst_t ;


 void* FUNC_0 (int) ;

__attribute__((used)) static iiburst_t *
FUNC_1(tdata_t *VAR_0, int VAR_1)
{
 iiburst_t *VAR_2 = FUNC_0(sizeof (iiburst_t));
 VAR_2->iib_td = VAR_0;
 VAR_2->iib_funcs = FUNC_0(sizeof (iidesc_t *) * VAR_1);
 VAR_2->iib_nfuncs = 0;
 VAR_2->iib_objts = FUNC_0(sizeof (iidesc_t *) * VAR_1);
 VAR_2->iib_nobjts = 0;
 return (VAR_2);
}
