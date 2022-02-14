
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct sta_info {scalar_t__ plink_state; int * tx_filtered; int * ps_tx_buf; TYPE_1__ sta; int sdata; int llid; } ;
struct ieee802_11_elems {int * awake_window; int tim_len; int tim; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct sta_info*,int) ;
 int FUNC_4 (struct sta_info*,int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sta_info*,int ) ;

void FUNC_7(struct sta_info *VAR_4,
     struct ieee802_11_elems *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 bool VAR_8 = 0;


 if (VAR_4->plink_state == VAR_2)
  VAR_8 = FUNC_0(VAR_5->tim, VAR_5->tim_len,
    FUNC_1(VAR_4->llid) % VAR_0);

 if (VAR_8)
  FUNC_2(VAR_4->sdata, "%pM indicates buffered frames\n",
   VAR_4->sta.addr);


 if (FUNC_6(VAR_4, VAR_3) &&
     (!VAR_5->awake_window || !FUNC_1(*VAR_5->awake_window)))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_7 += FUNC_5(&VAR_4->ps_tx_buf[VAR_6]) +
    FUNC_5(&VAR_4->tx_filtered[VAR_6]);

 if (!VAR_8 && !VAR_7)
  return;

 if (VAR_4->plink_state == VAR_2)
  FUNC_4(VAR_4, VAR_8, !VAR_7);
 else
  FUNC_3(VAR_4, 1);
}
