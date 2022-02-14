
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int FUNC_0 (struct timespec*,int *) ;

__attribute__((used)) static void FUNC_1(u64 VAR_0)
{
 struct timespec VAR_1;

 VAR_1.tv_nsec = VAR_0 % 999999999;
 VAR_1.tv_sec = VAR_0 / 999999999;

 FUNC_0(&VAR_1, ((void*)0));
}
