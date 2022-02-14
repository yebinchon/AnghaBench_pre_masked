
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
 int VAR_5 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_6,
           struct eap_mschapv2_data *VAR_7,
           struct wpabuf *VAR_8)
{
 struct eap_mschapv2_hdr *VAR_9;
 const u8 *VAR_10;
 size_t VAR_11;

 VAR_10 = FUNC_0(VAR_1, VAR_0, VAR_8,
          &VAR_11);
 if (VAR_10 == ((void*)0) || VAR_11 < 1)
  return;

 VAR_9 = (struct eap_mschapv2_hdr *) VAR_10;

 if (VAR_9->op_code == VAR_3) {
  FUNC_1(VAR_4, "EAP-MSCHAPV2: Received Success Response"
      " - authentication completed successfully");
  VAR_7->state = VAR_5;
 } else {
  FUNC_1(VAR_4, "EAP-MSCHAPV2: Did not receive Success "
      "Response - peer rejected authentication");
  VAR_7->state = VAR_2;
 }
}
