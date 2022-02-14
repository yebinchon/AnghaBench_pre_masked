
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* bt_foreach_proc ) (TYPE_1__*,void*) ;
typedef TYPE_2__* binding_table ;
typedef TYPE_1__* binding_entry ;
struct TYPE_7__ {size_t chain_count; TYPE_1__** chain; } ;
struct TYPE_6__ {struct TYPE_6__* chain; } ;



void
FUNC_0 (binding_table VAR_0, bt_foreach_proc VAR_1, void *VAR_2)
{
  const size_t VAR_3 = VAR_0->chain_count;
  size_t VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    {
      binding_entry VAR_5 = VAR_0->chain[VAR_4];
      for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->chain)
 VAR_1 (VAR_5, VAR_2);
    }
}
