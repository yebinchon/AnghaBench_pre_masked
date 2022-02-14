
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_address_info {scalar_t__ type; scalar_t__ reg; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mips_address_info*,int ,int,int) ;
 scalar_t__ VAR_1 ;

bool
FUNC_1 (rtx VAR_2, enum machine_mode VAR_3)
{
  struct mips_address_info VAR_4;

  return (FUNC_0 (&VAR_4, VAR_2, VAR_3, 0)
   && VAR_4.type == VAR_0
   && VAR_4.reg == VAR_1);
}
