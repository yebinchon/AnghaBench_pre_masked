
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
struct TYPE_3__ {scalar_t__ nPrefix; scalar_t__ zPrefix; int nLine; char* zLine; int ePhase; scalar_t__ iRowid; } ;
typedef TYPE_1__ completion_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char) ;
 void* FUNC_3 (char*,int,...) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vtab_cursor *VAR_2,
  int VAR_3, const char *VAR_4,
  int VAR_5, sqlite3_value **VAR_6
){
  completion_cursor *VAR_7 = (completion_cursor *)VAR_2;
  int VAR_8 = 0;
  (void)(VAR_4);
  (void)(VAR_5);
  FUNC_0(VAR_7);
  if( VAR_3 & 1 ){
    VAR_7->nPrefix = FUNC_4(VAR_6[VAR_8]);
    if( VAR_7->nPrefix>0 ){
      VAR_7->zPrefix = FUNC_3("%s", FUNC_5(VAR_6[VAR_8]));
      if( VAR_7->zPrefix==0 ) return VAR_1;
    }
    VAR_8 = 1;
  }
  if( VAR_3 & 2 ){
    VAR_7->nLine = FUNC_4(VAR_6[VAR_8]);
    if( VAR_7->nLine>0 ){
      VAR_7->zLine = FUNC_3("%s", FUNC_5(VAR_6[VAR_8]));
      if( VAR_7->zLine==0 ) return VAR_1;
    }
  }
  if( VAR_7->zLine!=0 && VAR_7->zPrefix==0 ){
    int VAR_9 = VAR_7->nLine;
    while( VAR_9>0 && (FUNC_2(VAR_7->zLine[VAR_9-1]) || VAR_7->zLine[VAR_9-1]=='_') ){
      VAR_9--;
    }
    VAR_7->nPrefix = VAR_7->nLine - VAR_9;
    if( VAR_7->nPrefix>0 ){
      VAR_7->zPrefix = FUNC_3("%.*s", VAR_7->nPrefix, VAR_7->zLine + VAR_9);
      if( VAR_7->zPrefix==0 ) return VAR_1;
    }
  }
  VAR_7->iRowid = 0;
  VAR_7->ePhase = VAR_0;
  return FUNC_1(VAR_2);
}
