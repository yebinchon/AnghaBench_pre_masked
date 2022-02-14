
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* partition_pair_p ;
typedef TYPE_2__* coalesce_list_p ;
struct TYPE_7__ {int add_mode; } ;
struct TYPE_6__ {int cost; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int,int,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (coalesce_list_p VAR_0, int VAR_1, int VAR_2,
       int VAR_3)
{
  partition_pair_p VAR_4;

  FUNC_1 (VAR_0->add_mode);

  if (VAR_1 == VAR_2)
    return;

  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2, 1);

  VAR_4->cost += VAR_3;
}
