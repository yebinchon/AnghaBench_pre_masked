
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int tmp ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int identifier; } ;
struct radius_das_data {int (* disconnect ) (int ,struct radius_das_attrs*) ;int ctx; } ;
struct radius_das_attrs {size_t nas_identifier_len; size_t user_name_len; size_t acct_session_id_len; size_t acct_multi_session_id_len; size_t cui_len; scalar_t__* cui; scalar_t__* acct_multi_session_id; scalar_t__* acct_session_id; scalar_t__* user_name; scalar_t__* sta_addr; scalar_t__* nas_identifier; scalar_t__* nas_ipv6_addr; scalar_t__* nas_ip_addr; } ;
typedef enum radius_das_res { ____Placeholder_radius_das_res } radius_das_res ;
typedef int attrs ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;





 scalar_t__ FUNC_0 (char*,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__*,size_t) ;
 int FUNC_2 (struct radius_das_attrs*,int ,int) ;
 int FUNC_3 (struct radius_msg*,int ,int) ;
 scalar_t__ FUNC_4 (struct radius_msg*,scalar_t__*) ;
 int FUNC_5 (struct radius_msg*) ;
 scalar_t__ FUNC_6 (struct radius_msg*,scalar_t__,scalar_t__**,size_t*,int *) ;
 struct radius_hdr* FUNC_7 (struct radius_msg*) ;
 struct radius_msg* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct radius_das_attrs*) ;
 int FUNC_10 (int ,char*,char const*,...) ;

__attribute__((used)) static struct radius_msg * FUNC_11(struct radius_das_data *VAR_15,
       struct radius_msg *VAR_16,
       const char *VAR_17,
       int VAR_18)
{
 struct radius_hdr *VAR_19;
 struct radius_msg *VAR_20;
 u8 VAR_21[] = {
  VAR_12,
  VAR_11,
  VAR_4,
  VAR_9,
  VAR_3,
  VAR_2,
  VAR_7,
  VAR_8,
  VAR_5,



  0
 };
 int VAR_22 = 405;
 u8 VAR_23;
 enum radius_das_res VAR_24;
 struct radius_das_attrs VAR_25;
 u8 *VAR_26;
 size_t VAR_27;
 char VAR_28[100];
 u8 VAR_29[VAR_0];

 VAR_19 = FUNC_7(VAR_16);

 VAR_23 = FUNC_4(VAR_16, VAR_21);
 if (VAR_23) {
  FUNC_10(VAR_1, "DAS: Unsupported attribute %u in "
      "Disconnect-Request from %s:%d", VAR_23,
      VAR_17, VAR_18);
  VAR_22 = 401;
  goto fail;
 }

 FUNC_2(&VAR_25, 0, sizeof(VAR_25));

 if (FUNC_6(VAR_16, VAR_11,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  if (VAR_27 != 4) {
   FUNC_10(VAR_1, "DAS: Invalid NAS-IP-Address from %s:%d",
       VAR_17, VAR_18);
   VAR_22 = 407;
   goto fail;
  }
  VAR_25.nas_ip_addr = VAR_26;
 }
 if (FUNC_6(VAR_16, VAR_9,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  VAR_25.nas_identifier = VAR_26;
  VAR_25.nas_identifier_len = VAR_27;
 }

 if (FUNC_6(VAR_16, VAR_4,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  if (VAR_27 >= sizeof(VAR_28))
   VAR_27 = sizeof(VAR_28) - 1;
  FUNC_1(VAR_28, VAR_26, VAR_27);
  VAR_28[VAR_27] = '\0';
  if (FUNC_0(VAR_28, VAR_29) < 0) {
   FUNC_10(VAR_1, "DAS: Invalid Calling-Station-Id "
       "'%s' from %s:%d", VAR_28, VAR_17, VAR_18);
   VAR_22 = 407;
   goto fail;
  }
  VAR_25.sta_addr = VAR_29;
 }

 if (FUNC_6(VAR_16, VAR_12,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  VAR_25.user_name = VAR_26;
  VAR_25.user_name_len = VAR_27;
 }

 if (FUNC_6(VAR_16, VAR_3,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  VAR_25.acct_session_id = VAR_26;
  VAR_25.acct_session_id_len = VAR_27;
 }

 if (FUNC_6(VAR_16, VAR_2,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  VAR_25.acct_multi_session_id = VAR_26;
  VAR_25.acct_multi_session_id_len = VAR_27;
 }

 if (FUNC_6(VAR_16, VAR_5,
        &VAR_26, &VAR_27, ((void*)0)) == 0) {
  VAR_25.cui = VAR_26;
  VAR_25.cui_len = VAR_27;
 }

 VAR_24 = VAR_15->disconnect(VAR_15->ctx, &VAR_25);
 switch (VAR_24) {
 case 130:
  FUNC_10(VAR_1, "DAS: NAS mismatch from %s:%d",
      VAR_17, VAR_18);
  VAR_22 = 403;
  break;
 case 129:
  FUNC_10(VAR_1, "DAS: Session not found for request from "
      "%s:%d", VAR_17, VAR_18);
  VAR_22 = 503;
  break;
 case 131:
  FUNC_10(VAR_1,
      "DAS: Multiple sessions match for request from %s:%d",
      VAR_17, VAR_18);
  VAR_22 = 508;
  break;
 case 132:

  VAR_22 = 405;
  break;
 case 128:
  VAR_22 = 0;
  break;
 }

fail:
 VAR_20 = FUNC_8(VAR_22 ? VAR_14 :
          VAR_13, VAR_19->identifier);
 if (VAR_20 == ((void*)0))
  return ((void*)0);

 if (VAR_22) {
  if (!FUNC_3(VAR_20, VAR_6,
            VAR_22)) {
   FUNC_5(VAR_20);
   return ((void*)0);
  }
 }

 return VAR_20;
}
