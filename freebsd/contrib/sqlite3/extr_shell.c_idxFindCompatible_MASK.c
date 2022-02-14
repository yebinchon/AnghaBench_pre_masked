
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_9__ {int bFlag; int iCol; struct TYPE_9__* pLink; int zColl; } ;
struct TYPE_8__ {TYPE_1__* pTab; } ;
struct TYPE_7__ {char* zName; } ;
typedef TYPE_2__ IdxScan ;
typedef TYPE_3__ IdxConstraint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *,int **,int ,char*,char const*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char const*) ;

__attribute__((used)) static int FUNC_7(
  int *VAR_2,
  sqlite3* VAR_3,
  IdxScan *VAR_4,
  IdxConstraint *VAR_5,
  IdxConstraint *VAR_6
){
  const char *VAR_7 = VAR_4->pTab->zName;
  sqlite3_stmt *VAR_8 = 0;
  IdxConstraint *VAR_9;
  int VAR_10 = 0;
  int VAR_11;


  for(VAR_9=VAR_5; VAR_9; VAR_9=VAR_9->pLink) VAR_10++;

  VAR_11 = FUNC_1(VAR_3, &VAR_8, 0, "PRAGMA index_list=%Q", VAR_7);
  while( VAR_11==VAR_0 && FUNC_5(VAR_8)==VAR_1 ){
    int VAR_12 = 1;
    IdxConstraint *VAR_13 = VAR_6;
    sqlite3_stmt *VAR_14 = 0;
    const char *VAR_15 = (const char*)FUNC_3(VAR_8, 1);


    for(VAR_9=VAR_5; VAR_9; VAR_9=VAR_9->pLink) VAR_9->bFlag = 0;

    VAR_11 = FUNC_1(VAR_3, &VAR_14, 0, "PRAGMA index_xInfo=%Q", VAR_15);
    while( VAR_11==VAR_0 && FUNC_5(VAR_14)==VAR_1 ){
      int VAR_16 = FUNC_2(VAR_14, 0);
      int VAR_17 = FUNC_2(VAR_14, 1);
      const char *VAR_18 = (const char*)FUNC_3(VAR_14, 4);

      if( VAR_16<VAR_10 ){
        for(VAR_9=VAR_5; VAR_9; VAR_9=VAR_9->pLink){
          if( VAR_9->bFlag ) continue;
          if( VAR_9->iCol!=VAR_17 ) continue;
          if( FUNC_6(VAR_9->zColl, VAR_18) ) continue;
          VAR_9->bFlag = 1;
          break;
        }
        if( VAR_9==0 ){
          VAR_12 = 0;
          break;
        }
      }else{
        if( VAR_13 ){
          if( VAR_13->iCol!=VAR_17 || FUNC_6(VAR_13->zColl, VAR_18) ){
            VAR_12 = 0;
            break;
          }
          VAR_13 = VAR_13->pLink;
        }
      }
    }
    FUNC_0(&VAR_11, VAR_14);

    if( VAR_11==VAR_0 && VAR_12 ){
      FUNC_4(VAR_8);
      return 1;
    }
  }
  FUNC_0(&VAR_11, VAR_8);

  *VAR_2 = VAR_11;
  return 0;
}
