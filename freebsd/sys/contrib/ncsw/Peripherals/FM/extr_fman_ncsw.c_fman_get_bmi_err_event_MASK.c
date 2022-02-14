
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_bmi_regs {int fmbm_ievr; int fmbm_ifr; int fmbm_ier; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

uint32_t FUNC_2(struct fman_bmi_regs *VAR_0)
{
 uint32_t VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_0(&VAR_0->fmbm_ievr);
 VAR_2 = FUNC_0(&VAR_0->fmbm_ier);
 VAR_1 &= VAR_2;

 VAR_3 = FUNC_0(&VAR_0->fmbm_ifr);
 if (VAR_3 & VAR_1)
  FUNC_1(VAR_3 & ~VAR_1, &VAR_0->fmbm_ifr);

 FUNC_1(VAR_1, &VAR_0->fmbm_ievr);
 return VAR_1;
}
