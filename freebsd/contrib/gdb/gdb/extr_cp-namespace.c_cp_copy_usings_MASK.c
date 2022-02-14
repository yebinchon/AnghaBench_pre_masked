
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct using_direct {struct using_direct* outer; struct using_direct* inner; struct using_direct* next; } ;
struct obstack {int dummy; } ;


 void* FUNC_0 (struct using_direct*,int ,struct obstack*) ;
 struct using_direct* FUNC_1 (struct obstack*,int) ;
 int FUNC_2 (struct using_direct*) ;
 int FUNC_3 (struct using_direct*) ;

__attribute__((used)) static struct using_direct *
FUNC_4 (struct using_direct *VAR_0,
  struct obstack *VAR_1)
{
  if (VAR_0 == ((void*)0))
    {
      return ((void*)0);
    }
  else
    {
      struct using_direct *VAR_2
 = FUNC_1 (VAR_1, sizeof (struct using_direct));
      VAR_2->inner = FUNC_0 (VAR_0->inner, FUNC_2 (VAR_0->inner),
        VAR_1);
      VAR_2->outer = FUNC_0 (VAR_0->outer, FUNC_2 (VAR_0->outer),
        VAR_1);
      VAR_2->next = FUNC_4 (VAR_0->next, VAR_1);

      FUNC_3 (VAR_0->inner);
      FUNC_3 (VAR_0->outer);
      FUNC_3 (VAR_0);

      return VAR_2;
    }
}
