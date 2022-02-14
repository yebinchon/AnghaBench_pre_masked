
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_kg_regs {int fmkg_seer; int fmkg_eer; int fmkg_feer; int fmkg_seeer; int fmkg_eeer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_kg_regs *VAR_0,
   uint32_t *VAR_1,
   uint32_t *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 *VAR_1 = FUNC_0(&VAR_0->fmkg_eer);
 VAR_3 = FUNC_0(&VAR_0->fmkg_eeer);
 *VAR_2 = FUNC_0(&VAR_0->fmkg_seer);
 *VAR_2 &= FUNC_0(&VAR_0->fmkg_seeer);

 *VAR_1 &= VAR_3;


 VAR_4 = FUNC_0(&VAR_0->fmkg_feer);
 if (VAR_4 & *VAR_1)
  FUNC_1(VAR_4 & ~*VAR_1 ,&VAR_0->fmkg_feer);

 FUNC_1(*VAR_1, &VAR_0->fmkg_eer);
 FUNC_1(*VAR_2, &VAR_0->fmkg_seer);
}
