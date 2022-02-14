
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tgec_regs {int command_config; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct tgec_regs *VAR_1, bool VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(&VAR_1->command_config);
 if (VAR_2)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, &VAR_1->command_config);
}
