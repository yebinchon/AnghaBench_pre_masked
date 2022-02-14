
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum cgen_parse_operand_result { ____Placeholder_cgen_parse_operand_result } cgen_parse_operand_result ;
typedef int bfd_vma ;
struct TYPE_4__ {char* (* parse_operand_fn ) (TYPE_1__*,int ,char const**,int,int,int*,int *) ;} ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*,int ,char const**,int,int,int*,int *) ;

const char *
FUNC_1 (CGEN_CPU_DESC VAR_1,
      const char **VAR_2,
      int VAR_3,
      int VAR_4,
      enum cgen_parse_operand_result *VAR_5,
      bfd_vma *VAR_6)
{
  bfd_vma VAR_7;
  enum cgen_parse_operand_result VAR_8;
  const char *VAR_9;

  VAR_9 = (* VAR_1->parse_operand_fn)
    (VAR_1, VAR_0, VAR_2, VAR_3, VAR_4,
     &VAR_8, &VAR_7);

  if (!VAR_9)
    {
      if (VAR_5 != ((void*)0))
 *VAR_5 = VAR_8;
      *VAR_6 = VAR_7;
    }
  return VAR_9;
}
