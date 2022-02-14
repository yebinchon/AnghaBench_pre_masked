
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_sec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct timespec*) ;

__attribute__((used)) static void
FUNC_2(u32 *VAR_0, u32 *VAR_1)
{
 struct timespec VAR_2;

 *VAR_0 = 1970;
 FUNC_1(&VAR_2);
 *VAR_1 = VAR_2.tv_sec;

 while(*VAR_1 > FUNC_0(*VAR_0)) {
  *VAR_1 -= FUNC_0(*VAR_0);
  (*VAR_0)++;
 }
}
