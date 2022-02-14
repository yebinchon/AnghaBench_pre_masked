
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int * server_id; TYPE_2__* user; } ;
struct eap_psk_hdr_2 {int * mac_p; int * rand_p; } ;
struct eap_psk_data {scalar_t__ state; size_t id_p_len; int ak; int * rand_p; int * rand_s; int * id_p; int kdk; } ;
struct TYPE_4__ {scalar_t__ password_len; int * password; TYPE_1__* methods; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ method; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int * FUNC_0 (scalar_t__,scalar_t__,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct eap_sm*,int *,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,int *,size_t,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int * FUNC_8 (int const*,size_t) ;
 int FUNC_9 (int ,char*,int *,int) ;
 int FUNC_10 (int ,char*,int *,size_t) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void FUNC_13(struct eap_sm *VAR_15,
         struct eap_psk_data *VAR_16,
         struct wpabuf *VAR_17)
{
 const struct eap_psk_hdr_2 *VAR_18;
 u8 *VAR_19, VAR_20[VAR_3], *VAR_21;
 size_t VAR_22, VAR_23;
 int VAR_24;
 const u8 *VAR_25;

 if (VAR_16->state != VAR_13)
  return;

 FUNC_12(VAR_10, "EAP-PSK: Received PSK-2");

 VAR_25 = FUNC_0(VAR_8, VAR_7, VAR_17,
    &VAR_22);
 if (VAR_25 == ((void*)0) || VAR_22 < sizeof(*VAR_18)) {
  FUNC_12(VAR_11, "EAP-PSK: Invalid frame");
  return;
 }
 VAR_18 = (const struct eap_psk_hdr_2 *) VAR_25;
 VAR_25 = (const u8 *) (VAR_18 + 1);
 VAR_22 -= sizeof(*VAR_18);

 FUNC_4(VAR_16->id_p);
 VAR_16->id_p = FUNC_8(VAR_25, VAR_22);
 if (VAR_16->id_p == ((void*)0)) {
  FUNC_12(VAR_11, "EAP-PSK: Failed to allocate memory for "
      "ID_P");
  return;
 }
 VAR_16->id_p_len = VAR_22;
 FUNC_10(VAR_12, "EAP-PSK: ID_P",
     VAR_16->id_p, VAR_16->id_p_len);

 if (FUNC_2(VAR_15, VAR_16->id_p, VAR_16->id_p_len, 0) < 0) {
  FUNC_10(VAR_10, "EAP-PSK: unknown ID_P",
      VAR_16->id_p, VAR_16->id_p_len);
  VAR_16->state = VAR_9;
  return;
 }

 for (VAR_24 = 0;
      VAR_24 < VAR_0 &&
       (VAR_15->user->methods[VAR_24].vendor != VAR_8 ||
        VAR_15->user->methods[VAR_24].method != VAR_6);
      VAR_24++) {
  if (VAR_15->user->methods[VAR_24].vendor == VAR_8 &&
      VAR_15->user->methods[VAR_24].method == VAR_7)
   break;
 }

 if (VAR_24 >= VAR_0 ||
     VAR_15->user->methods[VAR_24].vendor != VAR_8 ||
     VAR_15->user->methods[VAR_24].method != VAR_7) {
  FUNC_10(VAR_10,
      "EAP-PSK: EAP-PSK not enabled for ID_P",
      VAR_16->id_p, VAR_16->id_p_len);
  VAR_16->state = VAR_9;
  return;
 }

 if (VAR_15->user->password == ((void*)0) ||
     VAR_15->user->password_len != VAR_4) {
  FUNC_10(VAR_10, "EAP-PSK: invalid password in "
      "user database for ID_P",
      VAR_16->id_p, VAR_16->id_p_len);
  VAR_16->state = VAR_9;
  return;
 }
 if (FUNC_1(VAR_15->user->password, VAR_16->ak, VAR_16->kdk)) {
  VAR_16->state = VAR_9;
  return;
 }
 FUNC_11(VAR_10, "EAP-PSK: AK", VAR_16->ak, VAR_1);
 FUNC_11(VAR_10, "EAP-PSK: KDK", VAR_16->kdk, VAR_2);

 FUNC_9(VAR_12, "EAP-PSK: RAND_P (client rand)",
      VAR_18->rand_p, VAR_5);
 FUNC_7(VAR_16->rand_p, VAR_18->rand_p, VAR_5);


 VAR_23 = VAR_16->id_p_len + VAR_15->server_id_len + 2 * VAR_5;
 VAR_21 = FUNC_5(VAR_23);
 if (VAR_21 == ((void*)0)) {
  VAR_16->state = VAR_9;
  return;
 }
 FUNC_7(VAR_21, VAR_16->id_p, VAR_16->id_p_len);
 VAR_19 = VAR_21 + VAR_16->id_p_len;
 FUNC_7(VAR_19, VAR_15->server_id, VAR_15->server_id_len);
 VAR_19 += VAR_15->server_id_len;
 FUNC_7(VAR_19, VAR_16->rand_s, VAR_5);
 VAR_19 += VAR_5;
 FUNC_7(VAR_19, VAR_16->rand_p, VAR_5);
 if (FUNC_3(VAR_16->ak, VAR_21, VAR_23, VAR_20)) {
  FUNC_4(VAR_21);
  VAR_16->state = VAR_9;
  return;
 }
 FUNC_4(VAR_21);
 FUNC_9(VAR_10, "EAP-PSK: MAC_P", VAR_18->mac_p, VAR_3);
 if (FUNC_6(VAR_20, VAR_18->mac_p, VAR_3) != 0) {
  FUNC_12(VAR_11, "EAP-PSK: Invalid MAC_P");
  FUNC_9(VAR_12, "EAP-PSK: Expected MAC_P",
       VAR_20, VAR_3);
  VAR_16->state = VAR_9;
  return;
 }

 VAR_16->state = VAR_14;
}
