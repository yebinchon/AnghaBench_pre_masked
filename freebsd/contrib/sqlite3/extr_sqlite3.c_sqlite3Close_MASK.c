
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int mTrace; int magic; int mutex; int pTraceArg; int (* xTrace ) (int,int ,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_13__ {int pSqllogArg; int (* xSqllog ) (int ,TYPE_1__*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 TYPE_7__ VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,TYPE_1__*,int ) ;
 int FUNC_9 (int ,TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_10(sqlite3 *VAR_6, int VAR_7){
  if( !VAR_6 ){


    return VAR_3;
  }
  if( !FUNC_4(VAR_6) ){
    return VAR_2;
  }
  FUNC_6(VAR_6->mutex);
  if( VAR_6->mTrace & VAR_4 ){
    VAR_6->xTrace(VAR_4, VAR_6->pTraceArg, VAR_6, 0);
  }


  FUNC_1(VAR_6);
  FUNC_5(VAR_6);




  if( !VAR_7 && FUNC_0(VAR_6) ){
    FUNC_2(VAR_6, VAR_0, "unable to close due to unfinalized "
       "statements or unfinished backups");
    FUNC_7(VAR_6->mutex);
    return VAR_0;
  }
  VAR_6->magic = VAR_1;
  FUNC_3(VAR_6);
  return VAR_3;
}
