
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct eap_gpsk_data {int csuite_count; int csuite_list; int rand_server; } ;
struct eap_gpsk_csuite {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct eap_gpsk_data*,int ) ;
 struct wpabuf* FUNC_1 (int ,int ,size_t,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,int ,int) ;
 int FUNC_7 (struct wpabuf*,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_9,
          struct eap_gpsk_data *VAR_10, u8 VAR_11)
{
 size_t VAR_12;
 struct wpabuf *VAR_13;

 FUNC_4(VAR_6, "EAP-GPSK: Request/GPSK-1");

 if (FUNC_2(VAR_10->rand_server, VAR_2)) {
  FUNC_4(VAR_7, "EAP-GPSK: Failed to get random data");
  FUNC_0(VAR_10, VAR_5);
  return ((void*)0);
 }
 FUNC_3(VAR_8, "EAP-GPSK: RAND_Server",
      VAR_10->rand_server, VAR_2);

 VAR_12 = 1 + 2 + VAR_9->server_id_len + VAR_2 + 2 +
  VAR_10->csuite_count * sizeof(struct eap_gpsk_csuite);
 VAR_13 = FUNC_1(VAR_4, VAR_3, VAR_12,
       VAR_0, VAR_11);
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_7, "EAP-GPSK: Failed to allocate memory "
      "for request/GPSK-1");
  FUNC_0(VAR_10, VAR_5);
  return ((void*)0);
 }

 FUNC_7(VAR_13, VAR_1);
 FUNC_5(VAR_13, VAR_9->server_id_len);
 FUNC_6(VAR_13, VAR_9->server_id, VAR_9->server_id_len);
 FUNC_6(VAR_13, VAR_10->rand_server, VAR_2);
 FUNC_5(VAR_13,
   VAR_10->csuite_count * sizeof(struct eap_gpsk_csuite));
 FUNC_6(VAR_13, VAR_10->csuite_list,
   VAR_10->csuite_count * sizeof(struct eap_gpsk_csuite));

 return VAR_13;
}
