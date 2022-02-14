
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
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int*,void const*,int,void const*,int) ;

__attribute__((used)) static int FUNC_2(
  SortSubtask *VAR_1,
  int *VAR_2,
  const void *VAR_3, int VAR_4,
  const void *VAR_5, int VAR_6
){
  const u8 * const VAR_7 = (const u8 * const)VAR_3;
  const u8 * const VAR_8 = (const u8 * const)VAR_5;
  const int VAR_9 = VAR_7[1];
  const int VAR_10 = VAR_8[1];
  const u8 * const VAR_11 = &VAR_7[ VAR_7[0] ];
  const u8 * const VAR_12 = &VAR_8[ VAR_8[0] ];
  int VAR_13;

  FUNC_0( (VAR_9>0 && VAR_9<7) || VAR_9==8 || VAR_9==9 );
  FUNC_0( (VAR_10>0 && VAR_10<7) || VAR_10==8 || VAR_10==9 );

  if( VAR_9==VAR_10 ){

    static const u8 VAR_14[] = {0, 1, 2, 3, 4, 6, 8, 0, 0, 0 };
    const u8 VAR_15 = VAR_14[VAR_9];
    int VAR_16;
    VAR_13 = 0;
    for(VAR_16=0; VAR_16<VAR_15; VAR_16++){
      if( (VAR_13 = VAR_11[VAR_16] - VAR_12[VAR_16])!=0 ){
        if( ((VAR_11[0] ^ VAR_12[0]) & 0x80)!=0 ){
          VAR_13 = VAR_11[0] & 0x80 ? -1 : +1;
        }
        break;
      }
    }
  }else if( VAR_9>7 && VAR_10>7 ){
    VAR_13 = VAR_9 - VAR_10;
  }else{
    if( VAR_10>7 ){
      VAR_13 = +1;
    }else if( VAR_9>7 ){
      VAR_13 = -1;
    }else{
      VAR_13 = VAR_9 - VAR_10;
    }
    FUNC_0( VAR_13!=0 );

    if( VAR_13>0 ){
      if( *VAR_11 & 0x80 ) VAR_13 = -1;
    }else{
      if( *VAR_12 & 0x80 ) VAR_13 = +1;
    }
  }

  if( VAR_13==0 ){
    if( VAR_1->pSorter->pKeyInfo->nKeyField>1 ){
      VAR_13 = FUNC_1(
          VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6
      );
    }
  }else if( VAR_1->pSorter->pKeyInfo->aSortFlags[0] ){
    FUNC_0( !(VAR_1->pSorter->pKeyInfo->aSortFlags[0]&VAR_0) );
    VAR_13 = VAR_13 * -1;
  }

  return VAR_13;
}
