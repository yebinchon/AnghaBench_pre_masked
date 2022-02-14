
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct tid_ampdu_tx {int bar_pending; int failed_bar_ssn; } ;
struct TYPE_3__ {int * tid_tx; } ;
struct sta_info {TYPE_2__* sdata; TYPE_1__ ampdu_mlme; } ;
struct TYPE_4__ {int vif; } ;


 int FUNC_0 (int *,size_t*,size_t,int ) ;
 struct tid_ampdu_tx* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sta_info *VAR_0, u8 *VAR_1, u8 VAR_2)
{
 struct tid_ampdu_tx *VAR_3;

 VAR_3 = FUNC_1(VAR_0->ampdu_mlme.tid_tx[VAR_2]);
 if (!VAR_3 || !VAR_3->bar_pending)
  return;

 VAR_3->bar_pending = 0;
 FUNC_0(&VAR_0->sdata->vif, VAR_1, VAR_2, VAR_3->failed_bar_ssn);
}
