
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int* aMap; size_t iReadOff; int nBuffer; int* aBuffer; } ;
typedef TYPE_1__ PmaReader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int *) ;
 int FUNC_1 (TYPE_1__*,int,int**) ;

__attribute__((used)) static int FUNC_2(PmaReader *VAR_1, u64 *VAR_2){
  int VAR_3;

  if( VAR_1->aMap ){
    VAR_1->iReadOff += FUNC_0(&VAR_1->aMap[VAR_1->iReadOff], VAR_2);
  }else{
    VAR_3 = VAR_1->iReadOff % VAR_1->nBuffer;
    if( VAR_3 && (VAR_1->nBuffer-VAR_3)>=9 ){
      VAR_1->iReadOff += FUNC_0(&VAR_1->aBuffer[VAR_3], VAR_2);
    }else{
      u8 VAR_4[16], *VAR_5;
      int VAR_6 = 0, VAR_7;
      do{
        VAR_7 = FUNC_1(VAR_1, 1, &VAR_5);
        if( VAR_7 ) return VAR_7;
        VAR_4[(VAR_6++)&0xf] = VAR_5[0];
      }while( (VAR_5[0]&0x80)!=0 );
      FUNC_0(VAR_4, VAR_2);
    }
  }

  return VAR_0;
}
