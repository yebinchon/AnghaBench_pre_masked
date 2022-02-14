
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_comp_timeouts {void* app_timeout; void* coal_timeout; void* unack_fifo_depth; void* comp_fifo_depth; int enable_q_promotion; int sch_mode; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int cfg_application_ack; int cfg_coal; int cfg_1c; } ;
struct TYPE_5__ {TYPE_1__ m2s_comp; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (int *) ;

int FUNC_2(struct al_udma *VAR_12,
     struct al_udma_m2s_comp_timeouts *VAR_13)
{
 uint32_t VAR_14 = FUNC_1(&VAR_12->udma_regs->m2s.m2s_comp.cfg_1c);

 if (VAR_14 & VAR_6)
  VAR_13->sch_mode = VAR_2;
 else
  VAR_13->sch_mode = VAR_3;

 if (VAR_14 & VAR_7)
  VAR_13->enable_q_promotion = VAR_1;
 else
  VAR_13->enable_q_promotion = VAR_0;

 VAR_13->comp_fifo_depth =
     FUNC_0(VAR_14,
        VAR_4,
        VAR_5);
 VAR_13->unack_fifo_depth =
     FUNC_0(VAR_14,
        VAR_8,
        VAR_9);

 VAR_13->coal_timeout = FUNC_1(
    &VAR_12->udma_regs->m2s.m2s_comp.cfg_coal);

 VAR_14 = FUNC_1(
   &VAR_12->udma_regs->m2s.m2s_comp.cfg_application_ack);

 VAR_13->app_timeout =
     FUNC_0(VAR_14,
        VAR_10,
        VAR_11);

 return 0;
}
