
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;




 int FUNC_1 () ;

const char *
FUNC_2 (rtx VAR_0, int VAR_1)
{
  switch (FUNC_0 (VAR_0))
    {
    case 129:
      return "add";

    case 130:
      return VAR_1 ? "rsb" : "sub";

    case 131:
      return "orr";

    case 128:
      return "eor";

    case 132:
      return "and";

    default:
      FUNC_1 ();
    }
}
