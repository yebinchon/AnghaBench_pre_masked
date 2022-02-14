
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ accError; } ;
typedef TYPE_1__ sqlite3_str ;
typedef int sqlite3_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int,int ) ;
 char* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(sqlite3_context *VAR_3){
  sqlite3_str *VAR_4;
  VAR_4 = (sqlite3_str*)FUNC_0(VAR_3, 0);
  if( VAR_4 ){
    if( VAR_4->accError==VAR_1 ){
      FUNC_2(VAR_3);
    }else if( VAR_4->accError==VAR_0 ){
      FUNC_1(VAR_3);
    }else{
      const char *VAR_5 = FUNC_4(VAR_4);
      FUNC_3(VAR_3, VAR_5, -1, VAR_2);
    }
  }
}
