
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (unsigned *VAR_0, unsigned *VAR_1, int VAR_2)
{
  unsigned VAR_3 = VAR_0 ? *VAR_0 : 0;
  unsigned VAR_4 = VAR_1 ? *VAR_1 : 0;

  switch (VAR_2)
    {
    case 8:
      VAR_3 = (~VAR_3) & 0xff;
      break;

    case 16:
      VAR_3 = (~VAR_3) & 0xffff;
      break;

    case 64:
      VAR_4 = (~VAR_4) & 0xffffffff;


    case 32:
      VAR_3 = (~VAR_3) & 0xffffffff;
      break;

    default:
      FUNC_0 ();
    }

  if (VAR_0)
    *VAR_0 = VAR_3;

  if (VAR_1)
    *VAR_1 = VAR_4;
}
