
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * __gregs; } ;
struct TYPE_4__ {TYPE_2__ uc_mcontext; } ;
typedef TYPE_1__ ucontext_t ;
struct reg {int r_cpsr; int r_pc; int r_lr; int r_sp; int * r; } ;
typedef TYPE_2__ mcontext_t ;
typedef int __greg_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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

void
FUNC_0(const struct reg *VAR_17, ucontext_t *VAR_18)
{
 mcontext_t *VAR_19 = &VAR_18->uc_mcontext;
 __greg_t *VAR_20 = VAR_19->__gregs;

 VAR_20[VAR_3] = VAR_17->r[0];
 VAR_20[VAR_4] = VAR_17->r[1];
 VAR_20[VAR_8] = VAR_17->r[2];
 VAR_20[VAR_9] = VAR_17->r[3];
 VAR_20[VAR_10] = VAR_17->r[4];
 VAR_20[VAR_11] = VAR_17->r[5];
 VAR_20[VAR_12] = VAR_17->r[6];
 VAR_20[VAR_13] = VAR_17->r[7];
 VAR_20[VAR_14] = VAR_17->r[8];
 VAR_20[VAR_15] = VAR_17->r[9];
 VAR_20[VAR_5] = VAR_17->r[10];
 VAR_20[VAR_6] = VAR_17->r[11];
 VAR_20[VAR_7] = VAR_17->r[12];
 VAR_20[VAR_16] = VAR_17->r_sp;
 VAR_20[VAR_1] = VAR_17->r_lr;
 VAR_20[VAR_2] = VAR_17->r_pc;
 VAR_20[VAR_0] = VAR_17->r_cpsr;
}
