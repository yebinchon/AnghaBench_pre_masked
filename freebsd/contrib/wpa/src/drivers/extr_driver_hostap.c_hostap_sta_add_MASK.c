
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_supp_rates; int capability; int aid; } ;
struct TYPE_4__ {TYPE_1__ add_sta; } ;
struct prism2_hostapd_param {TYPE_2__ u; int sta_addr; int cmd; } ;
struct hostapd_sta_add_params {size_t supp_rates_len; int* supp_rates; int capability; int aid; int addr; } ;
struct hostap_driver_data {int dummy; } ;
typedef int param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hostap_driver_data*,struct prism2_hostapd_param*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct prism2_hostapd_param*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_6, struct hostapd_sta_add_params *VAR_7)
{
 struct hostap_driver_data *VAR_8 = VAR_6;
 struct prism2_hostapd_param VAR_9;
 int VAR_10 = 0;
 size_t VAR_11;






 for (VAR_11 = 0; VAR_11 < VAR_7->supp_rates_len; VAR_11++) {
  if ((VAR_7->supp_rates[VAR_11] & 0x7f) == 2)
   VAR_10 |= FUNC_0(0);
  if ((VAR_7->supp_rates[VAR_11] & 0x7f) == 4)
   VAR_10 |= FUNC_0(1);
  if ((VAR_7->supp_rates[VAR_11] & 0x7f) == 11)
   VAR_10 |= FUNC_0(2);
  if ((VAR_7->supp_rates[VAR_11] & 0x7f) == 22)
   VAR_10 |= FUNC_0(3);
 }

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cmd = VAR_1;
 FUNC_1(VAR_9.sta_addr, VAR_7->addr, VAR_0);
 VAR_9.u.add_sta.aid = VAR_7->aid;
 VAR_9.u.add_sta.capability = VAR_7->capability;
 VAR_9.u.add_sta.tx_supp_rates = VAR_10;
 return FUNC_0(VAR_8, &VAR_9, sizeof(VAR_9));
}
