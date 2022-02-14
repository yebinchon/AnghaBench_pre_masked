
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df_ref {int dummy; } ;
struct df {struct dataflow** problems_by_index; } ;
struct dataflow {int dummy; } ;
struct TYPE_2__ {struct df_ref* artificial_uses; } ;


 size_t VAR_0 ;
 TYPE_1__* FUNC_0 (struct dataflow*,unsigned int) ;

struct df_ref *
FUNC_1 (struct df *VAR_1, unsigned int VAR_2)
{
  struct dataflow *VAR_3 = VAR_1->problems_by_index[VAR_0];
  return FUNC_0 (VAR_3, VAR_2)->artificial_uses;
}
