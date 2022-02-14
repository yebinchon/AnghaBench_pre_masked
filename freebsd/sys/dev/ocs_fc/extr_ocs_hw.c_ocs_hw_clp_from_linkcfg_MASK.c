
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ ocs_hw_linkcfg_e ;
struct TYPE_3__ {scalar_t__ linkcfg; char const* clp_str; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(ocs_hw_linkcfg_e VAR_1)
{
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].linkcfg == VAR_1) {
   return VAR_0[VAR_2].clp_str;
  }
 }
 return ((void*)0);
}
