
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nTask; int * aTask; } ;
typedef TYPE_1__ VdbeSorter ;
typedef int SortSubtask ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(VdbeSorter *VAR_1, int VAR_2){
  int VAR_3 = VAR_2;
  int VAR_4;
  for(VAR_4=VAR_1->nTask-1; VAR_4>=0; VAR_4--){
    SortSubtask *VAR_5 = &VAR_1->aTask[VAR_4];
    int VAR_6 = FUNC_0(VAR_5);
    if( VAR_3==VAR_0 ) VAR_3 = VAR_6;
  }
  return VAR_3;
}
