
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_stats {int r_flags; int c_chain; int * c_nf_ext; int * c_nf_ctl; int * c_rssi_ext; int * c_rssi_ctl; } ;
struct ieee80211_node {int ni_mimo_chains; int * ni_mimo_noise_ext; int * ni_mimo_noise_ctl; int * ni_mimo_rssi_ext; int * ni_mimo_rssi_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_4, struct ieee80211_rx_stats *VAR_5)
{
 int VAR_6;


 if ((VAR_5->r_flags & (VAR_1 | VAR_2 | VAR_3)) !=
     (VAR_1 | VAR_2 | VAR_3))
  return;


 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_5->c_chain, VAR_0); VAR_6++) {
  FUNC_0(VAR_4->ni_mimo_rssi_ctl[VAR_6], VAR_5->c_rssi_ctl[VAR_6]);
  FUNC_0(VAR_4->ni_mimo_rssi_ext[VAR_6], VAR_5->c_rssi_ext[VAR_6]);
 }


 for(VAR_6 = 0; VAR_6 < FUNC_1(VAR_5->c_chain, VAR_0); VAR_6++) {
  VAR_4->ni_mimo_noise_ctl[VAR_6] = VAR_5->c_nf_ctl[VAR_6];
  VAR_4->ni_mimo_noise_ext[VAR_6] = VAR_5->c_nf_ext[VAR_6];
 }
 VAR_4->ni_mimo_chains = VAR_5->c_chain;
}
