
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ixl_pf_qtag {scalar_t__ num_allocated; struct ixl_pf_qmgr* qmgr; } ;
struct ixl_pf_qmgr {TYPE_1__* qinfo; } ;
struct TYPE_2__ {scalar_t__ tx_enabled; scalar_t__ rx_enabled; scalar_t__ rx_configured; scalar_t__ tx_configured; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ixl_pf_qtag*,scalar_t__) ;

void
FUNC_2(struct ixl_pf_qtag *VAR_0)
{
 FUNC_0(VAR_0 != ((void*)0));

 struct ixl_pf_qmgr *VAR_1 = VAR_0->qmgr;
 for (u16 VAR_2 = 0; VAR_2 < VAR_0->num_allocated; VAR_2++) {
  u16 VAR_3 = FUNC_1(VAR_0, VAR_2);

  VAR_1->qinfo[VAR_3].tx_configured = 0;
  VAR_1->qinfo[VAR_3].rx_configured = 0;
  VAR_1->qinfo[VAR_3].rx_enabled = 0;
  VAR_1->qinfo[VAR_3].tx_enabled = 0;
 }
}
