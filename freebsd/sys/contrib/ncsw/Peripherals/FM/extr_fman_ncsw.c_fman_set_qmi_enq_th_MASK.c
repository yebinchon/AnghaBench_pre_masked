
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fman_qmi_regs {int fmqm_gc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct fman_qmi_regs *VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(&VAR_1->fmqm_gc);
 VAR_3 &= ~VAR_0;
 VAR_3 |= ((uint32_t)VAR_2 << 8);
 FUNC_1(VAR_3, &VAR_1->fmqm_gc);
}
