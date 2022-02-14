
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int scope_mask; int FlowLabel; int TClass; int Q_Key; scalar_t__ sl; scalar_t__ mtu; scalar_t__ rate; } ;
struct precreate_mgroup {int mgid; TYPE_1__ flags; } ;
struct part_conf {int p_prtn; int p_subn; int p_log; } ;


 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct part_conf *VAR_0, struct precreate_mgroup *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->flags.scope_mask) {
  FUNC_0(VAR_0->p_log, VAR_0->p_subn, VAR_0->p_prtn,
         (uint8_t) VAR_1->flags.rate,
         (uint8_t) VAR_1->flags.mtu,
         VAR_1->flags.sl,
         0,
         VAR_1->flags.Q_Key,
         VAR_1->flags.TClass,
         VAR_1->flags.FlowLabel,
         &VAR_1->mgid);
 } else {
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
   if (((1<<VAR_2) & VAR_1->flags.scope_mask) == 0)
    continue;

   FUNC_0(VAR_0->p_log, VAR_0->p_subn, VAR_0->p_prtn,
          (uint8_t)VAR_1->flags.rate,
          (uint8_t)VAR_1->flags.mtu,
          (uint8_t)VAR_1->flags.sl,
          (uint8_t)VAR_2,
          VAR_1->flags.Q_Key,
          VAR_1->flags.TClass,
          VAR_1->flags.FlowLabel,
          &VAR_1->mgid);
  }
 }
}
