
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int * filter_def; } ;
struct TYPE_5__ {int os; TYPE_1__ config; void* hw_war_version; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_property_e ;


 size_t FUNC_0 (int *) ;

 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int ,int ) ;

ocs_hw_rtn_e
FUNC_4(ocs_hw_t *VAR_2, ocs_hw_property_e VAR_3, void *VAR_4)
{
 ocs_hw_rtn_e VAR_5 = VAR_1;

 switch (VAR_3) {
 case 128:
  VAR_2->hw_war_version = VAR_4;
  break;
 case 129: {
  char *VAR_6 = VAR_4;
  uint32_t VAR_7 = 0;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->config.filter_def); VAR_7++) {
   VAR_2->config.filter_def[VAR_7] = 0;
  }

  for (VAR_7 = 0; (VAR_7 < FUNC_0(VAR_2->config.filter_def)) && (VAR_6 != ((void*)0)) && *VAR_6; ) {
   VAR_2->config.filter_def[VAR_7++] = FUNC_3(VAR_6, 0, 0);
   VAR_6 = FUNC_2(VAR_6, ',');
   if (VAR_6 != ((void*)0)) {
    VAR_6++;
   }
  }

  break;
 }
 default:
  FUNC_1(VAR_2->os, "unsupported property %#x\n", VAR_3);
  VAR_5 = VAR_0;
  break;
 }
 return VAR_5;
}
