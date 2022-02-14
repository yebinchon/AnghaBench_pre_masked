
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int tf_spsr; int tf_r0; int tf_r1; int tf_r2; int tf_r3; int tf_r4; int tf_r5; int tf_r6; int tf_r7; int tf_r8; int tf_r9; int tf_r10; int tf_r11; int tf_r12; int tf_usr_sp; int tf_usr_lr; int tf_pc; } ;
struct thread {struct trapframe* td_frame; } ;
struct TYPE_3__ {int* __gregs; int mc_spare; int * mc_vfp_ptr; scalar_t__ mc_vfp_size; } ;
typedef TYPE_1__ mcontext_t ;
typedef int __greg_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_0 (int *,int ,int) ;

int
FUNC_1(struct thread *VAR_19, mcontext_t *VAR_20, int VAR_21)
{
 struct trapframe *VAR_22 = VAR_19->td_frame;
 __greg_t *VAR_23 = VAR_20->__gregs;

 if (VAR_21 & VAR_0) {
  VAR_23[VAR_5] = 0;
  VAR_23[VAR_2] = VAR_22->tf_spsr & ~VAR_1;
 } else {
  VAR_23[VAR_5] = VAR_22->tf_r0;
  VAR_23[VAR_2] = VAR_22->tf_spsr;
 }
 VAR_23[VAR_6] = VAR_22->tf_r1;
 VAR_23[VAR_10] = VAR_22->tf_r2;
 VAR_23[VAR_11] = VAR_22->tf_r3;
 VAR_23[VAR_12] = VAR_22->tf_r4;
 VAR_23[VAR_13] = VAR_22->tf_r5;
 VAR_23[VAR_14] = VAR_22->tf_r6;
 VAR_23[VAR_15] = VAR_22->tf_r7;
 VAR_23[VAR_16] = VAR_22->tf_r8;
 VAR_23[VAR_17] = VAR_22->tf_r9;
 VAR_23[VAR_7] = VAR_22->tf_r10;
 VAR_23[VAR_8] = VAR_22->tf_r11;
 VAR_23[VAR_9] = VAR_22->tf_r12;
 VAR_23[VAR_18] = VAR_22->tf_usr_sp;
 VAR_23[VAR_3] = VAR_22->tf_usr_lr;
 VAR_23[VAR_4] = VAR_22->tf_pc;

 VAR_20->mc_vfp_size = 0;
 VAR_20->mc_vfp_ptr = ((void*)0);
 FUNC_0(&VAR_20->mc_spare, 0, sizeof(VAR_20->mc_spare));

 return (0);
}
