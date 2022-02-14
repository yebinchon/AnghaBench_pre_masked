
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vdso_timehands {scalar_t__ th_algo; scalar_t__ th_physical; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(const struct vdso_timehands *VAR_2, u_int *VAR_3)
{

 if (VAR_2->th_algo != VAR_1)
  return (VAR_0);
 __asm __volatile("isb" : : : "memory");
 *VAR_3 = VAR_2->th_physical == 0 ? FUNC_1() : FUNC_0();
 return (0);
}
