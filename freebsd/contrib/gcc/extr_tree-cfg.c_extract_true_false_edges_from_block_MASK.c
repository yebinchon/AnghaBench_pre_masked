
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_5__ {int flags; } ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_0 ;

void
FUNC_1 (basic_block VAR_1,
         edge *VAR_2,
         edge *VAR_3)
{
  edge VAR_4 = FUNC_0 (VAR_1, 0);

  if (VAR_4->flags & VAR_0)
    {
      *VAR_2 = VAR_4;
      *VAR_3 = FUNC_0 (VAR_1, 1);
    }
  else
    {
      *VAR_3 = VAR_4;
      *VAR_2 = FUNC_0 (VAR_1, 1);
    }
}
