
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *
FUNC_2 (unsigned int VAR_2)
{
  static char VAR_3[32];

  VAR_3[0] = 0;

  if (VAR_2 == 0)
    return FUNC_0("none");

  if (VAR_2 & VAR_0)
    FUNC_1 (VAR_3, "BASE ");

  if (VAR_2 & VAR_1)
    {
      if (VAR_2 & VAR_0)
 FUNC_1 (VAR_3, "| ");

      FUNC_1 (VAR_3, "WEAK ");
    }

  if (VAR_2 & ~(VAR_0 | VAR_1))
    FUNC_1 (VAR_3, "| <unknown>");

  return VAR_3;
}
