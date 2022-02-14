
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef void* basic_block ;
struct TYPE_7__ {int flags; void* dest; void* src; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;

edge
FUNC_4 (basic_block VAR_1, basic_block VAR_2, int VAR_3)
{
  edge VAR_4;
  VAR_4 = FUNC_3 (sizeof (*VAR_4));
  VAR_0++;

  VAR_4->src = VAR_1;
  VAR_4->dest = VAR_2;
  VAR_4->flags = VAR_3;

  FUNC_1 (VAR_4);
  FUNC_0 (VAR_4);

  FUNC_2 (VAR_4);

  return VAR_4;
}
