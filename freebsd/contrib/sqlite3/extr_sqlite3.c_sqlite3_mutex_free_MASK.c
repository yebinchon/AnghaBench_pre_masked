
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_3__ {int (* xMutexFree ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int FUNC_0 (int (*) (int *)) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(sqlite3_mutex *VAR_1){
  if( VAR_1 ){
    FUNC_0( VAR_0.mutex.xMutexFree );
    VAR_0.mutex.xMutexFree(VAR_1);
  }
}
