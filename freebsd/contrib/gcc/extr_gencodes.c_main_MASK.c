
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int,char**) ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int*,int*) ;
 int VAR_6 ;

int
FUNC_8 (int VAR_7, char **VAR_8)
{
  rtx VAR_9;

  VAR_5 = "gencodes";



  VAR_4 = 0;

  if (FUNC_5 (VAR_7, VAR_8) != VAR_3)
    return (VAR_2);

  FUNC_6 ("/* Generated automatically by the program `gencodes'\n   from the machine description file `md'.  */\n\n#ifndef GCC_INSN_CODES_H\n#define GCC_INSN_CODES_H\n\nenum insn_code {");
  while (1)
    {
      int VAR_10;
      int VAR_11;

      VAR_9 = FUNC_7 (&VAR_10, &VAR_11);
      if (VAR_9 == ((void*)0))
 break;

      if (FUNC_0 (VAR_9) == VAR_1 || FUNC_0 (VAR_9) == VAR_0)
 FUNC_4 (VAR_9, VAR_11);
    }

  FUNC_6 ("  CODE_FOR_nothing\n};\n\n#endif /* GCC_INSN_CODES_H */");




  if (FUNC_2 (VAR_6) || FUNC_3 (VAR_6) || FUNC_1 (VAR_6))
    return VAR_2;

  return VAR_3;
}
