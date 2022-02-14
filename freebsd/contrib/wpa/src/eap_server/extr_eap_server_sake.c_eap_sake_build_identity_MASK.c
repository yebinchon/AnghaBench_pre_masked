
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int * server_id; } ;
struct eap_sake_data {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wpabuf*,int ,int *,int) ;
 struct wpabuf* FUNC_1 (struct eap_sake_data*,int ,size_t,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_3(struct eap_sm *VAR_5,
            struct eap_sake_data *VAR_6,
            u8 VAR_7)
{
 struct wpabuf *VAR_8;
 size_t VAR_9;

 FUNC_2(VAR_4, "EAP-SAKE: Request/Identity");

 VAR_9 = 4;
 VAR_9 += 2 + VAR_5->server_id_len;
 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_9, VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_6->state = VAR_3;
  return ((void*)0);
 }

 FUNC_2(VAR_4, "EAP-SAKE: * AT_PERM_ID_REQ");
 FUNC_0(VAR_8, VAR_0, ((void*)0), 2);

 FUNC_2(VAR_4, "EAP-SAKE: * AT_SERVERID");
 FUNC_0(VAR_8, VAR_1,
     VAR_5->server_id, VAR_5->server_id_len);

 return VAR_8;
}
