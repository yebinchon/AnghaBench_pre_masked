
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ixl_pf_qtag {struct ixl_pf_qmgr* qmgr; } ;
struct ixl_pf_qmgr {TYPE_1__* qinfo; } ;
struct TYPE_2__ {int tx_configured; int rx_configured; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (struct ixl_pf_qtag*,size_t) ;

bool
FUNC_2(struct ixl_pf_qtag *VAR_0, u16 VAR_1, bool VAR_2)
{
 FUNC_0(VAR_0 != ((void*)0));

 struct ixl_pf_qmgr *VAR_3 = VAR_0->qmgr;
 u16 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return (VAR_3->qinfo[VAR_4].tx_configured);
 else
  return (VAR_3->qinfo[VAR_4].rx_configured);
}
