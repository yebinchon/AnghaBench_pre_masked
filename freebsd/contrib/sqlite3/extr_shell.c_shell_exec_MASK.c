
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
struct TYPE_15__ {scalar_t__ pExpert; } ;
struct TYPE_16__ {scalar_t__ autoEQP; scalar_t__ cMode; scalar_t__ mode; int * pStmt; scalar_t__ scanstatsOn; scalar_t__ statsOn; scalar_t__ autoExplain; int out; scalar_t__ cnt; TYPE_1__ expert; int * db; } ;
typedef TYPE_2__ ShellState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int,int,char const*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int,char**) ;
 int FUNC_10 (TYPE_2__*,char const*,char**) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 () ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ,int,int*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*,char const*) ;
 int FUNC_21 (int *,char const*,int,int **,char const**) ;
 char* FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_26(
  ShellState *VAR_9,
  const char *VAR_10,
  char **VAR_11
){
  sqlite3_stmt *VAR_12 = ((void*)0);
  int VAR_13 = VAR_7;
  int VAR_14;
  const char *VAR_15;
  sqlite3 *VAR_16 = VAR_9->db;

  if( VAR_11 ){
    *VAR_11 = ((void*)0);
  }


  if( VAR_9->expert.pExpert ){
    VAR_13 = FUNC_10(VAR_9, VAR_10, VAR_11);
    return FUNC_9(VAR_9, (VAR_13!=VAR_7), VAR_11);
  }


  while( VAR_10[0] && (VAR_7 == VAR_13) ){
    static const char *VAR_17;
    VAR_13 = FUNC_21(VAR_16, VAR_10, -1, &VAR_12, &VAR_15);
    if( VAR_7 != VAR_13 ){
      if( VAR_11 ){
        *VAR_11 = FUNC_14(VAR_16);
      }
    }else{
      if( !VAR_12 ){

        VAR_10 = VAR_15;
        while( FUNC_0(VAR_10[0]) ) VAR_10++;
        continue;
      }
      VAR_17 = FUNC_22(VAR_12);
      if( VAR_17==0 ) VAR_17 = "";
      while( FUNC_0(VAR_17[0]) ) VAR_17++;


      if( VAR_9 ){
        VAR_9->pStmt = VAR_12;
        VAR_9->cnt = 0;
      }


      if( VAR_9 && FUNC_1(VAR_9, VAR_4) ){
        FUNC_25(VAR_9->out, "%s\n", VAR_17 ? VAR_17 : VAR_10);
      }


      if( VAR_9 && VAR_9->autoEQP && FUNC_24(VAR_12)==0 ){
        sqlite3_stmt *VAR_18;
        char *VAR_19;
        int VAR_20 = 0;
        FUNC_3();
        FUNC_17(VAR_16, VAR_5, -1, &VAR_20);
        if( VAR_9->autoEQP>=VAR_1 ){
          FUNC_17(VAR_16, VAR_5, 1, 0);
        }
        VAR_19 = FUNC_20("EXPLAIN QUERY PLAN %s", VAR_17);
        VAR_13 = FUNC_21(VAR_16, VAR_19, -1, &VAR_18, 0);
        if( VAR_13==VAR_7 ){
          while( FUNC_23(VAR_18)==VAR_8 ){
            const char *VAR_21 = (const char*)FUNC_16(VAR_18,3);
            int VAR_22 = FUNC_15(VAR_18, 0);
            int VAR_23 = FUNC_15(VAR_18, 1);
            if( VAR_21[0]=='-' ) FUNC_7(VAR_9);
            FUNC_6(VAR_9, VAR_22, VAR_23, VAR_21);
          }
          FUNC_7(VAR_9);
        }
        FUNC_18(VAR_18);
        FUNC_19(VAR_19);
        if( VAR_9->autoEQP>=VAR_0 ){

          VAR_19 = FUNC_20("EXPLAIN %s", VAR_17);
          VAR_13 = FUNC_21(VAR_16, VAR_19, -1, &VAR_18, 0);
          if( VAR_13==VAR_7 ){
            VAR_9->cMode = VAR_3;
            FUNC_12(VAR_9, VAR_18);
            FUNC_8(VAR_9, VAR_18);
            FUNC_11(VAR_9);
          }
          FUNC_18(VAR_18);
          FUNC_19(VAR_19);
        }
        if( VAR_9->autoEQP>=VAR_1 && VAR_20==0 ){
          FUNC_17(VAR_16, VAR_5, 0, 0);

          FUNC_18(VAR_12);
          FUNC_21(VAR_16, VAR_10, -1, &VAR_12, 0);
          if( VAR_9 ) VAR_9->pStmt = VAR_12;
        }
        FUNC_13();
      }

      if( VAR_9 ){
        VAR_9->cMode = VAR_9->mode;
        if( VAR_9->autoExplain ){
          if( FUNC_24(VAR_12)==1 ){
            VAR_9->cMode = VAR_3;
          }
          if( FUNC_24(VAR_12)==2 ){
            VAR_9->cMode = VAR_2;
          }
        }



        if( VAR_9->cMode==VAR_3 ){
          FUNC_12(VAR_9, VAR_12);
        }
      }

      FUNC_2(VAR_9, VAR_12);
      FUNC_8(VAR_9, VAR_12);
      FUNC_11(VAR_9);
      FUNC_7(VAR_9);


      if( VAR_9 && VAR_9->statsOn ){
        FUNC_5(VAR_16, VAR_9, 0);
      }


      if( VAR_9 && VAR_9->scanstatsOn ){
        FUNC_4(VAR_16, VAR_9);
      }




      VAR_14 = FUNC_18(VAR_12);
      if( VAR_13!=VAR_6 ) VAR_13 = VAR_14;
      if( VAR_13==VAR_7 ){
        VAR_10 = VAR_15;
        while( FUNC_0(VAR_10[0]) ) VAR_10++;
      }else if( VAR_11 ){
        *VAR_11 = FUNC_14(VAR_16);
      }


      if( VAR_9 ){
        VAR_9->pStmt = ((void*)0);
      }
    }
  }

  return VAR_13;
}
