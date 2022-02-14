
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_qmi_regs {int fmqm_eie; int fmqm_eif; int fmqm_eien; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

uint32_t FUNC_2(struct fman_qmi_regs *VAR_0)
{
 uint32_t VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_0(&VAR_0->fmqm_eie);
 VAR_2 = FUNC_0(&VAR_0->fmqm_eien);
 VAR_1 &= VAR_2;


 VAR_3 = FUNC_0(&VAR_0->fmqm_eif);
 if (VAR_3 & VAR_1)
  FUNC_1(VAR_3 & ~VAR_1, &VAR_0->fmqm_eif);

 FUNC_1(VAR_1, &VAR_0->fmqm_eie);
 return VAR_1;
}
