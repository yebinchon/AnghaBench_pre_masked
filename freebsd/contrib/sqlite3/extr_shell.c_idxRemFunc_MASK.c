
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IdxRemSlot {int eType; char* z; int n; int nByte; int rVal; int iVal; } ;
struct IdxRemCtx {int nSlot; struct IdxRemSlot* aSlot; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  struct IdxRemCtx *VAR_4 = (struct IdxRemCtx*)FUNC_8(VAR_1);
  struct IdxRemSlot *VAR_5;
  int VAR_6;
  FUNC_0( VAR_2==2 );

  VAR_6 = FUNC_12(VAR_3[0]);
  FUNC_0( VAR_6<=VAR_4->nSlot );
  VAR_5 = &VAR_4->aSlot[VAR_6];

  switch( VAR_5->eType ){
    case 129:

      break;

    case 130:
      FUNC_6(VAR_1, VAR_5->iVal);
      break;

    case 131:
      FUNC_4(VAR_1, VAR_5->rVal);
      break;

    case 132:
      FUNC_3(VAR_1, VAR_5->z, VAR_5->n, VAR_0);
      break;

    case 128:
      FUNC_7(VAR_1, VAR_5->z, VAR_5->n, VAR_0);
      break;
  }

  VAR_5->eType = FUNC_15(VAR_3[1]);
  switch( VAR_5->eType ){
    case 129:

      break;

    case 130:
      VAR_5->iVal = FUNC_13(VAR_3[1]);
      break;

    case 131:
      VAR_5->rVal = FUNC_11(VAR_3[1]);
      break;

    case 132:
    case 128: {
      int VAR_7 = FUNC_10(VAR_3[1]);
      if( VAR_7>VAR_5->nByte ){
        char *VAR_8 = (char*)FUNC_2(VAR_5->z, VAR_7*2);
        if( VAR_8==0 ){
          FUNC_5(VAR_1);
          return;
        }
        VAR_5->nByte = VAR_7*2;
        VAR_5->z = VAR_8;
      }
      VAR_5->n = VAR_7;
      if( VAR_5->eType==132 ){
        FUNC_1(VAR_5->z, FUNC_9(VAR_3[1]), VAR_7);
      }else{
        FUNC_1(VAR_5->z, FUNC_14(VAR_3[1]), VAR_7);
      }
      break;
    }
  }
}
