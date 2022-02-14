
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int eapol_ctx; TYPE_1__* eapol_cb; } ;
struct eap_identity_data {int state; } ;
struct TYPE_2__ {char* (* get_eap_req_id_text ) (int ,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int ) ;
 char* FUNC_1 (int ,size_t*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*,char const*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_4(struct eap_sm *VAR_5, void *VAR_6,
          u8 VAR_7)
{
 struct eap_identity_data *VAR_8 = VAR_6;
 struct wpabuf *VAR_9;
 const char *VAR_10;
 size_t VAR_11;

 if (VAR_5->eapol_cb->get_eap_req_id_text) {
  VAR_10 = VAR_5->eapol_cb->get_eap_req_id_text(VAR_5->eapol_ctx,
            &VAR_11);
 } else {
  VAR_10 = ((void*)0);
  VAR_11 = 0;
 }
 VAR_9 = FUNC_0(VAR_2, VAR_1, VAR_11,
       VAR_0, VAR_7);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_4, "EAP-Identity: Failed to allocate "
      "memory for request");
  VAR_8->state = VAR_3;
  return ((void*)0);
 }

 FUNC_3(VAR_9, VAR_10, VAR_11);

 return VAR_9;
}
