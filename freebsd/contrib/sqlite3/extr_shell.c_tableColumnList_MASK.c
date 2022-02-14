
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int azCol ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int) ;
 char const* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char const*) ;
 int FUNC_8 (int ,char*,int,int **,int ) ;
 char** FUNC_9 (char**,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (int ,int ,char const*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static char **FUNC_13(ShellState *VAR_3, const char *VAR_4){
  char **VAR_5 = 0;
  sqlite3_stmt *VAR_6;
  char *VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = FUNC_0(VAR_3, VAR_0);
  int VAR_13;

  VAR_7 = FUNC_7("PRAGMA table_info=%Q", VAR_4);
  VAR_13 = FUNC_8(VAR_3->db, VAR_7, -1, &VAR_6, 0);
  FUNC_6(VAR_7);
  if( VAR_13 ) return 0;
  while( FUNC_10(VAR_6)==VAR_2 ){
    if( VAR_8>=VAR_9-2 ){
      VAR_9 = VAR_9*2 + VAR_8 + 10;
      VAR_5 = FUNC_9(VAR_5, VAR_9*sizeof(VAR_5[0]));
      if( VAR_5==0 ) FUNC_2();
    }
    VAR_5[++VAR_8] = FUNC_7("%s", FUNC_4(VAR_6, 1));
    if( FUNC_3(VAR_6, 5) ){
      VAR_10++;
      if( VAR_10==1
       && FUNC_11((const char*)FUNC_4(VAR_6,2),
                          "INTEGER")==0
      ){
        VAR_11 = 1;
      }else{
        VAR_11 = 0;
      }
    }
  }
  FUNC_5(VAR_6);
  if( VAR_5==0 ) return 0;
  VAR_5[0] = 0;
  VAR_5[VAR_8+1] = 0;







  if( VAR_12 && VAR_11 ){







    VAR_7 = FUNC_7("SELECT 1 FROM pragma_index_list(%Q)"
                           " WHERE origin='pk'", VAR_4);
    VAR_13 = FUNC_8(VAR_3->db, VAR_7, -1, &VAR_6, 0);
    FUNC_6(VAR_7);
    if( VAR_13 ){
      FUNC_1(VAR_5);
      return 0;
    }
    VAR_13 = FUNC_10(VAR_6);
    FUNC_5(VAR_6);
    VAR_12 = VAR_13==VAR_2;
  }
  if( VAR_12 ){


    static char *VAR_14[] = { "rowid", "_rowid_", "oid" };
    int VAR_15, VAR_16;
    for(VAR_16=0; VAR_16<3; VAR_16++){
      for(VAR_15=1; VAR_15<=VAR_8; VAR_15++){
        if( FUNC_11(VAR_14[VAR_16],VAR_5[VAR_15])==0 ) break;
      }
      if( VAR_15>VAR_8 ){




        VAR_13 = FUNC_12(VAR_3->db,0,VAR_4,VAR_14[VAR_16],0,0,0,0,0);
        if( VAR_13==VAR_1 ) VAR_5[0] = VAR_14[VAR_16];
        break;
      }
    }
  }
  return VAR_5;
}
