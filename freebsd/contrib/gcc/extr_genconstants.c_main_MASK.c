
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,char**) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6 (int VAR_5, char **VAR_6)
{
  VAR_3 = "genconstants";

  if (FUNC_3 (VAR_5, VAR_6) != VAR_1)
    return (VAR_0);




  FUNC_4 ("/* Generated automatically by the program `genconstants'");
  FUNC_4 ("   from the machine description file `md'.  */\n");
  FUNC_4 ("#ifndef GCC_INSN_CONSTANTS_H");
  FUNC_4 ("#define GCC_INSN_CONSTANTS_H\n");

  FUNC_5 (VAR_2, VAR_4);

  FUNC_4 ("\n#endif /* GCC_INSN_CONSTANTS_H */");

  if (FUNC_1 (VAR_4) || FUNC_2 (VAR_4) || FUNC_0 (VAR_4))
    return VAR_0;

  return VAR_1;
}
