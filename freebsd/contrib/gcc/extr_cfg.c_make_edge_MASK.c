
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_5__ {int flags; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;

edge
FUNC_2 (basic_block VAR_0, basic_block VAR_1, int VAR_2)
{
  edge VAR_3 = FUNC_0 (VAR_0, VAR_1);


  if (VAR_3)
    {
      VAR_3->flags |= VAR_2;
      return ((void*)0);
    }

  return FUNC_1 (VAR_0, VAR_1, VAR_2);
}
