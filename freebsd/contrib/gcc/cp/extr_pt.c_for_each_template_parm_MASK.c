
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_fn_t ;
typedef int tree ;
struct pointer_set_t {int dummy; } ;
struct pair_fn_data {struct pointer_set_t* visited; void* data; int fn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pointer_set_t* FUNC_0 () ;
 int FUNC_1 (struct pointer_set_t*) ;
 scalar_t__ FUNC_2 (int *,int ,struct pair_fn_data*,struct pointer_set_t*) ;

__attribute__((used)) static int
FUNC_3 (tree VAR_2, tree_fn_t VAR_3, void* VAR_4,
   struct pointer_set_t *VAR_5)
{
  struct pair_fn_data VAR_6;
  int VAR_7;


  VAR_6.fn = VAR_3;
  VAR_6.data = VAR_4;






  if (VAR_5)
    VAR_6.visited = VAR_5;
  else
    VAR_6.visited = FUNC_0 ();
  VAR_7 = FUNC_2 (&VAR_2,
        VAR_1,
        &VAR_6,
        VAR_6.visited) != VAR_0;


  if (!VAR_5)
    {
      FUNC_1 (VAR_6.visited);
      VAR_6.visited = 0;
    }

  return VAR_7;
}
