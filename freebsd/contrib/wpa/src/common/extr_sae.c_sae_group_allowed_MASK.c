
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sae_data {scalar_t__ state; int group; TYPE_1__* tmp; } ;
struct TYPE_2__ {scalar_t__ dh; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sae_data*,int) ;
 int FUNC_1 (int ,char*,...) ;

u16 FUNC_2(struct sae_data *VAR_5, int *VAR_6, u16 VAR_7)
{
 if (VAR_6) {
  int VAR_8;
  for (VAR_8 = 0; VAR_6[VAR_8] > 0; VAR_8++) {
   if (VAR_6[VAR_8] == VAR_7)
    break;
  }
  if (VAR_6[VAR_8] != VAR_7) {
   FUNC_1(VAR_0, "SAE: Proposed group %u not "
       "enabled in the current configuration",
       VAR_7);
   return VAR_2;
  }
 }

 if (VAR_5->state == VAR_1 && VAR_7 != VAR_5->group) {
  FUNC_1(VAR_0, "SAE: Do not allow group to be changed");
  return VAR_2;
 }

 if (VAR_7 != VAR_5->group && FUNC_0(VAR_5, VAR_7) < 0) {
  FUNC_1(VAR_0, "SAE: Unsupported Finite Cyclic Group %u",
      VAR_7);
  return VAR_2;
 }

 if (VAR_5->tmp == ((void*)0)) {
  FUNC_1(VAR_0, "SAE: Group information not yet initialized");
  return VAR_4;
 }

 if (VAR_5->tmp->dh && !VAR_6) {
  FUNC_1(VAR_0, "SAE: Do not allow FFC group %u without "
      "explicit configuration enabling it", VAR_7);
  return VAR_2;
 }

 return VAR_3;
}
