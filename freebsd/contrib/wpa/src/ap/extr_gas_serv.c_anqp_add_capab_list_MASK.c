
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ venue_url; int fils_realms; scalar_t__ domain_name; scalar_t__ anqp_3gpp_cell_net; scalar_t__ nai_realm_data; scalar_t__ ipaddr_type_configured; scalar_t__ roaming_consortium; scalar_t__ network_auth_type; scalar_t__ venue_name; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct hostapd_data*,struct wpabuf*) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct wpabuf*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (struct wpabuf*,int) ;
 int FUNC_4 (struct wpabuf*,int *) ;
 scalar_t__ FUNC_5 (struct hostapd_data*,int) ;
 int FUNC_6 (struct wpabuf*,int) ;

__attribute__((used)) static void FUNC_7(struct hostapd_data *VAR_21,
    struct wpabuf *VAR_22)
{
 u8 *VAR_23;
 u16 VAR_24;

 if (FUNC_1(VAR_21, VAR_22, VAR_6))
  return;

 VAR_23 = FUNC_3(VAR_22, VAR_6);
 FUNC_6(VAR_22, VAR_6);
 if (VAR_21->conf->venue_name || FUNC_5(VAR_21, VAR_19))
  FUNC_6(VAR_22, VAR_19);
 if (FUNC_5(VAR_21, VAR_9))
  FUNC_6(VAR_22, VAR_9);
 if (VAR_21->conf->network_auth_type ||
     FUNC_5(VAR_21, VAR_16))
  FUNC_6(VAR_22, VAR_16);
 if (VAR_21->conf->roaming_consortium ||
     FUNC_5(VAR_21, VAR_17))
  FUNC_6(VAR_22, VAR_17);
 if (VAR_21->conf->ipaddr_type_configured ||
     FUNC_5(VAR_21, VAR_12))
  FUNC_6(VAR_22, VAR_12);
 if (VAR_21->conf->nai_realm_data ||
     FUNC_5(VAR_21, VAR_14))
  FUNC_6(VAR_22, VAR_14);
 if (VAR_21->conf->anqp_3gpp_cell_net ||
     FUNC_5(VAR_21, VAR_0))
  FUNC_6(VAR_22, VAR_0);
 if (FUNC_5(VAR_21, VAR_3))
  FUNC_6(VAR_22, VAR_3);
 if (FUNC_5(VAR_21, VAR_2))
  FUNC_6(VAR_22, VAR_2);
 if (FUNC_5(VAR_21, VAR_4))
  FUNC_6(VAR_22, VAR_4);
 if (VAR_21->conf->domain_name || FUNC_5(VAR_21, VAR_7))
  FUNC_6(VAR_22, VAR_7);
 if (FUNC_5(VAR_21, VAR_8))
  FUNC_6(VAR_22, VAR_8);
 if (FUNC_5(VAR_21, VAR_18))
  FUNC_6(VAR_22, VAR_18);
 if (FUNC_5(VAR_21, VAR_10))
  FUNC_6(VAR_22, VAR_10);
 if (FUNC_5(VAR_21, VAR_15))
  FUNC_6(VAR_22, VAR_15);





 if (FUNC_5(VAR_21, VAR_5))
  FUNC_6(VAR_22, VAR_5);
 if (VAR_21->conf->venue_url || FUNC_5(VAR_21, VAR_20))
  FUNC_6(VAR_22, VAR_20);
 if (FUNC_5(VAR_21, VAR_1))
  FUNC_6(VAR_22, VAR_1);
 if (FUNC_5(VAR_21, VAR_13))
  FUNC_6(VAR_22, VAR_13);
 for (VAR_24 = 280; VAR_24 < 300; VAR_24++) {
  if (FUNC_5(VAR_21, VAR_24))
   FUNC_6(VAR_22, VAR_24);
 }



 FUNC_4(VAR_22, VAR_23);
}
