
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uptr ;
typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_10__ {int* ixNx; int* szCell; int ** apEnd; int ** apCell; } ;
struct TYPE_9__ {int hdrOffset; int (* xCellSize ) (TYPE_2__*,int *) ;int nCell; scalar_t__ nOverflow; TYPE_1__* pBt; int * aCellIdx; int * aData; } ;
struct TYPE_8__ {int usableSize; int pPager; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellArray ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int * const,int * const) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int const) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(
  CellArray *VAR_4,
  int VAR_5,
  int VAR_6,
  MemPage *VAR_7
){
  const int VAR_8 = VAR_7->hdrOffset;
  u8 * const VAR_9 = VAR_7->aData;
  const int VAR_10 = VAR_7->pBt->usableSize;
  u8 * const VAR_11 = &VAR_9[VAR_10];
  int VAR_12 = VAR_5;
  u32 VAR_13;
  int VAR_14 = VAR_12+VAR_6;
  u8 *VAR_15 = VAR_7->aCellIdx;
  u8 *VAR_16 = FUNC_6(VAR_7->pBt->pPager);
  u8 *VAR_17;
  int VAR_18;
  u8 *VAR_19;

  FUNC_2( VAR_12<VAR_14 );
  VAR_13 = FUNC_3(&VAR_9[VAR_8+5]);
  if( VAR_13>(u32)VAR_10 ){ VAR_13 = 0; }
  FUNC_4(&VAR_16[VAR_13], &VAR_9[VAR_13], VAR_10 - VAR_13);

  for(VAR_18=0; VAR_4->ixNx[VAR_18]<=VAR_12 && FUNC_0(VAR_18<VAR_1*2); VAR_18++){}
  VAR_19 = VAR_4->apEnd[VAR_18];

  VAR_17 = VAR_11;
  while( 1 ){
    u8 *VAR_20 = VAR_4->apCell[VAR_12];
    u16 VAR_21 = VAR_4->szCell[VAR_12];
    FUNC_2( VAR_21>0 );
    if( FUNC_1(VAR_20,VAR_9,VAR_11) ){
      if( ((uptr)(VAR_20+VAR_21))>(uptr)VAR_11 ) return VAR_2;
      VAR_20 = &VAR_16[VAR_20 - VAR_9];
    }else if( (uptr)(VAR_20+VAR_21)>(uptr)VAR_19
           && (uptr)(VAR_20)<(uptr)VAR_19
    ){
      return VAR_2;
    }

    VAR_17 -= VAR_21;
    FUNC_5(VAR_15, (VAR_17 - VAR_9));
    VAR_15 += 2;
    if( VAR_17 < VAR_15 ) return VAR_2;
    FUNC_4(VAR_17, VAR_20, VAR_21);
    FUNC_2( VAR_21==VAR_7->xCellSize(VAR_7, VAR_20) || VAR_0 );
    FUNC_9( VAR_21!=VAR_7->xCellSize(VAR_7,VAR_20) );
    VAR_12++;
    if( VAR_12>=VAR_14 ) break;
    if( VAR_4->ixNx[VAR_18]<=VAR_12 ){
      VAR_18++;
      VAR_19 = VAR_4->apEnd[VAR_18];
    }
  }


  VAR_7->nCell = VAR_6;
  VAR_7->nOverflow = 0;

  FUNC_5(&VAR_9[VAR_8+1], 0);
  FUNC_5(&VAR_9[VAR_8+3], VAR_7->nCell);
  FUNC_5(&VAR_9[VAR_8+5], VAR_17 - VAR_9);
  VAR_9[VAR_8+7] = 0x00;
  return VAR_3;
}
