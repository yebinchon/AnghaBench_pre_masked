
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum mips_symbol_type { ____Placeholder_mips_symbol_type } mips_symbol_type ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;





 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int *,scalar_t__*) ;

bool
FUNC_8 (rtx VAR_5, enum mips_symbol_type *VAR_6)
{
  HOST_WIDE_INT VAR_7;

  FUNC_7 (VAR_5, &VAR_5, &VAR_7);
  if (FUNC_2 (VAR_5))
    *VAR_6 = FUNC_3 (VAR_5);
  else if (FUNC_0 (VAR_5) == VAR_4 || FUNC_0 (VAR_5) == VAR_2)
    {
      *VAR_6 = FUNC_5 (VAR_5);
      if (*VAR_6 == 131)
 return 0;
    }
  else
    return 0;

  if (VAR_7 == 0)
    return 1;



  switch (*VAR_6)
    {
    case 140:
    case 145:
    case 143:
    case 144:




      if (VAR_3 == VAR_1 && !VAR_0)
 return FUNC_6 (VAR_5, VAR_7);


      return 1;

    case 142:



      if (FUNC_0 (VAR_5) == VAR_2)
 return 1;



    case 132:



      return FUNC_6 (VAR_5, VAR_7);

    case 133:
    case 136:


      return FUNC_1 (VAR_7);

    case 134:
    case 138:
    case 139:
    case 137:
    case 130:
    case 129:
    case 141:
    case 128:
    case 135:
    case 131:
      return 0;
    }
  FUNC_4 ();
}
