
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zBuf ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {int D; int M; int Y; } ;
typedef TYPE_1__ DateTime ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,int **,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int,char*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  DateTime VAR_4;
  if( FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4)==0 ){
    char VAR_5[100];
    FUNC_0(&VAR_4);
    FUNC_3(sizeof(VAR_5), VAR_5, "%04d-%02d-%02d", VAR_4.Y, VAR_4.M, VAR_4.D);
    FUNC_2(VAR_1, VAR_5, -1, VAR_0);
  }
}
