
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_ms_mppe_keys {scalar_t__ send_len; scalar_t__ recv_len; struct radius_ms_mppe_keys* recv; struct radius_ms_mppe_keys* send; } ;
typedef struct radius_ms_mppe_keys u8 ;
struct radius_msg {int dummy; } ;
struct eapol_test_data {size_t authenticator_pmk_len; int authenticator_pmk; int authenticator_eap_key_name; size_t authenticator_eap_key_name_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct radius_ms_mppe_keys*) ;
 int FUNC_1 (int,struct radius_ms_mppe_keys*,size_t) ;
 scalar_t__ FUNC_2 (struct radius_msg*,int ,struct radius_ms_mppe_keys**,size_t*,int *) ;
 struct radius_ms_mppe_keys* FUNC_3 (struct radius_msg*,struct radius_msg*,struct radius_ms_mppe_keys const*,size_t) ;
 struct radius_ms_mppe_keys* FUNC_4 (struct radius_msg*,struct radius_msg*,struct radius_ms_mppe_keys const*,size_t) ;
 int FUNC_5 (int ,char*,struct radius_ms_mppe_keys*,scalar_t__) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct eapol_test_data *VAR_3,
    struct radius_msg *VAR_4, struct radius_msg *VAR_5,
    const u8 *VAR_6,
    size_t VAR_7)
{
 struct radius_ms_mppe_keys *VAR_8;
 u8 *VAR_9;
 size_t VAR_10;

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6,
          VAR_7);
 if (VAR_8 && VAR_8->send == ((void*)0) && VAR_8->recv == ((void*)0)) {
  FUNC_0(VAR_8);
  VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6,
       VAR_7);
 }

 if (VAR_8) {
  if (VAR_8->send) {
   FUNC_5(VAR_0, "MS-MPPE-Send-Key (sign)",
        VAR_8->send, VAR_8->send_len);
  }
  if (VAR_8->recv) {
   FUNC_5(VAR_0, "MS-MPPE-Recv-Key (crypt)",
        VAR_8->recv, VAR_8->recv_len);
   VAR_3->authenticator_pmk_len =
    VAR_8->recv_len > VAR_1 ? VAR_1 :
    VAR_8->recv_len;
   FUNC_1(VAR_3->authenticator_pmk, VAR_8->recv,
      VAR_3->authenticator_pmk_len);
   if (VAR_3->authenticator_pmk_len == 16 && VAR_8->send &&
       VAR_8->send_len == 16) {

    FUNC_6(VAR_0, "Use MS-MPPE-Send-Key "
        "to extend PMK to 32 octets");
    FUNC_1(VAR_3->authenticator_pmk +
       VAR_3->authenticator_pmk_len,
       VAR_8->send, VAR_8->send_len);
    VAR_3->authenticator_pmk_len += VAR_8->send_len;
   }
  }

  FUNC_0(VAR_8->send);
  FUNC_0(VAR_8->recv);
  FUNC_0(VAR_8);
 }

 if (FUNC_2(VAR_4, VAR_2, &VAR_9, &VAR_10,
        ((void*)0)) == 0) {
  FUNC_1(VAR_3->authenticator_eap_key_name, VAR_9, VAR_10);
  VAR_3->authenticator_eap_key_name_len = VAR_10;
 } else {
  VAR_3->authenticator_eap_key_name_len = 0;
 }
}
