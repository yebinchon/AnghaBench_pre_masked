
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int writableSchema; char* zDestTable; int mode; int cMode; int nErr; int db; int out; } ;
struct TYPE_8__ {char* z; } ;
typedef TYPE_1__ ShellText ;
typedef TYPE_2__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char const*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (char const*,char*,int) ;
 char** FUNC_14 (TYPE_2__*,char const*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_17(void *VAR_2, int VAR_3, char **VAR_4, char **VAR_5){
  int VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  ShellState *VAR_10 = (ShellState *)VAR_2;

  FUNC_0(VAR_5);
  if( VAR_3!=3 || VAR_4==0 ) return 0;
  VAR_7 = VAR_4[0];
  VAR_8 = VAR_4[1];
  VAR_9 = VAR_4[2];

  if( FUNC_12(VAR_7, "sqlite_sequence")==0 ){
    FUNC_7(VAR_10->out, "DELETE FROM sqlite_sequence;\n");
  }else if( FUNC_11("sqlite_stat?", VAR_7)==0 ){
    FUNC_7(VAR_10->out, "ANALYZE sqlite_master;\n");
  }else if( FUNC_13(VAR_7, "sqlite_", 7)==0 ){
    return 0;
  }else if( FUNC_13(VAR_9, "CREATE VIRTUAL TABLE", 20)==0 ){
    char *VAR_11;
    if( !VAR_10->writableSchema ){
      FUNC_7(VAR_10->out, "PRAGMA writable_schema=ON;\n");
      VAR_10->writableSchema = 1;
    }
    VAR_11 = FUNC_10(
       "INSERT INTO sqlite_master(type,name,tbl_name,rootpage,sql)"
       "VALUES('table','%q','%q',0,'%q');",
       VAR_7, VAR_7, VAR_9);
    FUNC_16(VAR_10->out, "%s\n", VAR_11);
    FUNC_9(VAR_11);
    return 0;
  }else{
    FUNC_5(VAR_10->out, VAR_9, ";\n");
  }

  if( FUNC_12(VAR_8, "table")==0 ){
    ShellText VAR_12;
    ShellText VAR_13;
    char **VAR_14;
    int VAR_15;
    char *VAR_16;
    int VAR_17;

    VAR_14 = FUNC_14(VAR_10, VAR_7);
    if( VAR_14==0 ){
      VAR_10->nErr++;
      return 0;
    }



    FUNC_4(&VAR_13);
    FUNC_1(&VAR_13, VAR_7, FUNC_6(VAR_7));




    if( VAR_14[0] ){
      FUNC_1(&VAR_13, "(", 0);
      FUNC_1(&VAR_13, VAR_14[0], 0);
      for(VAR_15=1; VAR_14[VAR_15]; VAR_15++){
        FUNC_1(&VAR_13, ",", 0);
        FUNC_1(&VAR_13, VAR_14[VAR_15], FUNC_6(VAR_14[VAR_15]));
      }
      FUNC_1(&VAR_13, ")", 0);
    }


    FUNC_4(&VAR_12);
    FUNC_1(&VAR_12, "SELECT ", 0);
    if( VAR_14[0] ){
      FUNC_1(&VAR_12, VAR_14[0], 0);
      FUNC_1(&VAR_12, ",", 0);
    }
    for(VAR_15=1; VAR_14[VAR_15]; VAR_15++){
      FUNC_1(&VAR_12, VAR_14[VAR_15], FUNC_6(VAR_14[VAR_15]));
      if( VAR_14[VAR_15+1] ){
        FUNC_1(&VAR_12, ",", 0);
      }
    }
    FUNC_2(VAR_14);
    FUNC_1(&VAR_12, " FROM ", 0);
    FUNC_1(&VAR_12, VAR_7, FUNC_6(VAR_7));

    VAR_16 = VAR_10->zDestTable;
    VAR_17 = VAR_10->mode;
    VAR_10->zDestTable = VAR_13.z;
    VAR_10->mode = VAR_10->cMode = VAR_0;
    VAR_6 = FUNC_8(VAR_10, VAR_12.z, 0);
    if( (VAR_6&0xff)==VAR_1 ){
      FUNC_7(VAR_10->out, "/****** CORRUPTION ERROR *******/\n");
      FUNC_15(VAR_10->db);
      FUNC_8(VAR_10, VAR_12.z, 0);
      FUNC_15(VAR_10->db);
    }
    VAR_10->zDestTable = VAR_16;
    VAR_10->mode = VAR_17;
    FUNC_3(&VAR_13);
    FUNC_3(&VAR_12);
    if( VAR_6 ) VAR_10->nErr++;
  }
  return 0;
}
