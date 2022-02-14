
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {TYPE_4__* q_regs; TYPE_1__* udma; } ;
struct TYPE_6__ {int mask; } ;
struct TYPE_7__ {TYPE_2__ rlimit; } ;
struct TYPE_8__ {TYPE_3__ m2s_q; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct al_udma_q *VAR_2)
{
 uint32_t *VAR_3;
 uint32_t VAR_4;

 if (VAR_2->udma->type == VAR_1) {
  VAR_3 = &VAR_2->q_regs->m2s_q.rlimit.mask;

  VAR_4 = FUNC_0(VAR_3);

  VAR_4 &= ~VAR_0;
  FUNC_1(VAR_3, VAR_4);
 }
 return 0;
}
