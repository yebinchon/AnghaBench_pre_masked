
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int set_el_t ;
typedef int htab_del ;
typedef TYPE_1__* decl_t ;
struct TYPE_9__ {int units_num; int decls_num; int max_insn_reserv_cycles; TYPE_1__** decls; } ;
struct TYPE_8__ {size_t unit_num; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__** FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__** VAR_12 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  decl_t VAR_13;
  int VAR_14;

  if (VAR_2->units_num)
    VAR_12 = FUNC_1 (VAR_11, VAR_2->units_num);
  else
    VAR_12 = 0;

  for (VAR_14 = 0; VAR_14 < VAR_2->decls_num; VAR_14++)
    {
      VAR_13 = VAR_2->decls [VAR_14];
      if (VAR_13->mode == VAR_3)
 VAR_12 [FUNC_0 (VAR_13)->unit_num] = FUNC_0 (VAR_13);
    }
  VAR_6 = VAR_2->max_insn_reserv_cycles;
  VAR_4
    = ((VAR_2->units_num + sizeof (set_el_t) * VAR_0 - 1)
       / (sizeof (set_el_t) * VAR_0));
  VAR_5 = VAR_4 * VAR_6;
  VAR_1 = 0;
  FUNC_4 ();
  VAR_9 = FUNC_3 (1500, VAR_8, VAR_7, (htab_del) 0);
  VAR_10 = FUNC_2 ();
}
