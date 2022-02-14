
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ t ;
typedef int c_pretty_printer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (char*,char*,unsigned int) ;

void
FUNC_6 (c_pretty_printer *VAR_0, tree VAR_1)
{
  const char *VAR_2;

  FUNC_3 (FUNC_1 (VAR_1));

  if (FUNC_0 (VAR_1))
    VAR_2 = FUNC_2 (FUNC_0 (VAR_1));
  else
    {
      static char VAR_3[8];
      FUNC_5 (VAR_3, "<U%4x>", ((unsigned)((unsigned long)(VAR_1) & 0xffff)));
      VAR_2 = VAR_3;
    }

  FUNC_4 (VAR_0, VAR_2);
}
