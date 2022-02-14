
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef size_t u_int ;
struct vdso_timehands {int th_algo; size_t th_x86_hpet_idx; int th_x86_shift; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char volatile* VAR_3 ;



 size_t FUNC_0 (struct vdso_timehands const*) ;
 int FUNC_1 (char volatile*,size_t*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 () ;
 size_t FUNC_4 () ;
 scalar_t__ FUNC_5 (uintptr_t volatile*) ;
 int * VAR_4 ;
 char volatile* VAR_5 ;

int
FUNC_6(const struct vdso_timehands *VAR_6, u_int *VAR_7)
{
 volatile char *VAR_8;
 uint32_t VAR_9;

 switch (VAR_6->th_algo) {
 case 128:
  *VAR_7 = VAR_6->th_x86_shift > 0 ? FUNC_0(VAR_6) :
      FUNC_4();
  return (0);
 case 130:
  VAR_9 = VAR_6->th_x86_hpet_idx;
  if (VAR_9 >= VAR_1)
   return (VAR_0);
  VAR_8 = (volatile char *)FUNC_5(
      (volatile uintptr_t *)&VAR_4[VAR_9]);
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_9);
   VAR_8 = (volatile char *)FUNC_5(
       (volatile uintptr_t *)&VAR_4[VAR_9]);
  }
  if (VAR_8 == VAR_3)
   return (VAR_0);
  *VAR_7 = *(volatile uint32_t *)(VAR_8 + VAR_2);
  return (0);
 default:
  return (VAR_0);
 }
}
