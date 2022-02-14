
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ mc_node ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int) ;

mc_node *
FUNC_2 (void)
{
  mc_node *VAR_1;

  VAR_1 = FUNC_1 (sizeof (mc_node));
  FUNC_0 (VAR_1, 0, sizeof (mc_node));
  if (! VAR_0)
    VAR_0 = VAR_1;
  else
    {
      mc_node *VAR_2 = VAR_0;

      while (VAR_2->next != ((void*)0))
 VAR_2 = VAR_2->next;
      VAR_2->next = VAR_1;
    }
  return VAR_1;
}
