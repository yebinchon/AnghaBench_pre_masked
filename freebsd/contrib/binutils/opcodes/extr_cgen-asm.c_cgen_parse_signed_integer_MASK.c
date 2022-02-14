
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum cgen_parse_operand_result { ____Placeholder_cgen_parse_operand_result } cgen_parse_operand_result ;
typedef long bfd_vma ;
struct TYPE_4__ {char* (* parse_operand_fn ) (TYPE_1__*,int ,char const**,int,int ,int*,long*) ;} ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_1__*,int ,char const**,int,int ,int*,long*) ;

const char *
FUNC_1 (CGEN_CPU_DESC VAR_2,
      const char **VAR_3,
      int VAR_4,
      long *VAR_5)
{
  bfd_vma VAR_6;
  enum cgen_parse_operand_result VAR_7;
  const char *VAR_8;

  VAR_8 = (* VAR_2->parse_operand_fn)
    (VAR_2, VAR_1, VAR_3, VAR_4, VAR_0,
     &VAR_7, &VAR_6);

  if (!VAR_8)
    *VAR_5 = VAR_6;
  return VAR_8;
}
