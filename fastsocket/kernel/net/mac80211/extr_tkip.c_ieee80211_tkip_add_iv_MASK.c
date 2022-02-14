
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int iv32; int iv16; } ;
struct TYPE_6__ {TYPE_1__ tx; int txlock; } ;
struct TYPE_7__ {TYPE_2__ tkip; } ;
struct TYPE_8__ {int keyidx; } ;
struct ieee80211_key {TYPE_3__ u; TYPE_4__ conf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *,int ) ;

u8 *FUNC_3(u8 *VAR_0, struct ieee80211_key *VAR_1)
{
 FUNC_0(&VAR_1->u.tkip.txlock);

 VAR_0 = FUNC_2(VAR_0, VAR_1->u.tkip.tx.iv16);
 *VAR_0++ = (VAR_1->conf.keyidx << 6) | (1 << 5) ;
 FUNC_1(VAR_1->u.tkip.tx.iv32, VAR_0);
 return VAR_0 + 4;
}
