
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct vlan_description {int dummy; } ;
struct hostapd_sta_wpa_psk_short {int dummy; } ;
struct hostapd_data {struct hostapd_acl_query_data* acl_queries; TYPE_3__* conf; } ;
struct hostapd_acl_query_data {size_t auth_msg_len; struct hostapd_acl_query_data* next; int * auth_msg; int addr; int timestamp; } ;
struct TYPE_4__ {scalar_t__ dynamic_vlan; } ;
struct TYPE_6__ {scalar_t__ macaddr_acl; TYPE_2__* radius; TYPE_1__ ssid; } ;
struct TYPE_5__ {int auth_server; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct hostapd_data*,int const*,scalar_t__*,scalar_t__*,struct vlan_description*,struct hostapd_sta_wpa_psk_short**,char**,char**) ;
 int FUNC_1 (struct hostapd_acl_query_data*) ;
 int FUNC_2 (struct hostapd_data*,int const*,struct vlan_description*) ;
 scalar_t__ FUNC_3 (struct hostapd_data*,int const*,struct hostapd_acl_query_data*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int const*,int ) ;
 int FUNC_7 (int ,int const*,int ) ;
 int * FUNC_8 (int const*,size_t) ;
 int FUNC_9 (struct vlan_description*,int ,int) ;
 struct hostapd_acl_query_data* FUNC_10 (int) ;
 int FUNC_11 (int ,char*) ;

int FUNC_12(struct hostapd_data *VAR_9, const u8 *VAR_10,
       const u8 *VAR_11, size_t VAR_12, u32 *VAR_13,
       u32 *VAR_14,
       struct vlan_description *VAR_15,
       struct hostapd_sta_wpa_psk_short **VAR_16,
       char **VAR_17, char **VAR_18,
       int VAR_19)
{
 int VAR_20;

 if (VAR_13)
  *VAR_13 = 0;
 if (VAR_14)
  *VAR_14 = 0;
 if (VAR_15)
  FUNC_9(VAR_15, 0, sizeof(*VAR_15));
 if (VAR_16)
  *VAR_16 = ((void*)0);
 if (VAR_17)
  *VAR_17 = ((void*)0);
 if (VAR_18)
  *VAR_18 = ((void*)0);

 VAR_20 = FUNC_2(VAR_9, VAR_10, VAR_15);
 if (VAR_20 != VAR_4)
  return VAR_20;

 if (VAR_9->conf->macaddr_acl == VAR_8) {



  struct hostapd_acl_query_data *VAR_21;

  if (VAR_19) {


   return VAR_2;
  };

  if (VAR_9->conf->ssid.dynamic_vlan == VAR_0)
   VAR_15 = ((void*)0);


  VAR_20 = FUNC_0(VAR_9, VAR_10, VAR_13,
         VAR_14, VAR_15, VAR_16,
         VAR_17, VAR_18);
  if (VAR_20 == VAR_2 ||
      VAR_20 == VAR_3)
   return VAR_20;
  if (VAR_20 == VAR_5)
   return VAR_5;

  VAR_21 = VAR_9->acl_queries;
  while (VAR_21) {
   if (FUNC_6(VAR_21->addr, VAR_10, VAR_1) == 0) {


    if (VAR_17) {
     FUNC_4(*VAR_17);
     *VAR_17 = ((void*)0);
    }
    if (VAR_18) {
     FUNC_4(*VAR_18);
     *VAR_18 = ((void*)0);
    }
    return VAR_4;
   }
   VAR_21 = VAR_21->next;
  }

  if (!VAR_9->conf->radius->auth_server)
   return VAR_5;


  VAR_21 = FUNC_10(sizeof(*VAR_21));
  if (VAR_21 == ((void*)0)) {
   FUNC_11(VAR_7, "malloc for query data failed");
   return VAR_5;
  }
  FUNC_5(&VAR_21->timestamp);
  FUNC_7(VAR_21->addr, VAR_10, VAR_1);
  if (FUNC_3(VAR_9, VAR_10, VAR_21)) {
   FUNC_11(VAR_6, "Failed to send Access-Request "
       "for ACL query.");
   FUNC_1(VAR_21);
   return VAR_5;
  }

  VAR_21->auth_msg = FUNC_8(VAR_11, VAR_12);
  if (VAR_21->auth_msg == ((void*)0)) {
   FUNC_11(VAR_7, "Failed to allocate memory for "
       "auth frame.");
   FUNC_1(VAR_21);
   return VAR_5;
  }
  VAR_21->auth_msg_len = VAR_12;
  VAR_21->next = VAR_9->acl_queries;
  VAR_9->acl_queries = VAR_21;



  return VAR_4;

 }

 return VAR_5;
}
