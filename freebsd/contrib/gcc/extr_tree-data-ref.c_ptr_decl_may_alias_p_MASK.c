
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct ptr_info_def {scalar_t__ name_mem_tag; } ;
struct data_reference {int dummy; } ;
struct TYPE_2__ {scalar_t__ symbol_mem_tag; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct data_reference*) ;
 struct ptr_info_def* FUNC_2 (struct data_reference*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_2, tree VAR_3,
        struct data_reference *VAR_4,
        bool *VAR_5)
{
  tree VAR_6 = VAR_0;
  struct ptr_info_def *VAR_7 = FUNC_2 (VAR_4);

  FUNC_5 (FUNC_4 (VAR_2) == VAR_1 && FUNC_0 (VAR_3));

  if (VAR_7)
    VAR_6 = VAR_7->name_mem_tag;
  if (!VAR_6)
    VAR_6 = FUNC_6 (FUNC_3 (VAR_2))->symbol_mem_tag;
  if (!VAR_6)
    VAR_6 = FUNC_1 (VAR_4);
  if (!VAR_6)
    return 0;

  *VAR_5 = FUNC_7 (VAR_6, VAR_3);
  return 1;
}
