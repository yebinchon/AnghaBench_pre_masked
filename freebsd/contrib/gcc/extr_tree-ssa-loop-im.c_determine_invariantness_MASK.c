
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_walk_data {int before_dom_children_before_stmts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dom_walk_data*) ;
 int FUNC_1 (struct dom_walk_data*) ;
 int FUNC_2 (struct dom_walk_data*,int ,int) ;
 int FUNC_3 (struct dom_walk_data*,int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct dom_walk_data VAR_2;

  FUNC_2 (&VAR_2, 0, sizeof (struct dom_walk_data));
  VAR_2.before_dom_children_before_stmts = VAR_1;

  FUNC_1 (&VAR_2);
  FUNC_3 (&VAR_2, VAR_0);
  FUNC_0 (&VAR_2);
}
