
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct ecoff_debug_swap {int (* swap_ext_out ) (int ,int *,int ) ;int external_ext_size; } ;
struct TYPE_4__ {int native; int local; } ;
typedef TYPE_1__ ecoff_symbol_type ;
struct TYPE_5__ {struct ecoff_debug_swap debug_swap; } ;
typedef int EXTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void
FUNC_7 (symbolS *VAR_3, EXTR *VAR_4)
{
  const struct ecoff_debug_swap * const VAR_5
    = &FUNC_1 (VAR_2)->debug_swap;
  ecoff_symbol_type *VAR_6;

  FUNC_3 (FUNC_0 (FUNC_5 (VAR_3))
 == VAR_1);
  VAR_6 = FUNC_2 (FUNC_5 (VAR_3));
  VAR_6->local = VAR_0;
  VAR_6->native = FUNC_6 (VAR_5->external_ext_size);
  (*VAR_5->swap_ext_out) (VAR_2, VAR_4, VAR_6->native);
}
