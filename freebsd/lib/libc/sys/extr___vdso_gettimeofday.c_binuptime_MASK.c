
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct vdso_timekeep {scalar_t__ tk_current; struct vdso_timehands* tk_th; int tk_enabled; } ;
struct bintime {int dummy; } ;
struct vdso_timehands {scalar_t__ th_gen; int th_scale; int th_boottime; struct bintime th_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct bintime*,int *) ;
 int FUNC_3 (struct bintime*,int) ;
 int FUNC_4 (struct vdso_timehands*,int*) ;

__attribute__((used)) static int
FUNC_5(struct bintime *VAR_2, struct vdso_timekeep *VAR_3, int VAR_4)
{
 struct vdso_timehands *VAR_5;
 uint32_t VAR_6, VAR_7;
 u_int VAR_8;
 int VAR_9;

 do {
  if (!VAR_3->tk_enabled)
   return (VAR_1);

  VAR_6 = FUNC_0(&VAR_3->tk_current);
  VAR_5 = &VAR_3->tk_th[VAR_6];
  VAR_7 = FUNC_0(&VAR_5->th_gen);
  *VAR_2 = VAR_5->th_offset;
  VAR_9 = FUNC_4(VAR_5, &VAR_8);
  if (VAR_9 == VAR_0)
   continue;
  if (VAR_9 != 0)
   return (VAR_9);
  FUNC_3(VAR_2, VAR_5->th_scale * VAR_8);
  if (VAR_4)
   FUNC_2(VAR_2, &VAR_5->th_boottime);





  FUNC_1();
 } while (VAR_6 != VAR_3->tk_current || VAR_7 == 0 || VAR_7 != VAR_5->th_gen);
 return (0);
}
