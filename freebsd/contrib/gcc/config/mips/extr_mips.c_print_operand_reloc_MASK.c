
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum mips_symbol_type { ____Placeholder_mips_symbol_type } mips_symbol_type ;
typedef int HOST_WIDE_INT ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9 (FILE *VAR_0, rtx VAR_1, const char **VAR_2)
{
  enum mips_symbol_type VAR_3;
  const char *VAR_4;
  rtx VAR_5;
  HOST_WIDE_INT VAR_6;

  VAR_3 = FUNC_5 (VAR_1);
  if (VAR_2[VAR_3] == 0)
    FUNC_2 ("PRINT_OPERAND, invalid operand for relocation", VAR_1);


  FUNC_6 (VAR_1, &VAR_5, &VAR_6);
  if (FUNC_1 (VAR_5))
    VAR_1 = FUNC_8 (FUNC_0 (VAR_5), VAR_6);

  FUNC_4 (VAR_2[VAR_3], VAR_0);
  FUNC_7 (VAR_0, VAR_1);
  for (VAR_4 = VAR_2[VAR_3]; *VAR_4 != 0; VAR_4++)
    if (*VAR_4 == '(')
      FUNC_3 (')', VAR_0);
}
