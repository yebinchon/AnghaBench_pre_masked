
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int ctrl_cycle_cnt; } ;
struct TYPE_5__ {TYPE_1__ m2s_rate_limiter; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct al_udma *VAR_1)
{
 uint32_t VAR_2 = FUNC_0(
   &VAR_1->udma_regs->m2s.m2s_rate_limiter.ctrl_cycle_cnt);
 VAR_2 |= VAR_0;
 FUNC_1(&VAR_1->udma_regs->m2s.m2s_rate_limiter.ctrl_cycle_cnt,
      VAR_2);
 return 0;
}
