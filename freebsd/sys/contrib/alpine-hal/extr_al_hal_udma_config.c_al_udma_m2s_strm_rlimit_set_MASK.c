
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udma_rlimit_common {int dummy; } ;
struct al_udma_m2s_rlimit_cfg {int dummy; } ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {struct udma_rlimit_common rlimit; } ;
struct TYPE_5__ {TYPE_1__ m2s_stream_rate_limiter; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 int FUNC_0 (struct udma_rlimit_common*,struct al_udma_m2s_rlimit_cfg*) ;

int FUNC_1(struct al_udma *VAR_0,
    struct al_udma_m2s_rlimit_cfg *VAR_1)
{
 struct udma_rlimit_common *VAR_2 =
     &VAR_0->udma_regs->m2s.m2s_stream_rate_limiter.rlimit;

 return FUNC_0(VAR_2, VAR_1);
}
