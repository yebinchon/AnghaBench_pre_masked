
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int hIdx; TYPE_2__* pStatement; int * dbm; } ;
typedef TYPE_1__ sqlite3expert ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_12__ {TYPE_3__* pFirst; } ;
struct TYPE_11__ {char const* zKey; struct TYPE_11__* pNext; } ;
struct TYPE_10__ {void* zIdx; void* zEQP; int zSql; struct TYPE_10__* pNext; } ;
typedef TYPE_2__ IdxStatement ;
typedef TYPE_3__ IdxHashEntry ;
typedef TYPE_4__ IdxHash ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 void* FUNC_1 (int*,void*,char*,char const*) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int*,TYPE_4__*,char const*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 char* FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *,int **,char**,char*,int ) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *) ;

int FUNC_11(
  sqlite3expert *VAR_2,
  char **VAR_3
){
  IdxStatement *VAR_4;
  sqlite3 *VAR_5 = VAR_2->dbm;
  int VAR_6 = VAR_0;

  IdxHash VAR_7;
  FUNC_5(&VAR_7);

  for(VAR_4=VAR_2->pStatement; VAR_6==VAR_0 && VAR_4; VAR_4=VAR_4->pNext){
    IdxHashEntry *VAR_8;
    sqlite3_stmt *VAR_9 = 0;
    FUNC_4(&VAR_7);
    VAR_6 = FUNC_7(VAR_5, &VAR_9, VAR_3,
        "EXPLAIN QUERY PLAN %s", VAR_4->zSql
    );
    while( VAR_6==VAR_0 && FUNC_10(VAR_9)==VAR_1 ){



      const char *VAR_10 = (const char*)FUNC_9(VAR_9, 3);
      int VAR_11 = FUNC_0(VAR_10);
      int VAR_12;

      for(VAR_12=0; VAR_12<VAR_11; VAR_12++){
        const char *VAR_13 = 0;
        if( FUNC_8(&VAR_10[VAR_12], " USING INDEX ", 13)==0 ){
          VAR_13 = &VAR_10[VAR_12+13];
        }else if( FUNC_8(&VAR_10[VAR_12], " USING COVERING INDEX ", 22)==0 ){
          VAR_13 = &VAR_10[VAR_12+22];
        }
        if( VAR_13 ){
          const char *VAR_14;
          int VAR_15 = 0;
          while( VAR_13[VAR_15]!='\0' && (VAR_13[VAR_15]!=' ' || VAR_13[VAR_15+1]!='(') ){
            VAR_15++;
          }
          VAR_14 = FUNC_6(&VAR_2->hIdx, VAR_13, VAR_15);
          if( VAR_14 ){
            FUNC_3(&VAR_6, &VAR_7, VAR_14, 0);
            if( VAR_6 ) goto find_indexes_out;
          }
          break;
        }
      }

      if( VAR_10[0]!='-' ){
        VAR_4->zEQP = FUNC_1(&VAR_6, VAR_4->zEQP, "%s\n", VAR_10);
      }
    }

    for(VAR_8=VAR_7.pFirst; VAR_8; VAR_8=VAR_8->pNext){
      VAR_4->zIdx = FUNC_1(&VAR_6, VAR_4->zIdx, "%s;\n", VAR_8->zKey);
    }

    FUNC_2(&VAR_6, VAR_9);
  }

 find_indexes_out:
  FUNC_4(&VAR_7);
  return VAR_6;
}
