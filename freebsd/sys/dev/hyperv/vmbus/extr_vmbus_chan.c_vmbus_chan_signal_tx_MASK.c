
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hv_paddr; } ;
struct vmbus_channel {int ch_txflags; TYPE_1__ ch_monprm_dma; int ch_montrig_mask; int ch_montrig; int ch_evtflag_mask; int ch_evtflag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(const struct vmbus_channel *VAR_1)
{
 FUNC_1(VAR_1->ch_evtflag, VAR_1->ch_evtflag_mask);
 if (VAR_1->ch_txflags & VAR_0)
  FUNC_0(VAR_1->ch_montrig, VAR_1->ch_montrig_mask);
 else
  FUNC_2(VAR_1->ch_monprm_dma.hv_paddr);
}
