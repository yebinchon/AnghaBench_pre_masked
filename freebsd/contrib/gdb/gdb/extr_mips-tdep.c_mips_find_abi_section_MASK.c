
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mips_abi { ____Placeholder_mips_abi } mips_abi ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_7, asection *VAR_8, void *VAR_9)
{
  enum mips_abi *VAR_10 = (enum mips_abi *) VAR_9;
  const char *VAR_11 = FUNC_0 (VAR_7, VAR_8);

  if (*VAR_10 != VAR_6)
    return;

  if (FUNC_2 (VAR_11, ".mdebug.", 8) != 0)
    return;

  if (FUNC_1 (VAR_11, ".mdebug.abi32") == 0)
    *VAR_10 = VAR_4;
  else if (FUNC_1 (VAR_11, ".mdebug.abiN32") == 0)
    *VAR_10 = VAR_2;
  else if (FUNC_1 (VAR_11, ".mdebug.abi64") == 0)
    *VAR_10 = VAR_3;
  else if (FUNC_1 (VAR_11, ".mdebug.abiO64") == 0)
    *VAR_10 = VAR_5;
  else if (FUNC_1 (VAR_11, ".mdebug.eabi32") == 0)
    *VAR_10 = VAR_0;
  else if (FUNC_1 (VAR_11, ".mdebug.eabi64") == 0)
    *VAR_10 = VAR_1;
  else
    FUNC_3 ("unsupported ABI %s.", VAR_11 + 8);
}
