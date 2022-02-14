
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef int HOST_WIDE_INT ;



 int FUNC_0 (int ) ;




 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3 (HOST_WIDE_INT VAR_0, enum rtx_code VAR_1)
{
  if (FUNC_1 (VAR_0))
    return 1;

  switch (VAR_1)
    {
    case 129:
      return FUNC_1 (FUNC_0 (-VAR_0));

    case 130:
    case 128:
    case 131:
      return 0;

    case 132:
      return FUNC_1 (FUNC_0 (~VAR_0));

    default:
      FUNC_2 ();
    }
}
