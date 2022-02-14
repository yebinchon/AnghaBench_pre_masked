
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct ptr_info_def {int pt_anything; scalar_t__ name_mem_tag; int * pt_vars; } ;


 scalar_t__ VAR_0 ;
 struct ptr_info_def* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (tree VAR_1)
{
  struct ptr_info_def *VAR_2 = FUNC_0 (VAR_1);

  VAR_2->pt_anything = 1;
  VAR_2->pt_vars = ((void*)0);




  if (VAR_2->name_mem_tag)
    {
      FUNC_1 (VAR_2->name_mem_tag);
      VAR_2->name_mem_tag = VAR_0;
    }
}
