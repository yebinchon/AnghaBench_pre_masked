
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uptr ;
typedef scalar_t__ u8 ;
struct TYPE_7__ {int* ixNx; int* szCell; scalar_t__** apCell; scalar_t__** apEnd; } ;
struct TYPE_6__ {scalar_t__ hdrOffset; scalar_t__* aData; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ CellArray ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_3 (TYPE_1__*,int,int*) ;
 int FUNC_4 (scalar_t__*,int) ;

__attribute__((used)) static int FUNC_5(
  MemPage *VAR_3,
  u8 *VAR_4,
  u8 **VAR_5,
  u8 *VAR_6,
  int VAR_7,
  int VAR_8,
  CellArray *VAR_9
){
  int VAR_10 = VAR_7;
  u8 *VAR_11 = VAR_3->aData;
  u8 *VAR_12 = *VAR_5;
  int VAR_13 = VAR_7 + VAR_8;
  int VAR_14;
  u8 *VAR_15;
  FUNC_1( VAR_0 || VAR_3->hdrOffset==0 );
  if( VAR_13<=VAR_7 ) return 0;
  for(VAR_14=0; VAR_9->ixNx[VAR_14]<=VAR_10 && FUNC_0(VAR_14<VAR_1*2); VAR_14++){}
  VAR_15 = VAR_9->apEnd[VAR_14];
  while( 1 ){
    int VAR_16, VAR_17;
    u8 *VAR_18;
    FUNC_1( VAR_9->szCell[VAR_10]!=0 );
    VAR_16 = VAR_9->szCell[VAR_10];
    if( (VAR_11[1]==0 && VAR_11[2]==0) || (VAR_18 = FUNC_3(VAR_3,VAR_16,&VAR_17))==0 ){
      if( (VAR_12 - VAR_4)<VAR_16 ) return 1;
      VAR_12 -= VAR_16;
      VAR_18 = VAR_12;
    }



    FUNC_1( (VAR_18+VAR_16)<=VAR_9->apCell[VAR_10]
         || VAR_18>=(VAR_9->apCell[VAR_10]+VAR_16)
         || VAR_0 );
    if( (uptr)(VAR_9->apCell[VAR_10]+VAR_16)>(uptr)VAR_15
     && (uptr)(VAR_9->apCell[VAR_10])<(uptr)VAR_15
    ){
      FUNC_1( VAR_0 );
      (void)VAR_2;
      return 1;
    }
    FUNC_2(VAR_18, VAR_9->apCell[VAR_10], VAR_16);
    FUNC_4(VAR_6, (VAR_18 - VAR_11));
    VAR_6 += 2;
    VAR_10++;
    if( VAR_10>=VAR_13 ) break;
    if( VAR_9->ixNx[VAR_14]<=VAR_10 ){
      VAR_14++;
      VAR_15 = VAR_9->apEnd[VAR_14];
    }
  }
  *VAR_5 = VAR_12;
  return 0;
}
