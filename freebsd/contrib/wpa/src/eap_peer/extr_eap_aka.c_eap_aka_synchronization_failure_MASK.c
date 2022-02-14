
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_msg {int dummy; } ;
struct eap_sim_attrs {size_t kdf_count; int * kdf; } ;
struct eap_aka_data {int eap_method; int auts; scalar_t__ num_notification; scalar_t__ num_id_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eap_sim_msg*,int ,int ,int *,int ) ;
 int FUNC_1 (struct eap_sim_msg*,int ,int ,int ) ;
 struct wpabuf* FUNC_2 (struct eap_sim_msg*,int ,int *,int *,int ) ;
 struct eap_sim_msg* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_5(
 struct eap_aka_data *VAR_7, u8 VAR_8, struct eap_sim_attrs *VAR_9)
{
 struct eap_sim_msg *VAR_10;

 VAR_7->num_id_req = 0;
 VAR_7->num_notification = 0;

 FUNC_4(VAR_6, "Generating EAP-AKA Synchronization-Failure "
     "(id=%d)", VAR_8);
 VAR_10 = FUNC_3(VAR_2, VAR_8, VAR_7->eap_method,
          VAR_1);
 FUNC_4(VAR_6, "   AT_AUTS");
 FUNC_1(VAR_10, VAR_3, VAR_7->auts,
        VAR_0);
 if (VAR_7->eap_method == VAR_5) {
  size_t VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_9->kdf_count; VAR_11++) {
   FUNC_4(VAR_6, "   AT_KDF");
   FUNC_0(VAR_10, VAR_4, VAR_9->kdf[VAR_11],
     ((void*)0), 0);
  }
 }
 return FUNC_2(VAR_10, VAR_7->eap_method, ((void*)0), ((void*)0), 0);
}
