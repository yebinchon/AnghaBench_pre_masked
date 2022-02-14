
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {int flags; int cdesc_size; TYPE_7__* udma; TYPE_3__* q_regs; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_6__* udma_regs; } ;
struct TYPE_11__ {int cfg_1c; } ;
struct TYPE_12__ {TYPE_4__ s2m_comp; } ;
struct TYPE_13__ {TYPE_5__ s2m; } ;
struct TYPE_9__ {int comp_cfg; } ;
struct TYPE_8__ {int comp_cfg; } ;
struct TYPE_10__ {TYPE_2__ s2m_q; TYPE_1__ m2s_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(struct al_udma_q *VAR_7)
{
 uint32_t *VAR_8;
 uint32_t VAR_9;

 if (VAR_7->udma->type == VAR_6)
  VAR_8 = &VAR_7->q_regs->m2s_q.comp_cfg;
 else
  VAR_8 = &VAR_7->q_regs->s2m_q.comp_cfg;

 VAR_9 = FUNC_0(VAR_8);

 if (VAR_7->flags & VAR_1)
  VAR_9 &= ~VAR_3;
 else
  VAR_9 |= VAR_3;

 if (VAR_7->flags & VAR_0)
  VAR_9 &= ~VAR_2;
 else
  VAR_9 |= VAR_2;

 FUNC_1(VAR_8, VAR_9);


 if (VAR_7->udma->type == VAR_4) {
  VAR_9 = FUNC_0(
    &VAR_7->udma->udma_regs->s2m.s2m_comp.cfg_1c);
  VAR_9 &= ~VAR_5;

  VAR_9 |= (VAR_7->cdesc_size >> 2)
    & VAR_5;
  FUNC_1(&VAR_7->udma->udma_regs->s2m.s2m_comp.cfg_1c
       , VAR_9);
 }
 return 0;
}
