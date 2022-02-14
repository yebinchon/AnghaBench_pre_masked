
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct ptr_info_def {scalar_t__ name_mem_tag; } ;
struct data_reference {int dummy; } ;
struct TYPE_2__ {scalar_t__ symbol_mem_tag; } ;


 scalar_t__ FUNC_0 (struct data_reference*) ;
 struct ptr_info_def* FUNC_1 (struct data_reference*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_1, tree VAR_2,
       struct data_reference *VAR_3,
       struct data_reference *VAR_4,
       bool *VAR_5)
{
  tree VAR_6 = VAR_0, VAR_7 = VAR_0;
  struct ptr_info_def *VAR_8 = FUNC_1 (VAR_3);
  struct ptr_info_def *VAR_9 = FUNC_1 (VAR_4);

  if (VAR_8 && VAR_8->name_mem_tag && VAR_9 && VAR_9->name_mem_tag)
    {
      VAR_6 = VAR_8->name_mem_tag;
      VAR_7 = VAR_9->name_mem_tag;
    }
  else
    {
      VAR_6 = FUNC_3 (FUNC_2 (VAR_1))->symbol_mem_tag;
      if (!VAR_6)
 VAR_6 = FUNC_0 (VAR_3);
      if (!VAR_6)
 return 0;

      VAR_7 = FUNC_3 (FUNC_2 (VAR_2))->symbol_mem_tag;
      if (!VAR_7)
 VAR_7 = FUNC_0 (VAR_4);
      if (!VAR_7)
 return 0;
    }

  if (VAR_6 == VAR_7)
    *VAR_5 = 1;
  else
    *VAR_5 = FUNC_4 (VAR_6, VAR_7);

  return 1;
}
