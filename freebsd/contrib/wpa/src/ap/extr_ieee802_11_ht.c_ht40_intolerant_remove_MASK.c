
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {scalar_t__ ht40_intolerant_set; } ;
struct hostapd_iface {scalar_t__ num_sta_ht40_intolerant; int drv_flags; TYPE_1__* conf; } ;
struct TYPE_2__ {int ht_capab; unsigned int obss_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct hostapd_iface*,int *) ;
 int FUNC_1 (unsigned int,int ,int ,struct hostapd_iface*,int *) ;
 int FUNC_2 (int ,char*,unsigned int) ;

void FUNC_3(struct hostapd_iface *VAR_5, struct sta_info *VAR_6)
{
 if (!VAR_6->ht40_intolerant_set)
  return;

 VAR_6->ht40_intolerant_set = 0;
 VAR_5->num_sta_ht40_intolerant--;

 if (VAR_5->num_sta_ht40_intolerant == 0 &&
     (VAR_5->conf->ht_capab & VAR_0) &&
     (VAR_5->drv_flags & VAR_3)) {
  unsigned int VAR_7 = VAR_2 *
   VAR_5->conf->obss_interval;
  FUNC_2(VAR_1,
      "HT: Start 20->40 MHz transition timer (%d seconds)",
      VAR_7);
  FUNC_0(VAR_4, VAR_5, ((void*)0));
  FUNC_1(VAR_7, 0, VAR_4,
           VAR_5, ((void*)0));
 }
}
