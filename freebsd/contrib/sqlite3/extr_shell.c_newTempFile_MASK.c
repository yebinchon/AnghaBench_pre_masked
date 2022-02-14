
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_uint64 ;
typedef int r ;
struct TYPE_4__ {scalar_t__ zTempFile; scalar_t__ db; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,int ,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (char*,scalar_t__,char const*) ;
 int FUNC_6 (int,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(ShellState *VAR_2, const char *VAR_3){
  FUNC_0(VAR_2);
  FUNC_4(VAR_2->zTempFile);
  VAR_2->zTempFile = 0;
  if( VAR_2->db ){
    FUNC_3(VAR_2->db, 0, VAR_0, &VAR_2->zTempFile);
  }
  if( VAR_2->zTempFile==0 ){
    sqlite3_uint64 VAR_4;
    FUNC_6(sizeof(VAR_4), &VAR_4);
    VAR_2->zTempFile = FUNC_5("temp%llx.%s", VAR_4, VAR_3);
  }else{
    VAR_2->zTempFile = FUNC_5("%z.%s", VAR_2->zTempFile, VAR_3);
  }
  if( VAR_2->zTempFile==0 ){
    FUNC_2(VAR_1, "out of memory\n");
    FUNC_1(1);
  }
}
