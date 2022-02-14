
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_oid; int iv_sysctl; TYPE_1__* iv_rate; } ;
struct TYPE_2__ {int (* ir_init ) (struct ieee80211vap*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct ieee80211vap*,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211vap*,int ) ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;
 int FUNC_3 (struct ieee80211vap*) ;

void
FUNC_4(struct ieee80211vap *VAR_8)
{
 if (VAR_8->iv_rate == VAR_7[VAR_4])
  FUNC_2(VAR_8, VAR_3);
 VAR_8->iv_rate->ir_init(VAR_8);


 FUNC_0(VAR_8->iv_sysctl, FUNC_1(VAR_8->iv_oid), VAR_5,
     "rate_stats", VAR_2 | VAR_1 | VAR_0, VAR_8,
     0, VAR_6, "A", "ratectl node stats");
}
