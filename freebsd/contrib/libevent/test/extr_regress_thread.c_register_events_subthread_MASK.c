
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int member_1; int member_0; } ;
typedef int THREAD_FN ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,struct timeval*) ;
 int * VAR_1 ;

__attribute__((used)) static THREAD_FN
FUNC_4(void *VAR_2)
{
 struct timeval VAR_3 = {0,0};
 FUNC_0(100);
 FUNC_2(&VAR_1[0], VAR_0, 1);
 FUNC_0(100);
 FUNC_2(&VAR_1[1], VAR_0, 1);
 FUNC_0(100);
 VAR_3.tv_usec = 100*1000;
 FUNC_3(&VAR_1[2], &VAR_3);
 VAR_3.tv_usec = 150*1000;
 FUNC_3(&VAR_1[3], &VAR_3);
 FUNC_0(200);
 FUNC_2(&VAR_1[4], VAR_0, 1);

 FUNC_1();
}
