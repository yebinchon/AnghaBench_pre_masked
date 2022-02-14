
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uintmax_t ;
typedef int uint_t ;
typedef int uint64_t ;
typedef int dt_regset_t ;
struct TYPE_9__ {size_t* pr_mapping; } ;
typedef TYPE_1__ dt_probe_t ;
struct TYPE_10__ {scalar_t__ dn_kind; int dn_reg; int dn_flags; TYPE_7__* dn_args; TYPE_3__* dn_ident; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_irlist_t ;
struct TYPE_11__ {int di_flags; scalar_t__ di_id; scalar_t__ di_kind; int di_data; } ;
typedef TYPE_3__ dt_ident_t ;
typedef int dif_instr_t ;
struct TYPE_13__ {size_t dn_value; scalar_t__ dn_kind; int dn_reg; int * dn_list; } ;
struct TYPE_12__ {TYPE_1__* pcb_probe; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 size_t FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_4__* VAR_16 ;

__attribute__((used)) static void
FUNC_12(dt_node_t *VAR_17, dt_irlist_t *VAR_18, dt_regset_t *VAR_19)
{
 dt_probe_t *VAR_20 = VAR_16->pcb_probe;
 uintmax_t VAR_21 = VAR_17->dn_args->dn_value;
 dt_ident_t *VAR_22 = VAR_17->dn_ident;

 dif_instr_t VAR_23;
 uint_t VAR_24;
 size_t VAR_25;
 int VAR_26, VAR_27;

 FUNC_2(VAR_17->dn_kind == VAR_14);
 FUNC_2(!(VAR_22->di_flags & VAR_9));

 FUNC_2(VAR_17->dn_args->dn_kind == VAR_13);
 FUNC_2(VAR_17->dn_args->dn_list == ((void*)0));
 if (VAR_22->di_id == VAR_5) {
  if ((VAR_22->di_kind == VAR_6 ||
      VAR_22->di_kind == VAR_7) &&
      FUNC_11(VAR_22->di_data)) {
   VAR_17->dn_reg = -1;
   return;
  }
  VAR_17->dn_args->dn_value = VAR_20->pr_mapping[VAR_21];
 }

 FUNC_3(VAR_17->dn_args, VAR_18, VAR_19);
 VAR_17->dn_args->dn_value = VAR_21;

 VAR_17->dn_reg = VAR_17->dn_args->dn_reg;

 if (VAR_22->di_flags & VAR_10)
  VAR_24 = VAR_1;
 else
  VAR_24 = VAR_0;

 VAR_22->di_flags |= VAR_8;

 VAR_23 = FUNC_1(VAR_24, VAR_22->di_id,
     VAR_17->dn_args->dn_reg, VAR_17->dn_reg);

 FUNC_6(VAR_18, FUNC_4(VAR_11, VAR_23));
 if (VAR_22->di_id != VAR_5 || !FUNC_7(VAR_17))
  return;

 if ((VAR_25 = FUNC_8(VAR_17)) == sizeof (uint64_t))
  return;

 VAR_26 = FUNC_9(VAR_19);
 FUNC_2(VAR_25 < sizeof (uint64_t));
 VAR_27 = sizeof (uint64_t) * VAR_15 - VAR_25 * VAR_15;

 FUNC_5(VAR_18, VAR_26, VAR_27);

 VAR_23 = FUNC_0(VAR_2, VAR_17->dn_reg, VAR_26, VAR_17->dn_reg);
 FUNC_6(VAR_18, FUNC_4(VAR_11, VAR_23));

 VAR_23 = FUNC_0((VAR_17->dn_flags & VAR_12) ?
     VAR_3 : VAR_4, VAR_17->dn_reg, VAR_26, VAR_17->dn_reg);

 FUNC_6(VAR_18, FUNC_4(VAR_11, VAR_23));
 FUNC_10(VAR_19, VAR_26);
}
