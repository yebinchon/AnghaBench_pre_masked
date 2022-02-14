
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_address_info {int type; int symbol_type; int offset; int reg; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (struct mips_address_info*,int ,int,int) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (rtx VAR_3, enum machine_mode VAR_4)
{
  struct mips_address_info VAR_5;
  int VAR_6;

  if (VAR_4 == VAR_0)

    VAR_6 = 1;
  else

    VAR_6 = (FUNC_0 (VAR_4) + VAR_2 - 1) / VAR_2;

  if (FUNC_2 (&VAR_5, VAR_3, VAR_4, 0))
    switch (VAR_5.type)
      {
      case 129:
 if (VAR_1
     && !FUNC_1 (VAR_4, VAR_5.reg, VAR_5.offset))
   return VAR_6 * 2;
 return VAR_6;

      case 130:
 return (VAR_1 ? VAR_6 * 2 : VAR_6);

      case 131:
 return VAR_6;

      case 128:
 return VAR_6 * FUNC_3 (VAR_5.symbol_type);
      }
  return 0;
}
