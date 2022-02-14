
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* prev; int symbol; } ;
typedef TYPE_3__ tekhex_symbol_type ;
struct TYPE_8__ {TYPE_1__* tekhex_data; } ;
struct TYPE_10__ {TYPE_2__ tdata; } ;
typedef TYPE_4__ bfd ;
typedef int asymbol ;
struct TYPE_7__ {TYPE_3__* symbols; } ;


 long FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static long
FUNC_1 (bfd *VAR_0, asymbol **VAR_1)
{
  tekhex_symbol_type *VAR_2 = VAR_0->tdata.tekhex_data->symbols;
  unsigned int VAR_3 = FUNC_0 (VAR_0);

  VAR_1[VAR_3] = 0;
  while (VAR_2)
    {
      VAR_1[--VAR_3] = &(VAR_2->symbol);
      VAR_2 = VAR_2->prev;
    }

  return FUNC_0 (VAR_0);
}
