
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dtsec_regs {int tbipa; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

int FUNC_1(struct dtsec_regs *VAR_1,
  uint8_t VAR_2)
{
 if (VAR_2 > 0 && VAR_2 < 32)
  FUNC_0(VAR_2, &VAR_1->tbipa);
 else
  return -VAR_0;

 return 0;
}
