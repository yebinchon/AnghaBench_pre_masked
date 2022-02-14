
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static const char *
FUNC_1 (int VAR_0)
{
  switch (VAR_0)
    {
    case 'i':
      return "XINT";

    case 'w':
      return "XWINT";

    case 's':
      return "XSTR";

    case 'e': case 'u':
      return "XEXP";

    case 'E':
      return "XVEC";

    case 'b':
      return "XBITMAP";

    case 't':
      return "XTREE";

    case 'B':
      return "XBBDEF";

    default:
      FUNC_0 ();
    }
}
