
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fman_qmi_regs {int fmqm_gc; } ;


 int FUNC_0 (int *) ;

uint8_t FUNC_1(struct fman_qmi_regs *VAR_0)
{
 return (uint8_t)(FUNC_0(&VAR_0->fmqm_gc) >> 8);
}
