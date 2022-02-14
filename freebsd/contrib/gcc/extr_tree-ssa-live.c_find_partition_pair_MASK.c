
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct partition_pair_d {int dummy; } ;
typedef TYPE_1__* partition_pair_p ;
typedef TYPE_2__* coalesce_list_p ;
struct TYPE_6__ {TYPE_1__** list; } ;
struct TYPE_5__ {int second_partition; int first_partition; struct TYPE_5__* next; scalar_t__ cost; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static partition_pair_p
FUNC_1 (coalesce_list_p VAR_0, int VAR_1, int VAR_2, bool VAR_3)
{
  partition_pair_p VAR_4, VAR_5;
  int VAR_6;


  if (VAR_2 < VAR_1)
    {
      VAR_6 = VAR_1;
      VAR_1 = VAR_2;
      VAR_2 = VAR_6;
    }

  VAR_5 = ((void*)0);



  for (VAR_4 = VAR_0->list[VAR_1]; VAR_4; VAR_4 = VAR_4->next)
    {
      if (VAR_4->second_partition == VAR_2)
        return VAR_4;
      else
        if (VAR_4->second_partition > VAR_2)
   break;
     VAR_5 = VAR_4;
    }

  if (!VAR_3)
    return ((void*)0);

  VAR_4 = (partition_pair_p) FUNC_0 (sizeof (struct partition_pair_d));
  VAR_4->first_partition = VAR_1;
  VAR_4->second_partition = VAR_2;
  VAR_4->cost = 0;

  if (VAR_5 != ((void*)0))
    {
      VAR_4->next = VAR_5->next;
      VAR_5->next = VAR_4;
    }
  else
    {

      VAR_4->next = VAR_0->list[VAR_1];
      VAR_0->list[VAR_1] = VAR_4;
    }

  return VAR_4;
}
