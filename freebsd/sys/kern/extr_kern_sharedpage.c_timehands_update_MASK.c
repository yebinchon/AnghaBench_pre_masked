
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vdso_timekeep {scalar_t__ tk_enabled; scalar_t__ tk_current; struct vdso_timehands* tk_th; } ;
struct vdso_timehands {scalar_t__ th_gen; } ;
struct vdso_sv_tk {scalar_t__ sv_timekeep_curr; scalar_t__ sv_timekeep_gen; scalar_t__ sv_timekeep_off; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct vdso_timehands*) ;

__attribute__((used)) static void
FUNC_3(struct vdso_sv_tk *VAR_2)
{
 struct vdso_timehands VAR_3;
 struct vdso_timekeep *VAR_4;
 uint32_t VAR_5, VAR_6;

 VAR_5 = FUNC_2(&VAR_3);
 VAR_3.th_gen = 0;
 VAR_6 = VAR_2->sv_timekeep_curr;
 if (++VAR_6 >= VAR_0)
  VAR_6 = 0;
 VAR_2->sv_timekeep_curr = VAR_6;
 if (++VAR_2->sv_timekeep_gen == 0)
  VAR_2->sv_timekeep_gen = 1;

 VAR_4 = (struct vdso_timekeep *)(VAR_1 +
     VAR_2->sv_timekeep_off);
 VAR_4->tk_th[VAR_6].th_gen = 0;
 FUNC_1();
 if (VAR_5)
  VAR_4->tk_th[VAR_6] = VAR_3;
 FUNC_0(&VAR_4->tk_th[VAR_6].th_gen, VAR_2->sv_timekeep_gen);
 FUNC_0(&VAR_4->tk_current, VAR_6);





 VAR_4->tk_enabled = VAR_5;
}
