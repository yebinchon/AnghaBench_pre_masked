
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {struct eapol_state_machine* eapol_sm; } ;
struct radius_msg {int dummy; } ;
struct radius_ms_mppe_keys {size_t send_len; size_t recv_len; struct radius_ms_mppe_keys* recv; struct radius_ms_mppe_keys* send; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {TYPE_1__* eap_if; } ;
struct TYPE_2__ {size_t aaaEapKeyDataLen; size_t eapSessionIdLen; struct radius_ms_mppe_keys* eapSessionId; int aaaEapKeyAvailable; struct radius_ms_mppe_keys* aaaEapKeyData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radius_ms_mppe_keys*) ;
 struct radius_ms_mppe_keys* FUNC_1 (size_t) ;
 int FUNC_2 (struct radius_ms_mppe_keys*,struct radius_ms_mppe_keys*,size_t) ;
 struct radius_ms_mppe_keys* FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (struct radius_msg*,int ,int **,size_t*,int *) ;
 struct radius_ms_mppe_keys* FUNC_5 (struct radius_msg*,struct radius_msg*,int const*,size_t) ;
 int FUNC_6 (int ,char*,struct radius_ms_mppe_keys*,size_t) ;
 int FUNC_7 (int ,char*,struct radius_ms_mppe_keys*,size_t) ;
 int FUNC_8 (int ,char*,struct radius_ms_mppe_keys*,struct radius_ms_mppe_keys*,struct radius_ms_mppe_keys*) ;

__attribute__((used)) static void FUNC_9(struct hostapd_data *VAR_3,
    struct sta_info *VAR_4, struct radius_msg *VAR_5,
    struct radius_msg *VAR_6,
    const u8 *VAR_7,
    size_t VAR_8)
{
 struct radius_ms_mppe_keys *VAR_9;
 u8 *VAR_10;
 size_t VAR_11;
 struct eapol_state_machine *VAR_12 = VAR_4->eapol_sm;
 if (VAR_12 == ((void*)0))
  return;

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7,
          VAR_8);

 if (VAR_9 && VAR_9->send && VAR_9->recv) {
  VAR_11 = VAR_9->send_len + VAR_9->recv_len;
  FUNC_7(VAR_0, "MS-MPPE-Send-Key",
    VAR_9->send, VAR_9->send_len);
  FUNC_7(VAR_0, "MS-MPPE-Recv-Key",
    VAR_9->recv, VAR_9->recv_len);

  FUNC_0(VAR_12->eap_if->aaaEapKeyData);
  VAR_12->eap_if->aaaEapKeyData = FUNC_1(VAR_11);
  if (VAR_12->eap_if->aaaEapKeyData) {
   FUNC_2(VAR_12->eap_if->aaaEapKeyData, VAR_9->recv,
      VAR_9->recv_len);
   FUNC_2(VAR_12->eap_if->aaaEapKeyData + VAR_9->recv_len,
      VAR_9->send, VAR_9->send_len);
   VAR_12->eap_if->aaaEapKeyDataLen = VAR_11;
   VAR_12->eap_if->aaaEapKeyAvailable = VAR_2;
  }
 } else {
  FUNC_8(VAR_0,
      "MS-MPPE: 1x_get_keys, could not get keys: %p  send: %p  recv: %p",
      VAR_9, VAR_9 ? VAR_9->send : ((void*)0),
      VAR_9 ? VAR_9->recv : ((void*)0));
 }

 if (VAR_9) {
  FUNC_0(VAR_9->send);
  FUNC_0(VAR_9->recv);
  FUNC_0(VAR_9);
 }

 if (FUNC_4(VAR_5, VAR_1, &VAR_10, &VAR_11,
        ((void*)0)) == 0) {
  FUNC_0(VAR_12->eap_if->eapSessionId);
  VAR_12->eap_if->eapSessionId = FUNC_3(VAR_10, VAR_11);
  if (VAR_12->eap_if->eapSessionId) {
   VAR_12->eap_if->eapSessionIdLen = VAR_11;
   FUNC_6(VAR_0, "EAP-Key Name",
        VAR_12->eap_if->eapSessionId,
        VAR_12->eap_if->eapSessionIdLen);
  }
 } else {
  VAR_12->eap_if->eapSessionIdLen = 0;
 }
}
