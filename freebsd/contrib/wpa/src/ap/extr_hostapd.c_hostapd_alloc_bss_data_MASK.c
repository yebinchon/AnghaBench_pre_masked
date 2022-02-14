
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int dummy; } ;
struct hostapd_data {int ctrl_sock; int dhcp_sock; int sae_commit_queue; int l2_oui_queue; int l2_queue; int nr_db; int ctrl_dst; int driver; struct hostapd_iface* iface; struct hostapd_bss_config* conf; struct hostapd_config* iconf; int new_assoc_sta_cb; } ;
struct hostapd_config {int driver; } ;
struct hostapd_bss_config {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct hostapd_data* FUNC_1 (int) ;

struct hostapd_data *
FUNC_2(struct hostapd_iface *VAR_1,
         struct hostapd_config *VAR_2,
         struct hostapd_bss_config *VAR_3)
{
 struct hostapd_data *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->new_assoc_sta_cb = VAR_0;
 VAR_4->iconf = VAR_2;
 VAR_4->conf = VAR_3;
 VAR_4->iface = VAR_1;
 if (VAR_2)
  VAR_4->driver = VAR_2->driver;
 VAR_4->ctrl_sock = -1;
 FUNC_0(&VAR_4->ctrl_dst);
 FUNC_0(&VAR_4->nr_db);
 VAR_4->dhcp_sock = -1;
 return VAR_4;
}
