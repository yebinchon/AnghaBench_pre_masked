
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ocs_hw_linkcfg_e ;
struct TYPE_3__ {int linkcfg; int mgmt_str; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static ocs_hw_linkcfg_e
FUNC_3(const char *VAR_2)
{
 uint32_t VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (FUNC_2(VAR_1[VAR_3].mgmt_str,
    VAR_2, FUNC_1(VAR_2)) == 0) {
   return VAR_1[VAR_3].linkcfg;
  }
 }
 return VAR_0;
}
