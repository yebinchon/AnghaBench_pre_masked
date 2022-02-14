
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printranges {scalar_t__ txstream; int htcapflags; int ratetype; scalar_t__ minmcs; scalar_t__ maxmcs; } ;
struct ieee80211com {scalar_t__ ic_txstream; int ic_htcaps; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 int FUNC_0 (struct ieee80211com*,scalar_t__,int,int) ;
 int FUNC_1 (struct ieee80211com*,char*,scalar_t__,int,...) ;
 struct printranges* VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_1, enum ieee80211_phymode VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct printranges *VAR_6;

 for (VAR_6 = VAR_0; VAR_6->txstream != 0; VAR_6++) {
  if (VAR_1->ic_txstream < VAR_6->txstream)
   continue;
  if (VAR_6->htcapflags &&
      (VAR_1->ic_htcaps & VAR_6->htcapflags) == 0)
   continue;
  if (VAR_3 < VAR_6->ratetype)
   continue;
  VAR_4 = FUNC_0(VAR_1, VAR_6->minmcs, VAR_2, VAR_3);
  VAR_5 = FUNC_0(VAR_1, VAR_6->maxmcs, VAR_2, VAR_3);
  if (VAR_6->maxmcs) {
   FUNC_1(VAR_1, "MCS %d-%d: %d%sMbps - %d%sMbps\n",
       VAR_6->minmcs, VAR_6->maxmcs,
       VAR_4/2, ((VAR_4 & 0x1) != 0 ? ".5" : ""),
       VAR_5/2, ((VAR_5 & 0x1) != 0 ? ".5" : ""));
  } else {
   FUNC_1(VAR_1, "MCS %d: %d%sMbps\n", VAR_6->minmcs,
       VAR_4/2, ((VAR_4 & 0x1) != 0 ? ".5" : ""));
  }
 }
}
