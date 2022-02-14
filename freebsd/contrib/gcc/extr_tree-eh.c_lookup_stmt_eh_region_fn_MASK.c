
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct throw_stmt_node {int region_nr; int stmt; } ;
struct function {int dummy; } ;


 int FUNC_0 (struct function*) ;
 scalar_t__ FUNC_1 (int ,struct throw_stmt_node*) ;

int
FUNC_2 (struct function *VAR_0, tree VAR_1)
{
  struct throw_stmt_node *VAR_2, VAR_3;

  if (!FUNC_0 (VAR_0))
    return -2;

  VAR_3.stmt = VAR_1;
  VAR_2 = (struct throw_stmt_node *) FUNC_1 (FUNC_0 (VAR_0),
                                            &VAR_3);

  return (VAR_2 ? VAR_2->region_nr : -1);
}
