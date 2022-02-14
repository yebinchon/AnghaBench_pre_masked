
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct answer {unsigned int count; int * first; struct answer* next; } ;
struct TYPE_4__ {struct answer* answers; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
typedef TYPE_2__ cpp_hashnode ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static struct answer **
FUNC_1 (cpp_hashnode *VAR_0, const struct answer *VAR_1)
{
  unsigned int VAR_2;
  struct answer **VAR_3;

  for (VAR_3 = &VAR_0->value.answers; *VAR_3; VAR_3 = &(*VAR_3)->next)
    {
      struct answer *VAR_4 = *VAR_3;

      if (VAR_4->count == VAR_1->count)
 {
   for (VAR_2 = 0; VAR_2 < VAR_4->count; VAR_2++)
     if (! FUNC_0 (&VAR_4->first[VAR_2], &VAR_1->first[VAR_2]))
       break;

   if (VAR_2 == VAR_4->count)
     break;
 }
    }

  return VAR_3;
}
