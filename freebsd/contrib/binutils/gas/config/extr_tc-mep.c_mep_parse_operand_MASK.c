
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cgen_parse_operand_type { ____Placeholder_cgen_parse_operand_type } cgen_parse_operand_type ;
typedef enum cgen_parse_operand_result { ____Placeholder_cgen_parse_operand_result } cgen_parse_operand_result ;
typedef int bfd_vma ;
typedef int CGEN_CPU_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int ,int,char const**,int,int,int*,int *) ;

__attribute__((used)) static const char *
FUNC_1 (CGEN_CPU_DESC VAR_2, enum cgen_parse_operand_type VAR_3,
     const char **VAR_4, int VAR_5, int VAR_6,
     enum cgen_parse_operand_result *VAR_7, bfd_vma *VAR_8)
{
  if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
    {
      const char *VAR_9;

      VAR_9 = *VAR_4;
      while (*VAR_9 == '(')
 VAR_9++;
      if (*VAR_9 == '$')
 return "Not a valid literal";
    }
  return FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8);
}
