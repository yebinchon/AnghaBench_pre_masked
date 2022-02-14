
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct r12a_tx_desc {int txdw5; } ;
struct ieee80211_node {scalar_t__ ni_chan; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtwn_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct rtwn_softc *VAR_4, void *VAR_5, struct ieee80211_node *VAR_6)
{
 struct r12a_tx_desc *VAR_7 = (struct r12a_tx_desc *)VAR_5;


 if (VAR_6->ni_chan != VAR_0 &&
     FUNC_0(VAR_6->ni_chan)) {
  int VAR_8;

  VAR_8 = FUNC_3(VAR_4, VAR_6->ni_chan);
  VAR_7->txdw5 |= FUNC_2(FUNC_1(VAR_1,
      VAR_2));
  VAR_7->txdw5 |= FUNC_2(FUNC_1(VAR_3,
      VAR_8));
 }
}
