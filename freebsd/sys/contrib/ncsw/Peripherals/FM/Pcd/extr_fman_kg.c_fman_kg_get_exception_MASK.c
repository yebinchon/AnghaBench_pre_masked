
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_kg_regs {int fmkg_eer; int fmkg_seer; int fmkg_seeer; int fmkg_eeer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_kg_regs *VAR_1,
    uint32_t *VAR_2,
    uint32_t *VAR_3,
    bool VAR_4)
{
 uint32_t VAR_5;

 *VAR_2 = FUNC_0(&VAR_1->fmkg_eer);
 VAR_5 = FUNC_0(&VAR_1->fmkg_eeer);
 *VAR_2 &= VAR_5;

 *VAR_3 = 0;

 if (*VAR_2 & VAR_0) {
  *VAR_3 = FUNC_0(&VAR_1->fmkg_seer);
  VAR_5 = FUNC_0(&VAR_1->fmkg_seeer);
  *VAR_3 &= VAR_5;
 }

 if (VAR_4) {
  FUNC_1(*VAR_3, &VAR_1->fmkg_seer);
  FUNC_1(*VAR_2, &VAR_1->fmkg_eer);
 }
}
