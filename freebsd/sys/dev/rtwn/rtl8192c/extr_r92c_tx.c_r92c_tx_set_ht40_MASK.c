
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r92c_tx_desc {int txdw4; } ;
struct ieee80211_node {scalar_t__ ni_chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtwn_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct rtwn_softc *VAR_3, void *VAR_4, struct ieee80211_node *VAR_5)
{
 struct r92c_tx_desc *VAR_6 = (struct r92c_tx_desc *)VAR_4;

 if (VAR_5->ni_chan != VAR_0 &&
     FUNC_0(VAR_5->ni_chan)) {
  int VAR_7;

  VAR_7 = FUNC_3(VAR_3, VAR_5->ni_chan);
  VAR_6->txdw4 |= FUNC_2(VAR_1);
  VAR_6->txdw4 |= FUNC_2(FUNC_1(VAR_2, VAR_7));
 }
}
