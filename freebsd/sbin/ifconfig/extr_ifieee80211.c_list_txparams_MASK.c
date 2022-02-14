
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_txparam {int mgmtrate; int mcastrate; int ucastrate; int maxretry; } ;
struct TYPE_2__ {struct ieee80211_txparam* params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int,int,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static void
FUNC_4(int VAR_10)
{
 const struct ieee80211_txparam *VAR_11;
 int VAR_12;

 FUNC_3(VAR_10);
 for (VAR_12 = VAR_1; VAR_12 < VAR_4; VAR_12++) {
  VAR_11 = &VAR_9.params[VAR_12];
  if (VAR_11->mgmtrate == 0 && VAR_11->mcastrate == 0)
   continue;
  if (VAR_12 == VAR_2 ||
      VAR_12 == VAR_3 ||
      VAR_12 == VAR_5 ||
      VAR_12 == VAR_6) {
   if (VAR_11->ucastrate == VAR_0)
    FUNC_0("%-7.7s ucast NONE    mgmt %2u %s "
        "mcast %2u %s maxretry %u",
        VAR_8[VAR_12],
        FUNC_2(VAR_11->mgmtrate),
        FUNC_1(VAR_11->mgmtrate),
        FUNC_2(VAR_11->mcastrate),
        FUNC_1(VAR_11->mcastrate),
        VAR_11->maxretry);
   else
    FUNC_0("%-7.7s ucast %2u MCS  mgmt %2u %s "
        "mcast %2u %s maxretry %u",
        VAR_8[VAR_12],
        VAR_11->ucastrate &~ VAR_7,
        FUNC_2(VAR_11->mgmtrate),
        FUNC_1(VAR_11->mgmtrate),
        FUNC_2(VAR_11->mcastrate),
        FUNC_1(VAR_11->mcastrate),
        VAR_11->maxretry);
  } else {
   if (VAR_11->ucastrate == VAR_0)
    FUNC_0("%-7.7s ucast NONE    mgmt %2u Mb/s "
        "mcast %2u Mb/s maxretry %u",
        VAR_8[VAR_12],
        VAR_11->mgmtrate/2,
        VAR_11->mcastrate/2, VAR_11->maxretry);
   else
    FUNC_0("%-7.7s ucast %2u Mb/s mgmt %2u Mb/s "
        "mcast %2u Mb/s maxretry %u",
        VAR_8[VAR_12],
        VAR_11->ucastrate/2, VAR_11->mgmtrate/2,
        VAR_11->mcastrate/2, VAR_11->maxretry);
  }
 }
}
