
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host_timeval {int member_1; int member_0; } ;


 int FUNC_0 (int,long*,int *,int *,struct host_timeval*) ;

__attribute__((used)) static int
FUNC_1()
{
 struct host_timeval VAR_0 = {0,0};
 long VAR_1 = 1 << 0;
 int VAR_2;

 VAR_2 = FUNC_0(32, &VAR_1, ((void*)0), ((void*)0), &VAR_0);
 return (VAR_2 > 0);
}
