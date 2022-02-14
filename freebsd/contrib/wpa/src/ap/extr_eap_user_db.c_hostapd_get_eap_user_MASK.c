
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wsc_registrar ;
typedef int wsc_enrollee ;
typedef int u8 ;
typedef struct hostapd_eap_user {int phase2; size_t identity_len; struct hostapd_eap_user const* next; int const* identity; scalar_t__ wildcard_prefix; int password_len; int * password; TYPE_1__* methods; } const hostapd_eap_user ;
struct hostapd_data {struct hostapd_bss_config* conf; } ;
struct hostapd_bss_config {scalar_t__ eap_user_sqlite; scalar_t__ ap_pin; scalar_t__ wps_state; struct hostapd_eap_user const* eap_user; } ;
struct TYPE_2__ {int vendor; void* method; } ;


 int const* VAR_0 ;
 size_t VAR_1 ;
 int const* VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (char*,int *) ;
 struct hostapd_eap_user const* FUNC_1 (struct hostapd_data*,int const*,size_t,int) ;
 scalar_t__ FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (struct hostapd_eap_user const*,int ,int) ;
 int FUNC_4 (scalar_t__) ;

const struct hostapd_eap_user *
FUNC_5(struct hostapd_data *VAR_4, const u8 *VAR_5,
       size_t VAR_6, int VAR_7)
{
 const struct hostapd_bss_config *VAR_8 = VAR_4->conf;
 struct hostapd_eap_user *VAR_9 = VAR_8->eap_user;
 while (VAR_9) {
  if (!VAR_7 && VAR_9->identity == ((void*)0)) {

   break;
  }

  if (VAR_9->phase2 == !!VAR_7 && VAR_9->wildcard_prefix &&
      VAR_6 >= VAR_9->identity_len &&
      FUNC_2(VAR_9->identity, VAR_5, VAR_9->identity_len) ==
      0) {

   break;
  }

  if (VAR_9->phase2 == !!VAR_7 &&
      VAR_9->identity_len == VAR_6 &&
      FUNC_2(VAR_9->identity, VAR_5, VAR_6) == 0)
   break;
  VAR_9 = VAR_9->next;
 }
 return VAR_9;
}
