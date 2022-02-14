
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct ptr_info_def {scalar_t__ name_mem_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 struct ptr_info_def* FUNC_2 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_3 (tree VAR_1)
{
  struct ptr_info_def *VAR_2 = FUNC_2 (VAR_1);
  tree VAR_3 = VAR_2->name_mem_tag;

  if (VAR_3 == VAR_0)
    VAR_3 = FUNC_1 (FUNC_0 (FUNC_0 (VAR_1)), 0);
  return VAR_3;
}
