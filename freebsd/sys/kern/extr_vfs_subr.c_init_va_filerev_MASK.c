
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u_quad_t ;
struct bintime {long long frac; scalar_t__ sec; } ;


 int FUNC_0 (struct bintime*) ;

u_quad_t
FUNC_1(void)
{
 struct bintime VAR_0;

 FUNC_0(&VAR_0);
 return (((u_quad_t)VAR_0.sec << 32LL) | (VAR_0.frac >> 32LL));
}
