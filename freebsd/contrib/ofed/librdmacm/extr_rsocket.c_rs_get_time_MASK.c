
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timeval {int tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (struct timeval*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_2(void)
{
 struct timeval VAR_0;

 FUNC_1(&VAR_0, 0, sizeof VAR_0);
 FUNC_0(&VAR_0, ((void*)0));
 return (uint32_t) VAR_0.tv_sec;
}
