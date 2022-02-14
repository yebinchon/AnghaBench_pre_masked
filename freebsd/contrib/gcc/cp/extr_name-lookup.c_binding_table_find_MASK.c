
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* binding_table ;
typedef TYPE_2__* binding_entry ;
struct TYPE_6__ {scalar_t__ name; struct TYPE_6__* chain; } ;
struct TYPE_5__ {int chain_count; TYPE_2__** chain; } ;


 size_t FUNC_0 (unsigned int const,int ) ;
 unsigned int FUNC_1 (scalar_t__) ;

binding_entry
FUNC_2 (binding_table VAR_0, tree VAR_1)
{
  const unsigned int VAR_2 = FUNC_1 (VAR_1);
  binding_entry VAR_3 = VAR_0->chain[FUNC_0 (VAR_2, VAR_0->chain_count)];

  while (VAR_3 != ((void*)0) && VAR_3->name != VAR_1)
    VAR_3 = VAR_3->chain;

  return VAR_3;
}
