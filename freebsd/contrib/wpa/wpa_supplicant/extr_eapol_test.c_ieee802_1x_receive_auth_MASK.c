
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int code; } ;
struct eapol_test_data {int radius_identifier; int radius_access_accept_received; int radius_access_reject_received; scalar_t__ eapol_test_num_reauths; int ctrl_iface; struct radius_msg* last_recv_radius; } ;
typedef int RadiusRxResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct eapol_test_data*) ;
 int FUNC_2 (struct eapol_test_data*,struct radius_msg*,struct radius_msg*,int const*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct radius_msg*) ;
 scalar_t__ FUNC_5 (struct radius_msg*,int ,int *,int ) ;
 struct radius_hdr* FUNC_6 (struct radius_msg*) ;
 scalar_t__ FUNC_7 (struct radius_msg*,int const*,size_t,struct radius_msg*,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static RadiusRxResult
FUNC_9(struct radius_msg *VAR_6, struct radius_msg *VAR_7,
   const u8 *VAR_8, size_t VAR_9,
   void *VAR_10)
{
 struct eapol_test_data *VAR_11 = VAR_10;
 struct radius_hdr *VAR_12 = FUNC_6(VAR_6);



 if (VAR_12->code == 128 &&
     FUNC_5(VAR_6, VAR_2, ((void*)0),
    0) < 0 &&
     FUNC_5(VAR_6, VAR_1, ((void*)0), 0) < 0) {
  FUNC_8(VAR_0, "Allowing RADIUS "
         "Access-Reject without Message-Authenticator "
         "since it does not include EAP-Message\n");
 } else if (FUNC_7(VAR_6, VAR_8, VAR_9,
         VAR_7, 1)) {
  FUNC_3("Incoming RADIUS packet did not have correct "
         "Message-Authenticator - dropped\n");
  return VAR_5;
 }

 if (VAR_12->code != 129 &&
     VAR_12->code != 128 &&
     VAR_12->code != VAR_3) {
  FUNC_3("Unknown RADIUS message code\n");
  return VAR_5;
 }

 VAR_11->radius_identifier = -1;
 FUNC_8(VAR_0, "RADIUS packet matching with station");

 FUNC_4(VAR_11->last_recv_radius);
 VAR_11->last_recv_radius = VAR_6;

 switch (VAR_12->code) {
 case 129:
  VAR_11->radius_access_accept_received = 1;
  FUNC_2(VAR_11, VAR_6, VAR_7, VAR_8,
        VAR_9);
  break;
 case 128:
  VAR_11->radius_access_reject_received = 1;
  break;
 }

 FUNC_1(VAR_11);

 if ((VAR_12->code == 129 &&
      VAR_11->eapol_test_num_reauths < 0) ||
     VAR_12->code == 128) {
  if (!VAR_11->ctrl_iface)
   FUNC_0();
 }

 return VAR_4;
}
