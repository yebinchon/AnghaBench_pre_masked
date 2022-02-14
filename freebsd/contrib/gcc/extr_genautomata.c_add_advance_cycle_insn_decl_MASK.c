
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct decl {int dummy; } ;
struct TYPE_8__ {char* name; int insn_num; int * regexp; } ;
struct TYPE_7__ {int pos; int mode; } ;
struct TYPE_6__ {size_t decls_num; int insns_num; TYPE_2__** decls; } ;


 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_0 = FUNC_1 (sizeof (struct decl));
  VAR_0->mode = VAR_2;
  VAR_0->pos = VAR_3;
  FUNC_0 (VAR_0)->regexp = ((void*)0);
  FUNC_0 (VAR_0)->name = "$advance_cycle";
  FUNC_0 (VAR_0)->insn_num
    = VAR_1->insns_num;
  VAR_1->decls [VAR_1->decls_num] = VAR_0;
  VAR_1->decls_num++;
  VAR_1->insns_num++;
}
