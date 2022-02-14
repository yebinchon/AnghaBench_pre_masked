
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_8__ {TYPE_2__* pSorter; } ;
struct TYPE_7__ {TYPE_1__* pKeyInfo; } ;
struct TYPE_6__ {int nKeyField; int* aSortFlags; } ;
typedef TYPE_3__ SortSubtask ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (size_t const*,int) ;
 int FUNC_3 (size_t const* const,size_t const* const,int) ;
 int FUNC_4 (TYPE_3__*,int*,void const*,int,void const*,int) ;

__attribute__((used)) static int FUNC_5(
  SortSubtask *VAR_1,
  int *VAR_2,
  const void *VAR_3, int VAR_4,
  const void *VAR_5, int VAR_6
){
  const u8 * const VAR_7 = (const u8 * const)VAR_3;
  const u8 * const VAR_8 = (const u8 * const)VAR_5;
  const u8 * const VAR_9 = &VAR_7[ VAR_7[0] ];
  const u8 * const VAR_10 = &VAR_8[ VAR_8[0] ];

  int VAR_11;
  int VAR_12;
  int VAR_13;

  FUNC_2(&VAR_7[1], VAR_11);
  FUNC_2(&VAR_8[1], VAR_12);
  VAR_13 = FUNC_3(VAR_9, VAR_10, (FUNC_0(VAR_11, VAR_12) - 13)/2);
  if( VAR_13==0 ){
    VAR_13 = VAR_11 - VAR_12;
  }

  if( VAR_13==0 ){
    if( VAR_1->pSorter->pKeyInfo->nKeyField>1 ){
      VAR_13 = FUNC_4(
          VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6
      );
    }
  }else{
    FUNC_1( !(VAR_1->pSorter->pKeyInfo->aSortFlags[0]&VAR_0) );
    if( VAR_1->pSorter->pKeyInfo->aSortFlags[0] ){
      VAR_13 = VAR_13 * -1;
    }
  }

  return VAR_13;
}
