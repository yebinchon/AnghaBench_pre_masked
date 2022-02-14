
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int szRow; int ePhase; int zLine; int zPrefix; int zCurrentRow; } ;
typedef TYPE_1__ completion_cursor ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vtab_cursor *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4
){
  completion_cursor *VAR_5 = (completion_cursor*)VAR_2;
  switch( VAR_4 ){
    case 131: {
      FUNC_1(VAR_3, VAR_5->zCurrentRow, VAR_5->szRow,VAR_1);
      break;
    }
    case 129: {
      FUNC_1(VAR_3, VAR_5->zPrefix, -1, VAR_1);
      break;
    }
    case 128: {
      FUNC_1(VAR_3, VAR_5->zLine, -1, VAR_1);
      break;
    }
    case 130: {
      FUNC_0(VAR_3, VAR_5->ePhase);
      break;
    }
  }
  return VAR_0;
}
