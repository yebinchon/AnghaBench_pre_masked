
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct rus_data {int has_label; int repeat; int * last_goto; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (tree *VAR_0, struct rus_data *VAR_1)
{
  tree VAR_2 = FUNC_2 (*VAR_0);

  VAR_1->has_label = 1;


  if (FUNC_0 (VAR_2))
    VAR_1->last_goto = ((void*)0);

  else if (VAR_1->last_goto && FUNC_1 (*VAR_1->last_goto) == VAR_2)
    {
      *VAR_1->last_goto = FUNC_3 ();
      VAR_1->repeat = 1;
    }


}
