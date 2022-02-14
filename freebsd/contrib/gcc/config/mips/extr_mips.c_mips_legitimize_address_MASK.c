
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum mips_symbol_type { ____Placeholder_mips_symbol_type } mips_symbol_type ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__* VAR_3 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int ) ;

bool
FUNC_11 (rtx *VAR_4, enum machine_mode VAR_5)
{
  enum mips_symbol_type VAR_6;

  if (FUNC_9 (*VAR_4))
    {
      *VAR_4 = FUNC_5 (*VAR_4);
      return 1;
    }


  if (FUNC_8 (*VAR_4, &VAR_6)
      && FUNC_7 (VAR_6, VAR_5)
      && VAR_3[VAR_6])
    {
      *VAR_4 = FUNC_6 (0, *VAR_4);
      return 1;
    }

  if (FUNC_0 (*VAR_4) == VAR_1 && FUNC_0 (FUNC_2 (*VAR_4, 1)) == VAR_0)
    {

      rtx VAR_7;

      VAR_7 = FUNC_2 (*VAR_4, 0);
      if (!FUNC_10 (VAR_7, VAR_5, 0))
 VAR_7 = FUNC_3 (VAR_2, VAR_7);
      *VAR_4 = FUNC_4 (0, VAR_7, FUNC_1 (FUNC_2 (*VAR_4, 1)));
      return 1;
    }

  return 0;
}
