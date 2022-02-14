
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct memrange {int dummy; } ;
struct collection_list {int next_memrange; TYPE_1__* list; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ start; scalar_t__ end; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void
FUNC_2 (struct collection_list *VAR_2)
{
  int VAR_3, VAR_4;

  FUNC_1 (VAR_2->list, VAR_2->next_memrange,
  sizeof (struct memrange), VAR_1);
  if (VAR_2->next_memrange > 0)
    {
      for (VAR_3 = 0, VAR_4 = 1; VAR_4 < VAR_2->next_memrange; VAR_4++)
 {
   if (VAR_2->list[VAR_3].type == VAR_2->list[VAR_4].type &&
       VAR_2->list[VAR_4].start - VAR_2->list[VAR_3].end <=
       VAR_0)
     {

       if (VAR_2->list[VAR_4].end > VAR_2->list[VAR_3].end)
  VAR_2->list[VAR_3].end = VAR_2->list[VAR_4].end;
       continue;
     }
   VAR_3++;
   if (VAR_3 != VAR_4)
     FUNC_0 (&VAR_2->list[VAR_3], &VAR_2->list[VAR_4],
      sizeof (struct memrange));
 }
      VAR_2->next_memrange = VAR_3 + 1;
    }
}
