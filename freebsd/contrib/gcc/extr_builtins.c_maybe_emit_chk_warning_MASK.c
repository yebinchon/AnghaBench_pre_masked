
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int location_t ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_11 (tree VAR_1, enum built_in_function VAR_2)
{
  int VAR_3, VAR_4 = 0;
  tree VAR_5 = FUNC_2 (VAR_1, 1), VAR_6;
  tree VAR_7, VAR_8;
  location_t VAR_9;

  switch (VAR_2)
    {
    case 130:
    case 132:


    case 131:
      VAR_3 = 6;
      VAR_4 = 1;
      break;
    case 129:
      VAR_3 = 12;
      break;
    case 133:
    case 128:
      VAR_3 = 10;
      break;
    default:
      FUNC_5 ();
    }

  VAR_7 = VAR_0;
  VAR_8 = VAR_0;
  for (VAR_6 = VAR_5; VAR_6 && VAR_3; VAR_6 = FUNC_1 (VAR_6), VAR_3 >>= 1)
    if (VAR_3 & 1)
      {
 if (VAR_7)
   VAR_8 = VAR_6;
 else
   VAR_7 = VAR_6;
      }

  if (!VAR_7 || !VAR_8)
    return;

  VAR_7 = FUNC_3 (VAR_7);
  VAR_8 = FUNC_3 (VAR_8);

  if (! FUNC_7 (VAR_8, 1) || FUNC_8 (VAR_8))
    return;

  if (VAR_4)
    {
      VAR_7 = FUNC_4 (VAR_7, 1);
      if (! VAR_7 || ! FUNC_7 (VAR_7, 1) || FUNC_9 (VAR_7, VAR_8))
 return;
    }
  else if (! FUNC_7 (VAR_7, 1) || ! FUNC_9 (VAR_8, VAR_7))
    return;

  VAR_9 = FUNC_0 (VAR_1);
  FUNC_10 (0, "%Hcall to %D will always overflow destination buffer",
    &VAR_9, FUNC_6 (VAR_1));
}
