
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X_op; int * X_add_symbol; } ;
struct TYPE_5__ {int pc_rel; TYPE_1__ exp; int type; } ;
struct TYPE_6__ {TYPE_2__ reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 int VAR_3 ;
 int * FUNC_3 (int *) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  FUNC_2 (VAR_3 && VAR_3 != 0x10, VAR_0);
  VAR_4.reloc.type = VAR_1;
  VAR_4.reloc.pc_rel = 1;





  if ( VAR_4.reloc.exp.X_op == VAR_2
      && VAR_4.reloc.exp.X_add_symbol != ((void*)0)
      && FUNC_0 (VAR_4.reloc.exp.X_add_symbol)
      && ! FUNC_1 (VAR_4.reloc.exp.X_add_symbol))
    VAR_4.reloc.exp.X_add_symbol =
      FUNC_3 (VAR_4.reloc.exp.X_add_symbol);
}
