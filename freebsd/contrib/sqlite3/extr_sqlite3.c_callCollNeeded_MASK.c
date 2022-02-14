
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_9__ {int pCollNeededArg; int (* xCollNeeded16 ) (int ,TYPE_1__*,int,char const*) ;int (* xCollNeeded ) (int ,TYPE_1__*,int,char*) ;} ;
typedef TYPE_1__ sqlite3 ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 char* FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int,char const*,int ,int ) ;
 char* FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,TYPE_1__*,int,char*) ;
 int FUNC_9 (int ,TYPE_1__*,int,char const*) ;

__attribute__((used)) static void FUNC_10(sqlite3 *VAR_3, int VAR_4, const char *VAR_5){
  FUNC_1( !VAR_3->xCollNeeded || !VAR_3->xCollNeeded16 );
  if( VAR_3->xCollNeeded ){
    char *VAR_6 = FUNC_3(VAR_3, VAR_5);
    if( !VAR_6 ) return;
    VAR_3->xCollNeeded(VAR_3->pCollNeededArg, VAR_3, VAR_4, VAR_6);
    FUNC_2(VAR_3, VAR_6);
  }

  if( VAR_3->xCollNeeded16 ){
    char const *VAR_7;
    sqlite3_value *VAR_8 = FUNC_5(VAR_3);
    FUNC_6(VAR_8, -1, VAR_5, VAR_2, VAR_0);
    VAR_7 = FUNC_7(VAR_8, VAR_1);
    if( VAR_7 ){
      VAR_3->xCollNeeded16(VAR_3->pCollNeededArg, VAR_3, (int)FUNC_0(VAR_3), VAR_7);
    }
    FUNC_4(VAR_8);
  }

}
