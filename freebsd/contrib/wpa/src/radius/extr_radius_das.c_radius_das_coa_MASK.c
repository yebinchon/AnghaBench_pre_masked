
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int identifier; } ;
struct radius_das_data {int (* coa ) (int ,struct radius_das_attrs*) ;int ctx; } ;
struct radius_das_attrs {int* nas_ip_addr; int* nas_ipv6_addr; int* nas_identifier; size_t nas_identifier_len; int* sta_addr; int* user_name; size_t user_name_len; int* acct_session_id; size_t acct_session_id_len; int* acct_multi_session_id; size_t acct_multi_session_id_len; int* cui; size_t cui_len; int* hs20_t_c_filtering; } ;
typedef enum radius_das_res { ____Placeholder_radius_das_res } radius_das_res ;
typedef int attrs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;





 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int FUNC_2 (char*,int*,size_t) ;
 int FUNC_3 (struct radius_das_attrs*,int ,int) ;
 int FUNC_4 (struct radius_msg*,int ,int) ;
 int FUNC_5 (struct radius_msg*,int*) ;
 int FUNC_6 (struct radius_msg*) ;
 scalar_t__ FUNC_7 (struct radius_msg*,int,int**,size_t*,int *) ;
 struct radius_hdr* FUNC_8 (struct radius_msg*) ;
 struct radius_msg* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct radius_das_attrs*) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static struct radius_msg * FUNC_12(struct radius_das_data *VAR_18,
       struct radius_msg *VAR_19,
       const char *VAR_20, int VAR_21)
{
 struct radius_hdr *VAR_22;
 struct radius_msg *VAR_23;
 u8 VAR_24[] = {
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
 int VAR_25 = 405;
 u8 VAR_26;
 enum radius_das_res VAR_27;
 struct radius_das_attrs VAR_28;
 u8 *VAR_29;
 size_t VAR_30;
 char VAR_31[100];
 u8 VAR_32[VAR_0];

 VAR_22 = FUNC_8(VAR_19);

 if (!VAR_18->coa) {
  FUNC_11(VAR_1, "DAS: CoA not supported");
  goto fail;
 }

 VAR_26 = FUNC_5(VAR_19, VAR_24);
 if (VAR_26) {
  FUNC_11(VAR_1,
      "DAS: Unsupported attribute %u in CoA-Request from %s:%d",
      VAR_26, VAR_20, VAR_21);
  VAR_25 = 401;
  goto fail;
 }

 FUNC_3(&VAR_28, 0, sizeof(VAR_28));

 if (FUNC_7(VAR_19, VAR_11,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  if (VAR_30 != 4) {
   FUNC_11(VAR_1, "DAS: Invalid NAS-IP-Address from %s:%d",
       VAR_20, VAR_21);
   VAR_25 = 407;
   goto fail;
  }
  VAR_28.nas_ip_addr = VAR_29;
 }
 if (FUNC_7(VAR_19, VAR_9,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  VAR_28.nas_identifier = VAR_29;
  VAR_28.nas_identifier_len = VAR_30;
 }

 if (FUNC_7(VAR_19, VAR_4,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  if (VAR_30 >= sizeof(VAR_31))
   VAR_30 = sizeof(VAR_31) - 1;
  FUNC_2(VAR_31, VAR_29, VAR_30);
  VAR_31[VAR_30] = '\0';
  if (FUNC_1(VAR_31, VAR_32) < 0) {
   FUNC_11(VAR_1, "DAS: Invalid Calling-Station-Id "
       "'%s' from %s:%d", VAR_31, VAR_20, VAR_21);
   VAR_25 = 407;
   goto fail;
  }
  VAR_28.sta_addr = VAR_32;
 }

 if (FUNC_7(VAR_19, VAR_12,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  VAR_28.user_name = VAR_29;
  VAR_28.user_name_len = VAR_30;
 }

 if (FUNC_7(VAR_19, VAR_3,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  VAR_28.acct_session_id = VAR_29;
  VAR_28.acct_session_id_len = VAR_30;
 }

 if (FUNC_7(VAR_19, VAR_2,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  VAR_28.acct_multi_session_id = VAR_29;
  VAR_28.acct_multi_session_id_len = VAR_30;
 }

 if (FUNC_7(VAR_19, VAR_5,
        &VAR_29, &VAR_30, ((void*)0)) == 0) {
  VAR_28.cui = VAR_29;
  VAR_28.cui_len = VAR_30;
 }
 VAR_27 = VAR_18->coa(VAR_18->ctx, &VAR_28);
 switch (VAR_27) {
 case 130:
  FUNC_11(VAR_1, "DAS: NAS mismatch from %s:%d",
      VAR_20, VAR_21);
  VAR_25 = 403;
  break;
 case 129:
  FUNC_11(VAR_1,
      "DAS: Session not found for request from %s:%d",
      VAR_20, VAR_21);
  VAR_25 = 503;
  break;
 case 131:
  FUNC_11(VAR_1,
      "DAS: Multiple sessions match for request from %s:%d",
      VAR_20, VAR_21);
  VAR_25 = 508;
  break;
 case 132:
  FUNC_11(VAR_1, "DAS: CoA failed for request from %s:%d",
      VAR_20, VAR_21);
  VAR_25 = 407;
  break;
 case 128:
  VAR_25 = 0;
  break;
 }

fail:
 VAR_23 = FUNC_9(VAR_25 ? VAR_15 :
          VAR_14, VAR_22->identifier);
 if (!VAR_23)
  return ((void*)0);

 if (VAR_25 &&
     !FUNC_4(VAR_23, VAR_6, VAR_25)) {
  FUNC_6(VAR_23);
  return ((void*)0);
 }

 return VAR_23;
}
