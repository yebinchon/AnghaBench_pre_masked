
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ ocs_hw_linkcfg_e ;
struct TYPE_3__ {scalar_t__ linkcfg; char const* mgmt_str; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 char const* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_1(ocs_hw_linkcfg_e VAR_2)
{
 uint32_t VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1[VAR_3].linkcfg == VAR_2) {
   return VAR_1[VAR_3].mgmt_str;
  }
 }
 return VAR_0;
}
