
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct occurrence {TYPE_1__* bb; struct occurrence* children; struct occurrence* next; } ;
struct TYPE_2__ {int * aux; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct occurrence*) ;

__attribute__((used)) static struct occurrence *
FUNC_1 (struct occurrence *VAR_1)
{
  struct occurrence *VAR_2, *VAR_3;


  VAR_3 = VAR_1->next;
  VAR_2 = VAR_1->children;
  VAR_1->bb->aux = ((void*)0);
  FUNC_0 (VAR_0, VAR_1);


  if (!VAR_2)
    return VAR_3;
  else
    {
      while (VAR_3)
 VAR_3 = FUNC_1 (VAR_3);

      return VAR_2;
    }
}
