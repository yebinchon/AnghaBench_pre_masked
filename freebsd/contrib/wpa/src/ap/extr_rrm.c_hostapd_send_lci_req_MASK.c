
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sta_info {int flags; int* rrm_enabled_capa; } ;
struct hostapd_data {int lci_req_active; int lci_req_token; TYPE_1__* iface; } ;
struct TYPE_2__ {int freq; } ;


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
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (int ,struct hostapd_data*,int *) ;
 int FUNC_2 (int ,int ,int ,struct hostapd_data*,int *) ;
 int FUNC_3 (struct hostapd_data*,int ,int ,int const*,int ,int ) ;
 int VAR_11 ;
 int FUNC_4 (int ,char*) ;
 struct wpabuf* FUNC_5 (int) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int) ;
 int FUNC_10 (struct wpabuf*,int) ;

int FUNC_11(struct hostapd_data *VAR_12, const u8 *VAR_13)
{
 struct wpabuf *VAR_14;
 struct sta_info *VAR_15 = FUNC_0(VAR_12, VAR_13);
 int VAR_16;

 if (!VAR_15 || !(VAR_15->flags & VAR_10)) {
  FUNC_4(VAR_5,
      "Request LCI: Destination address is not connected");
  return -1;
 }

 if (!(VAR_15->rrm_enabled_capa[1] & VAR_8)) {
  FUNC_4(VAR_5,
      "Request LCI: Station does not support LCI in RRM");
  return -1;
 }

 if (VAR_12->lci_req_active) {
  FUNC_4(VAR_4,
      "Request LCI: LCI request is already in process, overriding");
  VAR_12->lci_req_active = 0;
  FUNC_1(VAR_11, VAR_12,
         ((void*)0));
 }


 VAR_14 = FUNC_5(5 + 10);
 if (!VAR_14)
  return -1;

 VAR_12->lci_req_token++;

 if (!VAR_12->lci_req_token)
  VAR_12->lci_req_token++;

 FUNC_10(VAR_14, VAR_6);
 FUNC_10(VAR_14, VAR_9);
 FUNC_10(VAR_14, VAR_12->lci_req_token);
 FUNC_9(VAR_14, 0);

 FUNC_10(VAR_14, VAR_7);
 FUNC_10(VAR_14, 3 + 1 + 4);

 FUNC_10(VAR_14, 1);




 FUNC_10(VAR_14, 0);
 FUNC_10(VAR_14, VAR_3);

 FUNC_10(VAR_14, VAR_2);

 FUNC_10(VAR_14, VAR_1);
 FUNC_10(VAR_14, 2);
 FUNC_9(VAR_14, 0xffff);

 VAR_16 = FUNC_3(VAR_12, VAR_12->iface->freq, 0, VAR_13,
          FUNC_7(VAR_14), FUNC_8(VAR_14));
 FUNC_6(VAR_14);
 if (VAR_16)
  return VAR_16;

 VAR_12->lci_req_active = 1;

 FUNC_2(VAR_0, 0,
          VAR_11, VAR_12, ((void*)0));

 return 0;
}
