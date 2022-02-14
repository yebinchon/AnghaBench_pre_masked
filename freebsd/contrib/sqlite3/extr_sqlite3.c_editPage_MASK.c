
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {int (* xCellSize ) (TYPE_4__*,int *) ;} ;
struct TYPE_17__ {int ** apCell; TYPE_4__* pRef; } ;
struct TYPE_16__ {int hdrOffset; int nCell; int nOverflow; int* aiOvfl; TYPE_1__* pBt; int * aCellIdx; int * aData; } ;
struct TYPE_15__ {size_t usableSize; int pPager; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellArray ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int * const,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int * const,size_t) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (TYPE_2__*,int,int,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int *,int **,int *,int,int,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_3__*,int,int,TYPE_2__*) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_16(
  MemPage *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  CellArray *VAR_7
){
  u8 * const VAR_8 = VAR_3->aData;
  const int VAR_9 = VAR_3->hdrOffset;
  u8 *VAR_10 = &VAR_3->aCellIdx[VAR_6 * 2];
  int VAR_11 = VAR_3->nCell;
  u8 *VAR_12;
  u8 *VAR_13;
  int VAR_14;
  int VAR_15 = VAR_4 + VAR_3->nCell + VAR_3->nOverflow;
  int VAR_16 = VAR_5 + VAR_6;







  FUNC_2( VAR_11>=0 );
  if( VAR_4<VAR_5 ){
    int VAR_17 = FUNC_9(VAR_3, VAR_4, VAR_5-VAR_4, VAR_7);
    if( VAR_17>VAR_11 ) return VAR_1;
    FUNC_8(VAR_3->aCellIdx, &VAR_3->aCellIdx[VAR_17*2], VAR_11*2);
    VAR_11 -= VAR_17;
  }
  if( VAR_16 < VAR_15 ){
    int VAR_18 = FUNC_9(VAR_3, VAR_16, VAR_15 - VAR_16, VAR_7);
    FUNC_2( VAR_11>=VAR_18 );
    VAR_11 -= VAR_18;
  }

  VAR_12 = &VAR_8[FUNC_5(&VAR_8[VAR_9+5])];
  if( VAR_12<VAR_10 ) goto editpage_fail;


  if( VAR_5<VAR_4 ){
    int VAR_19 = FUNC_0(VAR_6,VAR_4-VAR_5);
    FUNC_2( (VAR_4-VAR_5)<VAR_6 || VAR_11==0 || VAR_0 );
    FUNC_2( VAR_19>=0 );
    VAR_13 = VAR_3->aCellIdx;
    FUNC_8(&VAR_13[VAR_19*2], VAR_13, VAR_11*2);
    if( FUNC_10(
          VAR_3, VAR_10, &VAR_12, VAR_13,
          VAR_5, VAR_19, VAR_7
    ) ) goto editpage_fail;
    VAR_11 += VAR_19;
  }


  for(VAR_14=0; VAR_14<VAR_3->nOverflow; VAR_14++){
    int VAR_20 = (VAR_4 + VAR_3->aiOvfl[VAR_14]) - VAR_5;
    if( VAR_20>=0 && VAR_20<VAR_6 ){
      VAR_13 = &VAR_3->aCellIdx[VAR_20 * 2];
      if( VAR_11>VAR_20 ){
        FUNC_8(&VAR_13[2], VAR_13, (VAR_11 - VAR_20) * 2);
      }
      VAR_11++;
      FUNC_3(VAR_7, VAR_20+VAR_5);
      if( FUNC_10(
            VAR_3, VAR_10, &VAR_12, VAR_13,
            VAR_20+VAR_5, 1, VAR_7
      ) ) goto editpage_fail;
    }
  }


  FUNC_2( VAR_11>=0 );
  VAR_13 = &VAR_3->aCellIdx[VAR_11*2];
  if( FUNC_10(
        VAR_3, VAR_10, &VAR_12, VAR_13,
        VAR_5+VAR_11, VAR_6-VAR_11, VAR_7
  ) ) goto editpage_fail;

  VAR_3->nCell = VAR_6;
  VAR_3->nOverflow = 0;

  FUNC_12(&VAR_8[VAR_9+3], VAR_3->nCell);
  FUNC_12(&VAR_8[VAR_9+5], VAR_12 - VAR_8);
  return VAR_2;
 editpage_fail:

  FUNC_11(VAR_7, VAR_5, VAR_6);
  return FUNC_13(VAR_7, VAR_5, VAR_6, VAR_3);
}
