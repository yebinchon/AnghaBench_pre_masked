
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum bfd_architecture { ____Placeholder_bfd_architecture } bfd_architecture ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

enum bfd_architecture
FUNC_5 (void)
{
  const char *VAR_9 = VAR_4;
  FUNC_2 ();

  if ((VAR_8 & VAR_3) != 0)
    return VAR_5;
  else if ((VAR_8 & VAR_2) != 0)
    return VAR_6;
  else if ((VAR_8 & (VAR_1 | VAR_0)) != 0)
    {
      if (FUNC_3 (VAR_9, "rs6000") == 0)
 return VAR_6;
      else if (FUNC_4 (VAR_9, "powerpc", 7) == 0)
 return VAR_5;
    }

  FUNC_1 (FUNC_0("Neither Power nor PowerPC opcodes were selected."));
  return VAR_7;
}
