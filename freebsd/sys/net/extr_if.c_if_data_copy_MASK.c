
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int (* if_get_counter ) (struct ifnet*,int ) ;int if_lastchange; int if_epoch; int if_hwassist; int if_baudrate; int if_metric; int if_mtu; int if_link_state; int if_hdrlen; int if_addrlen; int if_type; } ;
struct if_data {int ifi_datalen; int ifi_noproto; int ifi_oqdrops; int ifi_iqdrops; int ifi_omcasts; int ifi_imcasts; int ifi_obytes; int ifi_ibytes; int ifi_collisions; int ifi_oerrors; int ifi_opackets; int ifi_ierrors; int ifi_ipackets; int ifi_lastchange; int ifi_epoch; int ifi_hwassist; int ifi_baudrate; int ifi_metric; int ifi_mtu; scalar_t__ ifi_vhid; int ifi_link_state; int ifi_hdrlen; int ifi_addrlen; scalar_t__ ifi_physical; int ifi_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ifnet*,int ) ;
 int FUNC_1 (struct ifnet*,int ) ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct ifnet*,int ) ;
 int FUNC_6 (struct ifnet*,int ) ;
 int FUNC_7 (struct ifnet*,int ) ;
 int FUNC_8 (struct ifnet*,int ) ;
 int FUNC_9 (struct ifnet*,int ) ;
 int FUNC_10 (struct ifnet*,int ) ;
 int FUNC_11 (struct ifnet*,int ) ;

void
FUNC_12(struct ifnet *VAR_12, struct if_data *VAR_13)
{

 VAR_13->ifi_type = VAR_12->if_type;
 VAR_13->ifi_physical = 0;
 VAR_13->ifi_addrlen = VAR_12->if_addrlen;
 VAR_13->ifi_hdrlen = VAR_12->if_hdrlen;
 VAR_13->ifi_link_state = VAR_12->if_link_state;
 VAR_13->ifi_vhid = 0;
 VAR_13->ifi_datalen = sizeof(struct if_data);
 VAR_13->ifi_mtu = VAR_12->if_mtu;
 VAR_13->ifi_metric = VAR_12->if_metric;
 VAR_13->ifi_baudrate = VAR_12->if_baudrate;
 VAR_13->ifi_hwassist = VAR_12->if_hwassist;
 VAR_13->ifi_epoch = VAR_12->if_epoch;
 VAR_13->ifi_lastchange = VAR_12->if_lastchange;

 VAR_13->ifi_ipackets = VAR_12->if_get_counter(VAR_12, VAR_4);
 VAR_13->ifi_ierrors = VAR_12->if_get_counter(VAR_12, VAR_2);
 VAR_13->ifi_opackets = VAR_12->if_get_counter(VAR_12, VAR_10);
 VAR_13->ifi_oerrors = VAR_12->if_get_counter(VAR_12, VAR_8);
 VAR_13->ifi_collisions = VAR_12->if_get_counter(VAR_12, VAR_0);
 VAR_13->ifi_ibytes = VAR_12->if_get_counter(VAR_12, VAR_1);
 VAR_13->ifi_obytes = VAR_12->if_get_counter(VAR_12, VAR_7);
 VAR_13->ifi_imcasts = VAR_12->if_get_counter(VAR_12, VAR_3);
 VAR_13->ifi_omcasts = VAR_12->if_get_counter(VAR_12, VAR_9);
 VAR_13->ifi_iqdrops = VAR_12->if_get_counter(VAR_12, VAR_5);
 VAR_13->ifi_oqdrops = VAR_12->if_get_counter(VAR_12, VAR_11);
 VAR_13->ifi_noproto = VAR_12->if_get_counter(VAR_12, VAR_6);
}
