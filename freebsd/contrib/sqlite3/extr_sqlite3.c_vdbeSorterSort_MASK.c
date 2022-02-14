
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {TYPE_2__* pUnpacked; int pSorter; int xCompare; } ;
struct TYPE_17__ {TYPE_3__* pList; int * aMemory; } ;
struct TYPE_14__ {size_t iNext; TYPE_3__* pNext; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
struct TYPE_15__ {int errCode; } ;
typedef TYPE_3__ SorterRecord ;
typedef TYPE_4__ SorterList ;
typedef TYPE_5__ SortSubtask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (TYPE_5__*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(SortSubtask *VAR_3, SorterList *VAR_4){
  int VAR_5;
  SorterRecord **VAR_6;
  SorterRecord *VAR_7;
  int VAR_8;

  VAR_8 = FUNC_4(VAR_3);
  if( VAR_8!=VAR_2 ) return VAR_8;

  VAR_7 = VAR_4->pList;
  VAR_3->xCompare = FUNC_5(VAR_3->pSorter);

  VAR_6 = (SorterRecord **)FUNC_2(64 * sizeof(SorterRecord *));
  if( !VAR_6 ){
    return VAR_1;
  }

  while( VAR_7 ){
    SorterRecord *VAR_9;
    if( VAR_4->aMemory ){
      if( (u8*)VAR_7==VAR_4->aMemory ){
        VAR_9 = 0;
      }else{
        FUNC_0( VAR_7->u.iNext<FUNC_1(VAR_4->aMemory) );
        VAR_9 = (SorterRecord*)&VAR_4->aMemory[VAR_7->u.iNext];
      }
    }else{
      VAR_9 = VAR_7->u.pNext;
    }

    VAR_7->u.pNext = 0;
    for(VAR_5=0; VAR_6[VAR_5]; VAR_5++){
      VAR_7 = FUNC_6(VAR_3, VAR_7, VAR_6[VAR_5]);
      VAR_6[VAR_5] = 0;
    }
    VAR_6[VAR_5] = VAR_7;
    VAR_7 = VAR_9;
  }

  VAR_7 = 0;
  for(VAR_5=0; VAR_5<64; VAR_5++){
    if( VAR_6[VAR_5]==0 ) continue;
    VAR_7 = VAR_7 ? FUNC_6(VAR_3, VAR_7, VAR_6[VAR_5]) : VAR_6[VAR_5];
  }
  VAR_4->pList = VAR_7;

  FUNC_3(VAR_6);
  FUNC_0( VAR_3->pUnpacked->errCode==VAR_2
       || VAR_3->pUnpacked->errCode==VAR_0
  );
  return VAR_3->pUnpacked->errCode;
}
