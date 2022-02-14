
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_ampdu {int rxa_wnd; scalar_t__ rxa_qframes; scalar_t__ rxa_qbytes; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_rx_ampdu*,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_rx_ampdu *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rxa_wnd; VAR_1++) {
  FUNC_1(VAR_0, VAR_1);
  if (VAR_0->rxa_qframes == 0)
   break;
 }
 FUNC_0(VAR_0->rxa_qbytes == 0 && VAR_0->rxa_qframes == 0,
     ("lost %u data, %u frames on ampdu rx q",
     VAR_0->rxa_qbytes, VAR_0->rxa_qframes));
}
