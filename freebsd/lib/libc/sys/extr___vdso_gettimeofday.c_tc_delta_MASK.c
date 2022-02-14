
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vdso_timehands {int th_offset_count; int th_counter_mask; } ;


 int FUNC_0 (struct vdso_timehands const*,int*) ;

__attribute__((used)) static int
FUNC_1(const struct vdso_timehands *VAR_0, u_int *VAR_1)
{
 int VAR_2;
 u_int VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_2 == 0)
  *VAR_1 = (VAR_3 - VAR_0->th_offset_count) & VAR_0->th_counter_mask;
 return (VAR_2);
}
