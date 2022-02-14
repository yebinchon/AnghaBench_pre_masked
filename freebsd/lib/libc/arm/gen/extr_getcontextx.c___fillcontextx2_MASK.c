
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mc_vfp_size; int * mc_vfp_ptr; } ;
struct TYPE_4__ {TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
struct ucontextx {int mcontext_vfp; TYPE_2__ ucontext; } ;
struct arm_get_vfpstate_args {int mc_vfp_size; int * mc_vfp; } ;
typedef int mcontext_vfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct arm_get_vfpstate_args*) ;

int
FUNC_1(char *VAR_1)
{
 struct ucontextx *VAR_2;
 ucontext_t *VAR_3;
 mcontext_vfp_t *VAR_4;
 struct arm_get_vfpstate_args VAR_5;

 VAR_2 = (struct ucontextx *)VAR_1;
 VAR_3 = &VAR_2->ucontext;
 VAR_4 = &VAR_2->mcontext_vfp;

 VAR_5.mc_vfp_size = sizeof(mcontext_vfp_t);
 VAR_5.mc_vfp = VAR_4;
 if (FUNC_0(VAR_0, &VAR_5) == -1)
   return (-1);
 VAR_3->uc_mcontext.mc_vfp_size = sizeof(mcontext_vfp_t);
 VAR_3->uc_mcontext.mc_vfp_ptr = VAR_4;
 return (0);
}
