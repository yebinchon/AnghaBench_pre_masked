
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rssadapt_node {int ra_pktrate; int ra_nfail; int ra_nok; int ra_raise_interval; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (long) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_rssadapt_node *VAR_0)
{
 long VAR_1;

 VAR_0->ra_pktrate = (VAR_0->ra_pktrate + 10*(VAR_0->ra_nfail + VAR_0->ra_nok))/2;
 VAR_0->ra_nfail = VAR_0->ra_nok = 0;





 VAR_1 = FUNC_0(10*1000, 10*1000 / FUNC_0(1, 10 * VAR_0->ra_pktrate));
 VAR_0->ra_raise_interval = FUNC_1(VAR_1);
}
