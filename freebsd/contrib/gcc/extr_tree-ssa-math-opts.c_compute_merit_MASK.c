
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occurrence {scalar_t__ num_divisions; int bb; struct occurrence* children; struct occurrence* next; } ;
typedef int basic_block ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct occurrence *VAR_2)
{
  struct occurrence *VAR_3;
  basic_block VAR_4 = VAR_2->bb;

  for (VAR_3 = VAR_2->children; VAR_3; VAR_3 = VAR_3->next)
    {
      basic_block VAR_5;
      if (VAR_3->children)
        FUNC_2 (VAR_3);

      if (VAR_1)
 VAR_5 = FUNC_1 (VAR_4);
      else
 VAR_5 = VAR_4;

      if (FUNC_0 (VAR_0, VAR_5, VAR_3->bb))
        VAR_2->num_divisions += VAR_3->num_divisions;
    }
}
