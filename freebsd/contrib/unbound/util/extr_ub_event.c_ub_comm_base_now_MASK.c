
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {int tv_sec; } ;
struct comm_base {int dummy; } ;


 int FUNC_0 (struct comm_base*,int **,struct timeval**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct comm_base* VAR_1)
{





 time_t *VAR_2;
 struct timeval *VAR_3;
 FUNC_0(VAR_1, &VAR_2, &VAR_3);
 if(FUNC_1(VAR_3, ((void*)0)) < 0) {
  FUNC_2("gettimeofday: %s", FUNC_3(VAR_0));
 }
 *VAR_2 = VAR_3->tv_sec;

}
