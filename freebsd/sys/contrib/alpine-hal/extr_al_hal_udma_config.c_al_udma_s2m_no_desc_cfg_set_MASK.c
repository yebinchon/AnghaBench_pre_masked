
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct al_udma {TYPE_3__* udma_regs; int name; } ;
typedef scalar_t__ al_bool ;
struct TYPE_4__ {int data_cfg_2; } ;
struct TYPE_5__ {TYPE_1__ s2m_wr; } ;
struct TYPE_6__ {TYPE_2__ s2m; } ;


 int FUNC_0 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;

int FUNC_4(struct al_udma *VAR_6, al_bool VAR_7, al_bool VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10;

 VAR_10 = FUNC_2(&VAR_6->udma_regs->s2m.s2m_wr.data_cfg_2);

 if ((VAR_7 == VAR_0) && (VAR_9 == 0)) {
  FUNC_1("udam [%s]: setting timeout to 0 will cause the udma to wait forever instead of dropping the packet", VAR_6->name);
  return -VAR_1;
 }

 if (VAR_7 == VAR_0)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~VAR_4;

 if (VAR_8 == VAR_0)
  VAR_10 |= VAR_5;
 else
  VAR_10 &= ~VAR_5;

 FUNC_0(VAR_10, VAR_2, VAR_3, VAR_9);

 FUNC_3(&VAR_6->udma_regs->s2m.s2m_wr.data_cfg_2, VAR_10);

 return 0;
}
