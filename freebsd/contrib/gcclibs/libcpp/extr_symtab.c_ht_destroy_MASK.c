
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* entries; scalar_t__ entries_owned; int stack; } ;
typedef TYPE_1__ hash_table ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2 (hash_table *VAR_0)
{
  FUNC_1 (&VAR_0->stack, ((void*)0));
  if (VAR_0->entries_owned)
    FUNC_0 (VAR_0->entries);
  FUNC_0 (VAR_0);
}
