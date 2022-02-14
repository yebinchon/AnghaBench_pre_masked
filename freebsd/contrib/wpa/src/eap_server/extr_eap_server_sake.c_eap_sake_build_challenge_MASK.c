
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct eap_sake_data {int rand_s; void* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wpabuf*,int ,int ,int) ;
 struct wpabuf* FUNC_1 (struct eap_sake_data*,int ,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_8,
      struct eap_sake_data *VAR_9,
      u8 VAR_10)
{
 struct wpabuf *VAR_11;
 size_t VAR_12;

 FUNC_4(VAR_5, "EAP-SAKE: Request/Challenge");

 if (FUNC_2(VAR_9->rand_s, VAR_2)) {
  FUNC_4(VAR_6, "EAP-SAKE: Failed to get random data");
  VAR_9->state = VAR_4;
  return ((void*)0);
 }
 FUNC_3(VAR_7, "EAP-SAKE: RAND_S (server rand)",
      VAR_9->rand_s, VAR_2);

 VAR_12 = 2 + VAR_2 + 2 + VAR_8->server_id_len;
 VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_12, VAR_3);
 if (VAR_11 == ((void*)0)) {
  VAR_9->state = VAR_4;
  return ((void*)0);
 }

 FUNC_4(VAR_5, "EAP-SAKE: * AT_RAND_S");
 FUNC_0(VAR_11, VAR_0,
     VAR_9->rand_s, VAR_2);

 FUNC_4(VAR_5, "EAP-SAKE: * AT_SERVERID");
 FUNC_0(VAR_11, VAR_1,
     VAR_8->server_id, VAR_8->server_id_len);

 return VAR_11;
}
