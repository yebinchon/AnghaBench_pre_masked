
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
struct TYPE_2__ {scalar_t__ traceOut; int eTraceType; } ;
typedef TYPE_1__ ShellState ;




 unsigned int VAR_0 ;



 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__,char*,...) ;

__attribute__((used)) static int FUNC_5(
  unsigned VAR_1,
  void *VAR_2,
  void *VAR_3,
  void *VAR_4
){
  ShellState *VAR_5 = (ShellState*)VAR_2;
  sqlite3_stmt *VAR_6;
  const char *VAR_7;
  int VAR_8;
  if( VAR_5->traceOut==0 ) return 0;
  if( VAR_1==VAR_0 ){
    FUNC_4(VAR_5->traceOut, "-- closing database connection\n");
    return 0;
  }
  if( VAR_1!=129 && ((const char*)VAR_4)[0]=='-' ){
    VAR_7 = (const char*)VAR_4;
  }else{
    VAR_6 = (sqlite3_stmt*)VAR_3;
    switch( VAR_5->eTraceType ){
      case 132: {
        VAR_7 = FUNC_0(VAR_6);
        break;
      }






      default: {
        VAR_7 = FUNC_2(VAR_6);
        break;
      }
    }
  }
  if( VAR_7==0 ) return 0;
  VAR_8 = FUNC_3(VAR_7);
  while( VAR_8>0 && VAR_7[VAR_8-1]==';' ){ VAR_8--; }
  switch( VAR_1 ){
    case 129:
    case 128: {
      FUNC_4(VAR_5->traceOut, "%.*s;\n", VAR_8, VAR_7);
      break;
    }
    case 130: {
      sqlite3_int64 VAR_9 = *(sqlite3_int64*)VAR_4;
      FUNC_4(VAR_5->traceOut, "%.*s; -- %lld ns\n", VAR_8, VAR_7, VAR_9);
      break;
    }
  }
  return 0;
}
