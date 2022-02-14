
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_m2s_rlimit_mode {scalar_t__ pkt_mode_en; int short_cycle_sz; int token_init_val; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int ctrl_token; int gen_cfg; } ;
struct TYPE_5__ {TYPE_1__ m2s_rate_limiter; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_udma *VAR_4,
     struct al_udma_m2s_rlimit_mode *VAR_5)
{
 uint32_t VAR_6 = FUNC_0(
    &VAR_4->udma_regs->m2s.m2s_rate_limiter.gen_cfg);

 if (VAR_5->pkt_mode_en == VAR_0)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_5->short_cycle_sz &
     VAR_3;
 FUNC_1(&VAR_4->udma_regs->m2s.m2s_rate_limiter.gen_cfg, VAR_6);

 VAR_6 = FUNC_0(&VAR_4->udma_regs->m2s.m2s_rate_limiter.ctrl_token);
 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_5->token_init_val &
   VAR_1;
 FUNC_1(&VAR_4->udma_regs->m2s.m2s_rate_limiter.ctrl_token, VAR_6);

 return 0;
}
