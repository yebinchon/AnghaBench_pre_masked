
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* walk_use_def_chains_fn ) (int ,int ,void*) ;
typedef int tree ;
struct pointer_set_t {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct pointer_set_t* FUNC_3 () ;
 int FUNC_4 (struct pointer_set_t*) ;
 int FUNC_5 (int ,int ,void*) ;
 int FUNC_6 (int ,int (*) (int ,int ,void*),void*,struct pointer_set_t*,int) ;

void
FUNC_7 (tree VAR_2, walk_use_def_chains_fn VAR_3, void *VAR_4,
                     bool VAR_5)
{
  tree VAR_6;

  FUNC_2 (FUNC_1 (VAR_2) == VAR_1);

  VAR_6 = FUNC_0 (VAR_2);



  if (FUNC_1 (VAR_6) != VAR_0)
    (*VAR_3) (VAR_2, VAR_6, VAR_4);
  else
    {
      struct pointer_set_t *VAR_7 = FUNC_3 ();
      FUNC_6 (VAR_2, VAR_3, VAR_4, VAR_7, VAR_5);
      FUNC_4 (VAR_7);
    }
}
