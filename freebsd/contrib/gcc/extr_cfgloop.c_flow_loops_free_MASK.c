
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct loop** rc_order; struct loop** dfs_order; } ;
struct loops {unsigned int num; TYPE_1__ cfg; struct loop** parray; } ;
struct loop {int dummy; } ;


 int FUNC_0 (struct loop*) ;
 int FUNC_1 (struct loop**) ;
 int FUNC_2 (unsigned int) ;

void
FUNC_3 (struct loops *VAR_0)
{
  if (VAR_0->parray)
    {
      unsigned VAR_1;

      FUNC_2 (VAR_0->num);


      for (VAR_1 = 0; VAR_1 < VAR_0->num; VAR_1++)
 {
   struct loop *VAR_2 = VAR_0->parray[VAR_1];

   if (!VAR_2)
     continue;

   FUNC_0 (VAR_2);
 }

      FUNC_1 (VAR_0->parray);
      VAR_0->parray = ((void*)0);

      if (VAR_0->cfg.dfs_order)
 FUNC_1 (VAR_0->cfg.dfs_order);
      if (VAR_0->cfg.rc_order)
 FUNC_1 (VAR_0->cfg.rc_order);

    }
}
