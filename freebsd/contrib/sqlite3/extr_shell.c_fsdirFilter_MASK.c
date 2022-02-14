
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_4__ {char const* zBase; int nBase; scalar_t__ zPath; int sStat; } ;
typedef TYPE_1__ fsdir_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 void* FUNC_4 (char*,char const*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_vtab_cursor *VAR_3,
  int VAR_4, const char *VAR_5,
  int VAR_6, sqlite3_value **VAR_7
){
  const char *VAR_8 = 0;
  fsdir_cursor *VAR_9 = (fsdir_cursor*)VAR_3;
  (void)VAR_5;
  FUNC_2(VAR_9);

  if( VAR_4==0 ){
    FUNC_3(VAR_9, "table function fsdir requires an argument");
    return VAR_0;
  }

  FUNC_0( VAR_6==VAR_4 && (VAR_6==1 || VAR_6==2) );
  VAR_8 = (const char*)FUNC_5(VAR_7[0]);
  if( VAR_8==0 ){
    FUNC_3(VAR_9, "table function fsdir requires a non-NULL argument");
    return VAR_0;
  }
  if( VAR_6==2 ){
    VAR_9->zBase = (const char*)FUNC_5(VAR_7[1]);
  }
  if( VAR_9->zBase ){
    VAR_9->nBase = (int)FUNC_6(VAR_9->zBase)+1;
    VAR_9->zPath = FUNC_4("%s/%s", VAR_9->zBase, VAR_8);
  }else{
    VAR_9->zPath = FUNC_4("%s", VAR_8);
  }

  if( VAR_9->zPath==0 ){
    return VAR_1;
  }
  if( FUNC_1(VAR_9->zPath, &VAR_9->sStat) ){
    FUNC_3(VAR_9, "cannot stat file: %s", VAR_9->zPath);
    return VAR_0;
  }

  return VAR_2;
}
