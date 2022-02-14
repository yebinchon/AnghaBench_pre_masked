
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_sim_data {int* ver_list; int ver_list_len; int selected_version; int num_id_req; } ;
struct eap_sim_attrs {int version_list_len; int id_req; int * version_list; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;


 struct wpabuf* FUNC_0 (struct eap_sim_data*,int,int ) ;
 struct wpabuf* FUNC_1 (struct eap_sm*,struct eap_sim_data*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_4,
          struct eap_sim_data *VAR_5, u8 VAR_6,
          struct eap_sim_attrs *VAR_7)
{
 int VAR_8 = -1, VAR_9;
 size_t VAR_10;
 u8 *VAR_11;

 FUNC_5(VAR_2, "EAP-SIM: subtype Start");
 if (VAR_7->version_list == ((void*)0)) {
  FUNC_5(VAR_3, "EAP-SIM: No AT_VERSION_LIST in "
      "SIM/Start");
  return FUNC_0(VAR_5, VAR_6,
         VAR_1);
 }

 FUNC_3(VAR_5->ver_list);
 VAR_5->ver_list = FUNC_4(VAR_7->version_list, VAR_7->version_list_len);
 if (VAR_5->ver_list == ((void*)0)) {
  FUNC_5(VAR_2, "EAP-SIM: Failed to allocate "
      "memory for version list");
  return FUNC_0(VAR_5, VAR_6,
         VAR_0);
 }
 VAR_5->ver_list_len = VAR_7->version_list_len;
 VAR_11 = VAR_5->ver_list;
 for (VAR_10 = 0; VAR_10 < VAR_5->ver_list_len / 2; VAR_10++) {
  int VAR_12 = VAR_11[0] * 256 + VAR_11[1];
  VAR_11 += 2;
  if (FUNC_2(VAR_12)) {
   VAR_8 = VAR_12;
   break;
  }
 }
 if (VAR_8 < 0) {
  FUNC_5(VAR_3, "EAP-SIM: Could not find a supported "
      "version");
  return FUNC_0(VAR_5, VAR_6,
         VAR_1);
 }
 FUNC_5(VAR_2, "EAP-SIM: Selected Version %d",
     VAR_8);
 VAR_5->selected_version = VAR_8;

 VAR_9 = 0;
 switch (VAR_7->id_req) {
 case 129:
  break;
 case 131:
  if (VAR_5->num_id_req > 0)
   VAR_9++;
  VAR_5->num_id_req++;
  break;
 case 130:
  if (VAR_5->num_id_req > 1)
   VAR_9++;
  VAR_5->num_id_req++;
  break;
 case 128:
  if (VAR_5->num_id_req > 2)
   VAR_9++;
  VAR_5->num_id_req++;
  break;
 }
 if (VAR_9) {
  FUNC_5(VAR_3, "EAP-SIM: Too many ID requests "
      "used within one authentication");
  return FUNC_0(VAR_5, VAR_6,
         VAR_0);
 }

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7->id_req);
}
