
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_opcode {int dummy; } ;


 short FUNC_0 (short) ;
 short FUNC_1 (char*) ;
 int FUNC_2 (char const**,char*) ;
 struct ia64_opcode* FUNC_3 (char const*,short) ;
 int FUNC_4 (char const*) ;

struct ia64_opcode *
FUNC_5 (const char *VAR_0)
{
  char VAR_1[129];
  const char *VAR_2;
  short VAR_3;
  short VAR_4;

  if (FUNC_4 (VAR_0) > 128)
    {
      return ((void*)0);
    }
  VAR_2 = VAR_0;
  FUNC_2 (&VAR_2, VAR_1);
  VAR_4 = FUNC_1 (VAR_1);
  if (VAR_4 < 0)
    {
      return ((void*)0);
    }

  VAR_3 = FUNC_0 (VAR_4);

  if (VAR_3 < 0)
    {
      return ((void*)0);
    }
  return FUNC_3 (VAR_0, VAR_3);
}
