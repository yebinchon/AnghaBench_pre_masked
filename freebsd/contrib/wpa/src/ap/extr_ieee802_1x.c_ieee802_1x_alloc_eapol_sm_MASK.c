
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int flags; int radius_cui; int identity; int p2p_ie; int wps_ie; int addr; scalar_t__ wpa_sm; } ;
struct hostapd_data {int eapol_auth; } ;
struct eapol_state_machine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct eapol_state_machine* FUNC_0 (int ,int ,int,int ,int ,struct sta_info*,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

struct eapol_state_machine *
FUNC_2(struct hostapd_data *VAR_4, struct sta_info *VAR_5)
{
 int VAR_6 = 0;
 if (VAR_5->flags & VAR_3)
  VAR_6 |= VAR_1;
 if (VAR_5->wpa_sm) {
  VAR_6 |= VAR_2;
  if (FUNC_1(VAR_5->wpa_sm))
   VAR_6 |= VAR_0;
 }
 return FUNC_0(VAR_4->eapol_auth, VAR_5->addr, VAR_6,
    VAR_5->wps_ie, VAR_5->p2p_ie, VAR_5,
    VAR_5->identity, VAR_5->radius_cui);
}
