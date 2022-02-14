
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dom_walk_data {int before_dom_children_before_stmts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dom_walk_data*) ;
 int FUNC_1 (struct dom_walk_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dom_walk_data*,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct dom_walk_data*,int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  struct dom_walk_data VAR_3;

  FUNC_3 (&VAR_3, 0, sizeof (struct dom_walk_data));
  VAR_3.before_dom_children_before_stmts = VAR_2;

  FUNC_1 (&VAR_3);
  FUNC_6 (&VAR_3, VAR_0);
  FUNC_0 (&VAR_3);

  FUNC_2 ();
  if (FUNC_4 ())
    FUNC_5 (((void*)0), VAR_1);
}
