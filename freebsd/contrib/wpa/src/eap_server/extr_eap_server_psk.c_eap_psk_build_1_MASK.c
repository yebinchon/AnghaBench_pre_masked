
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ server_id_len; int server_id; } ;
struct eap_psk_hdr_1 {int rand_s; int flags; } ;
struct eap_psk_data {int rand_s; void* state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wpabuf* FUNC_1 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 struct eap_psk_hdr_1* FUNC_6 (struct wpabuf*,int) ;
 int FUNC_7 (struct wpabuf*,int ,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_8(struct eap_sm *VAR_8,
           struct eap_psk_data *VAR_9, u8 VAR_10)
{
 struct wpabuf *VAR_11;
 struct eap_psk_hdr_1 *VAR_12;

 FUNC_5(VAR_5, "EAP-PSK: PSK-1 (sending)");

 if (FUNC_3(VAR_9->rand_s, VAR_1)) {
  FUNC_5(VAR_6, "EAP-PSK: Failed to get random data");
  VAR_9->state = VAR_4;
  return ((void*)0);
 }
 FUNC_4(VAR_7, "EAP-PSK: RAND_S (server rand)",
      VAR_9->rand_s, VAR_1);

 VAR_11 = FUNC_1(VAR_3, VAR_2,
       sizeof(*VAR_12) + VAR_8->server_id_len,
       VAR_0, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_6, "EAP-PSK: Failed to allocate memory "
      "request");
  VAR_9->state = VAR_4;
  return ((void*)0);
 }

 VAR_12 = FUNC_6(VAR_11, sizeof(*VAR_12));
 VAR_12->flags = FUNC_0(0);
 FUNC_2(VAR_12->rand_s, VAR_9->rand_s, VAR_1);
 FUNC_7(VAR_11, VAR_8->server_id, VAR_8->server_id_len);

 return VAR_11;
}
