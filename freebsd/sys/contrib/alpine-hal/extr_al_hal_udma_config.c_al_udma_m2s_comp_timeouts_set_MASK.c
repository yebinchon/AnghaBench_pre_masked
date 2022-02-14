
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_comp_timeouts {scalar_t__ sch_mode; scalar_t__ enable_q_promotion; int comp_fifo_depth; int unack_fifo_depth; int coal_timeout; int app_timeout; } ;
struct al_udma {TYPE_3__* udma_regs; int name; } ;
struct TYPE_4__ {int cfg_application_ack; int cfg_coal; int cfg_1c; } ;
struct TYPE_5__ {TYPE_1__ m2s_comp; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct al_udma *VAR_12,
    struct al_udma_m2s_comp_timeouts *VAR_13)
{
 uint32_t VAR_14 = FUNC_1(&VAR_12->udma_regs->m2s.m2s_comp.cfg_1c);

 if (VAR_13->sch_mode == VAR_2)
  VAR_14 |= VAR_6;
 else if (VAR_13->sch_mode == VAR_3)
  VAR_14 &= ~VAR_6;
 else {
  FUNC_0("udma [%s]: requested completion descriptor preferch "
    "arbiter mode (%d) is invalid\n",
    VAR_12->name, VAR_13->sch_mode);
  return -VAR_1;
 }
 if (VAR_13->enable_q_promotion == VAR_0)
  VAR_14 |= VAR_7;
 else
  VAR_14 &= ~VAR_7;
 VAR_14 &= ~VAR_4;
 VAR_14 |=
     VAR_13->comp_fifo_depth << VAR_5;

 VAR_14 &= ~VAR_8;
 VAR_14 |= VAR_13->unack_fifo_depth
    << VAR_9;
 FUNC_2(&VAR_12->udma_regs->m2s.m2s_comp.cfg_1c, VAR_14);

 FUNC_2(&VAR_12->udma_regs->m2s.m2s_comp.cfg_coal
       , VAR_13->coal_timeout);

 VAR_14 = FUNC_1(&VAR_12->udma_regs->m2s.m2s_comp.cfg_application_ack);
 VAR_14 &= ~VAR_10;
 VAR_14 |= VAR_13->app_timeout << VAR_11;
 FUNC_2(&VAR_12->udma_regs->m2s.m2s_comp.cfg_application_ack, VAR_14);
 return 0;
}
