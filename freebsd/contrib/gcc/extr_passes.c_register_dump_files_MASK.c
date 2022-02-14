
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_opt_pass {int properties_required; int todo_flags_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct tree_opt_pass*,int,int) ;

__attribute__((used)) static void
FUNC_1 (struct tree_opt_pass *VAR_1, bool VAR_2, int VAR_3)
{
  VAR_1->properties_required |= VAR_3;
  VAR_1->todo_flags_start |= VAR_0;
  FUNC_0 (VAR_1, VAR_2, VAR_3);
}
