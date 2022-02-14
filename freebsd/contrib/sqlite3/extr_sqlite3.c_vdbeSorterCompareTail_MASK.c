
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UnpackedRecord ;
struct TYPE_5__ {TYPE_1__* pSorter; int * pUnpacked; } ;
struct TYPE_4__ {int pKeyInfo; } ;
typedef TYPE_2__ SortSubtask ;


 int FUNC_0 (int,void const*,int *,int) ;
 int FUNC_1 (int ,int,void const*,int *) ;

__attribute__((used)) static int FUNC_2(
  SortSubtask *VAR_0,
  int *VAR_1,
  const void *VAR_2, int VAR_3,
  const void *VAR_4, int VAR_5
){
  UnpackedRecord *VAR_6 = VAR_0->pUnpacked;
  if( *VAR_1==0 ){
    FUNC_1(VAR_0->pSorter->pKeyInfo, VAR_5, VAR_4, VAR_6);
    *VAR_1 = 1;
  }
  return FUNC_0(VAR_3, VAR_2, VAR_6, 1);
}
