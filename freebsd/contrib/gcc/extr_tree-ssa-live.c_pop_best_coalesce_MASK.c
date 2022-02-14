
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* partition_pair_p ;
typedef TYPE_2__* coalesce_list_p ;
struct TYPE_6__ {TYPE_1__** list; int add_mode; } ;
struct TYPE_5__ {int first_partition; int second_partition; int cost; struct TYPE_5__* next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (coalesce_list_p VAR_1, int *VAR_2, int *VAR_3)
{
  partition_pair_p VAR_4;
  int VAR_5;

  FUNC_1 (!VAR_1->add_mode);

  VAR_4 = VAR_1->list[0];
  if (!VAR_4)
    return VAR_0;

  VAR_1->list[0] = VAR_4->next;

  *VAR_2 = VAR_4->first_partition;
  *VAR_3 = VAR_4->second_partition;
  VAR_5 = VAR_4->cost;
  FUNC_0 (VAR_4);

  return VAR_5;
}
