
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_hdr {scalar_t__ op_code; } ;
struct eap_mschapv2_data {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_5,
           struct eap_mschapv2_data *VAR_6,
           struct wpabuf *VAR_7)
{
 struct eap_mschapv2_hdr *VAR_8;
 const u8 *VAR_9;
 size_t VAR_10;

 VAR_9 = FUNC_0(VAR_1, VAR_0, VAR_7,
          &VAR_10);
 if (VAR_9 == ((void*)0) || VAR_10 < 1)
  return;

 VAR_8 = (struct eap_mschapv2_hdr *) VAR_9;

 if (VAR_8->op_code == VAR_3) {
  FUNC_1(VAR_4, "EAP-MSCHAPV2: Received Failure Response"
      " - authentication failed");
 } else {
  FUNC_1(VAR_4, "EAP-MSCHAPV2: Did not receive Failure "
      "Response - authentication failed");
 }

 VAR_6->state = VAR_2;
}
