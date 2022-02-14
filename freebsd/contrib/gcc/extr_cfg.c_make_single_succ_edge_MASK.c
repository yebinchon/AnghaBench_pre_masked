
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_10__ {int count; } ;
struct TYPE_9__ {int count; int probability; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

edge
FUNC_1 (basic_block VAR_1, basic_block VAR_2, int VAR_3)
{
  edge VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);

  VAR_4->probability = VAR_0;
  VAR_4->count = VAR_1->count;
  return VAR_4;
}
