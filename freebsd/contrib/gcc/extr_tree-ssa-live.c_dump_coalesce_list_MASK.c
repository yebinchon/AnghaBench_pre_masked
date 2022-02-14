
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* partition_pair_p ;
typedef TYPE_2__* coalesce_list_p ;
struct TYPE_5__ {int map; TYPE_1__** list; scalar_t__ add_mode; } ;
struct TYPE_4__ {int second_partition; int cost; int first_partition; struct TYPE_4__* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,int ) ;

void
FUNC_4 (FILE *VAR_1, coalesce_list_p VAR_2)
{
  partition_pair_p VAR_3;
  int VAR_4, VAR_5;
  tree VAR_6;

  if (VAR_2->add_mode)
    {
      FUNC_0 (VAR_1, "Coalesce List:\n");
      VAR_5 = FUNC_1 (VAR_2->map);
      for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
        {
   VAR_3 = VAR_2->list[VAR_4];
   if (VAR_3)
     {
       FUNC_0 (VAR_1, "[");
       FUNC_3 (VAR_1, FUNC_2 (VAR_2->map, VAR_4), VAR_0);
       FUNC_0 (VAR_1, "] - ");
       for ( ; VAR_3; VAR_3 = VAR_3->next)
         {
    VAR_6 = FUNC_2 (VAR_2->map, VAR_3->second_partition);
    FUNC_3 (VAR_1, VAR_6, VAR_0);
    FUNC_0 (VAR_1, "(%1d), ", VAR_3->cost);
  }
       FUNC_0 (VAR_1, "\n");
     }
 }
    }
  else
    {
      FUNC_0 (VAR_1, "Sorted Coalesce list:\n");
      for (VAR_3 = VAR_2->list[0]; VAR_3; VAR_3 = VAR_3->next)
        {
   FUNC_0 (VAR_1, "(%d) ", VAR_3->cost);
   VAR_6 = FUNC_2 (VAR_2->map, VAR_3->first_partition);
   FUNC_3 (VAR_1, VAR_6, VAR_0);
   FUNC_0 (VAR_1, " : ");
   VAR_6 = FUNC_2 (VAR_2->map, VAR_3->second_partition);
   FUNC_3 (VAR_1, VAR_6, VAR_0);
   FUNC_0 (VAR_1, "\n");
 }
    }
}
