
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ua ;
struct thread {int dummy; } ;
struct arm_get_vfpstate_args {int mc_vfp_size; int mc_vfp; } ;
typedef int mcontext_vfp_t ;
typedef int mcontext_vfp ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (void*,struct arm_get_vfpstate_args*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct thread*,int *) ;

int
FUNC_4(struct thread *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct arm_get_vfpstate_args VAR_4;
 mcontext_vfp_t VAR_5;

 VAR_3 = FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_3 != 0)
  return (VAR_3);
 if (VAR_4.mc_vfp_size != sizeof(mcontext_vfp_t))
  return (VAR_0);



 FUNC_0(&VAR_5, sizeof(VAR_5));


 VAR_3 = FUNC_2(&VAR_5, VAR_4.mc_vfp, sizeof(VAR_5));
 if (VAR_3 != 0)
  return (VAR_3);
 return (0);
}
