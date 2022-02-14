
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* binding_table ;
typedef TYPE_2__* binding_entry ;
struct TYPE_6__ {struct TYPE_6__* chain; int name; } ;
struct TYPE_5__ {size_t chain_count; size_t entry_count; TYPE_2__** chain; } ;


 size_t FUNC_0 (unsigned int const,size_t const) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,size_t const) ;

__attribute__((used)) static void
FUNC_3 (binding_table VAR_0)
{
  const size_t VAR_1 = VAR_0->chain_count;
  const size_t VAR_2 = VAR_0->entry_count;
  const size_t VAR_3 = 2 * VAR_1;
  binding_entry *VAR_4 = VAR_0->chain;
  size_t VAR_5;

  FUNC_2 (VAR_0, VAR_3);
  for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
    {
      binding_entry VAR_6 = VAR_4[VAR_5];
      for (; VAR_6 != ((void*)0); VAR_6 = VAR_4[VAR_5])
 {
   const unsigned int VAR_7 = FUNC_1 (VAR_6->name);
   const size_t VAR_8 = FUNC_0 (VAR_7, VAR_3);

   VAR_4[VAR_5] = VAR_6->chain;
   VAR_6->chain = VAR_0->chain[VAR_8];
   VAR_0->chain[VAR_8] = VAR_6;
 }
    }
  VAR_0->entry_count = VAR_2;
}
