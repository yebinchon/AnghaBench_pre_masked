
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_qmi_regs {int fmqm_ie; int fmqm_if; int fmqm_ien; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

uint32_t FUNC_2(struct fman_qmi_regs *VAR_0)
{
 uint32_t VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_0(&VAR_0->fmqm_ie);
 VAR_2 = FUNC_0(&VAR_0->fmqm_ien);
 VAR_1 &= VAR_2;

 VAR_3 = FUNC_0(&VAR_0->fmqm_if);
 if (VAR_3 & VAR_1)
  FUNC_1(VAR_3 & ~VAR_1, &VAR_0->fmqm_if);

 FUNC_1(VAR_1, &VAR_0->fmqm_ie);
 return VAR_1;
}
