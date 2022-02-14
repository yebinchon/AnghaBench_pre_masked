
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct tid_ampdu_tx {int bar_pending; int failed_bar_ssn; } ;
struct TYPE_2__ {int * tid_tx; } ;
struct sta_info {TYPE_1__ ampdu_mlme; } ;


 struct tid_ampdu_tx* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sta_info *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct tid_ampdu_tx *VAR_3;

 VAR_3 = FUNC_0(VAR_0->ampdu_mlme.tid_tx[VAR_1]);
 if (!VAR_3)
  return;

 VAR_3->failed_bar_ssn = VAR_2;
 VAR_3->bar_pending = 1;
}
