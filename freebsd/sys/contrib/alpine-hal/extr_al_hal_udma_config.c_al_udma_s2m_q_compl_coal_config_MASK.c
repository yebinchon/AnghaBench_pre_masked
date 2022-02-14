
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {TYPE_1__* q_regs; } ;
typedef scalar_t__ al_bool ;
struct TYPE_4__ {int comp_cfg_2; int comp_cfg; } ;
struct TYPE_3__ {TYPE_2__ s2m_q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct al_udma_q *VAR_2, al_bool VAR_3, uint32_t
  VAR_4)
{
 uint32_t VAR_5 = FUNC_0(&VAR_2->q_regs->s2m_q.comp_cfg);

 if (VAR_3 == VAR_0)
  VAR_5 &= ~VAR_1;
 else
  VAR_5 |= VAR_1;

 FUNC_1(&VAR_2->q_regs->s2m_q.comp_cfg, VAR_5);

 FUNC_1(&VAR_2->q_regs->s2m_q.comp_cfg_2, VAR_4);
 return 0;
}
