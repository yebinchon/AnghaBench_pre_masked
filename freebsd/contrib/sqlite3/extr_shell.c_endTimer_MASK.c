
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rusage {int ru_stime; int ru_utime; } ;
typedef double sqlite3_int64 ;
struct TYPE_2__ {int ru_stime; int ru_utime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct rusage*) ;
 double VAR_2 ;
 int FUNC_1 (char*,double,double,double) ;
 TYPE_1__ VAR_3 ;
 double FUNC_2 (int *,int *) ;
 double FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void){
  if( VAR_1 ){
    sqlite3_int64 VAR_4 = FUNC_3();
    struct rusage VAR_5;
    FUNC_0(VAR_0, &VAR_5);
    FUNC_1("Run Time: real %.3f user %f sys %f\n",
       (VAR_4 - VAR_2)*0.001,
       FUNC_2(&VAR_3.ru_utime, &VAR_5.ru_utime),
       FUNC_2(&VAR_3.ru_stime, &VAR_5.ru_stime));
  }
}
