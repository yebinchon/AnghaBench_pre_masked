
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* binding_table ;
typedef TYPE_2__* binding_entry ;
struct TYPE_7__ {struct TYPE_7__* chain; } ;
struct TYPE_6__ {int chain_count; int entry_count; TYPE_2__** chain; } ;


 size_t FUNC_0 (unsigned int const,int) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (binding_table VAR_0, tree VAR_1, tree VAR_2)
{
  const unsigned int VAR_3 = FUNC_1 (VAR_1);
  const size_t VAR_4 = FUNC_0 (VAR_3, VAR_0->chain_count);
  binding_entry VAR_5 = FUNC_2 (VAR_1, VAR_2);

  VAR_5->chain = VAR_0->chain[VAR_4];
  VAR_0->chain[VAR_4] = VAR_5;
  ++VAR_0->entry_count;

  if (3 * VAR_0->chain_count < 5 * VAR_0->entry_count)
    FUNC_3 (VAR_0);
}
