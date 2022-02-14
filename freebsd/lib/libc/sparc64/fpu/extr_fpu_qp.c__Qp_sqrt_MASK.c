
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct fpn {int dummy; } ;
struct TYPE_2__ {int fp_sign; int fp_class; scalar_t__ fp_sticky; } ;
struct fpemu {int fe_cx; int fe_fsr; TYPE_1__ fe_f1; } ;


 int VAR_0 ;
 int FUNC_0 (struct fpemu*,struct fpn*,int*) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int) ;
 struct fpn* FUNC_2 (struct fpemu*) ;

void
FUNC_3(u_int *VAR_1, u_int *VAR_2)
{
 struct fpemu VAR_3;
 struct fpn *VAR_4;
 __asm __volatile("stx %%fsr, %0" : "=m" (VAR_3.fe_fsr) :);
 VAR_3.fe_cx = 0;
 VAR_3.fe_f1.fp_sign = VAR_2[0] >> 31;
 VAR_3.fe_f1.fp_sticky = 0;
 VAR_3.fe_f1.fp_class = FUNC_1(&VAR_3.fe_f1, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
 VAR_4 = FUNC_2(&VAR_3);
 VAR_1[0] = FUNC_0(&VAR_3, VAR_4, VAR_1);
 VAR_3.fe_fsr |= VAR_3.fe_cx << VAR_0;
 __asm __volatile("ldx %0, %%fsr" : : "m" (VAR_3.fe_fsr));
}
