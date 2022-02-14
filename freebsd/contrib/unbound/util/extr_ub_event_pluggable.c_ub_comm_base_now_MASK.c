
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct timeval {int tv_sec; } ;
struct comm_base {int dummy; } ;
struct TYPE_2__ {scalar_t__ magic; int * vmt; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct comm_base*) ;
 int FUNC_1 (struct comm_base*,int **,struct timeval**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct comm_base* VAR_3)
{
 time_t *VAR_4;
 struct timeval *VAR_5;
 FUNC_1(VAR_3, &VAR_4, &VAR_5);
 if(FUNC_2(VAR_5, ((void*)0)) < 0) {
  FUNC_3("gettimeofday: %s", FUNC_4(VAR_2));
 }
 *VAR_4 = VAR_5->tv_sec;
}
