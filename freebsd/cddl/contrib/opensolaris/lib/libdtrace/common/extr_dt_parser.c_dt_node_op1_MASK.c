
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
struct TYPE_11__ {TYPE_1__* dt_ddefs; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_12__ {scalar_t__ dn_kind; unsigned long long dn_value; int dn_flags; struct TYPE_12__* dn_child; scalar_t__ dn_op; } ;
typedef TYPE_3__ dt_node_t ;
struct TYPE_13__ {TYPE_2__* pcb_hdl; } ;
struct TYPE_10__ {int dm_ctfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 size_t FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_4__* VAR_11 ;

dt_node_t *
FUNC_6(int VAR_12, dt_node_t *VAR_13)
{
 dt_node_t *VAR_14;

 if (VAR_13->dn_kind == VAR_2) {
  switch (VAR_12) {
  case 130:





   VAR_13->dn_value = -VAR_13->dn_value;
   if (!(VAR_13->dn_flags & VAR_1)) {
    VAR_13->dn_value &= ~0ULL >>
        (64 - FUNC_4(VAR_13) * VAR_9);
   }

  case 129:
   return (VAR_13);
  case 131:
   VAR_13->dn_value = ~VAR_13->dn_value;
   return (VAR_13);
  case 128:
   VAR_13->dn_value = !VAR_13->dn_value;
   return (VAR_13);
  }
 }






 if (VAR_12 == VAR_7 &&
     (VAR_13->dn_kind == VAR_4 || VAR_13->dn_kind == VAR_5)) {
  dtrace_hdl_t *VAR_15 = VAR_11->pcb_hdl;
  size_t VAR_16 = FUNC_4(VAR_13);

  if (VAR_16 == 0) {
   FUNC_5(VAR_8, "cannot apply sizeof to an "
       "operand of unknown size\n");
  }

  FUNC_3(VAR_13, VAR_15->dt_ddefs->dm_ctfp,
      FUNC_1(VAR_15->dt_ddefs->dm_ctfp, "size_t"),
      VAR_0);

  VAR_13->dn_kind = VAR_2;
  VAR_13->dn_op = VAR_6;
  VAR_13->dn_value = VAR_16;

  return (VAR_13);
 }

 VAR_14 = FUNC_2(VAR_3);
 FUNC_0(VAR_12 <= VAR_10);
 VAR_14->dn_op = (ushort_t)VAR_12;
 VAR_14->dn_child = VAR_13;

 return (VAR_14);
}
