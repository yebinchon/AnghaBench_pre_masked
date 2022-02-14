
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct json_token {scalar_t__ type; int string; struct json_token* sibling; struct json_token* child; } ;
struct dpp_curve_params {int dummy; } ;
struct dpp_authentication {scalar_t__ ignore_netaccesskey_mismatch; int own_protocol_key; int net_access_key_expiry; } ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int * FUNC_4 (struct json_token*,struct dpp_curve_params const**) ;
 int FUNC_5 (struct json_token*) ;
 struct json_token* FUNC_6 (struct json_token*,char*) ;
 struct json_token* FUNC_7 (char const*,int ) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(struct dpp_authentication *VAR_4,
          const unsigned char *VAR_5,
          u16 VAR_6)
{
 struct json_token *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11 = -1;
 EVP_PKEY *VAR_12 = ((void*)0);
 const struct dpp_curve_params *VAR_13;
 unsigned int VAR_14 = 0;

 VAR_7 = FUNC_7((const char *) VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_8(VAR_3, "DPP: JSON parsing of connector failed");
  goto fail;
 }

 VAR_8 = FUNC_6(VAR_7, "groups");
 if (!VAR_8 || VAR_8->type != VAR_0) {
  FUNC_8(VAR_3, "DPP: No groups array found");
  goto skip_groups;
 }
 for (VAR_10 = VAR_8->child; VAR_10; VAR_10 = VAR_10->sibling) {
  struct json_token *VAR_15, *VAR_16;

  VAR_15 = FUNC_6(VAR_10, "groupId");
  if (!VAR_15 || VAR_15->type != VAR_2) {
   FUNC_8(VAR_3, "DPP: Missing groupId string");
   goto fail;
  }

  VAR_16 = FUNC_6(VAR_10, "netRole");
  if (!VAR_16 || VAR_16->type != VAR_2) {
   FUNC_8(VAR_3, "DPP: Missing netRole string");
   goto fail;
  }
  FUNC_8(VAR_3,
      "DPP: connector group: groupId='%s' netRole='%s'",
      VAR_15->string, VAR_16->string);
  VAR_14++;
 }
skip_groups:

 if (!VAR_14) {
  FUNC_8(VAR_3,
      "DPP: Connector includes no groups");
  goto fail;
 }

 VAR_10 = FUNC_6(VAR_7, "expiry");
 if (!VAR_10 || VAR_10->type != VAR_2) {
  FUNC_8(VAR_3,
      "DPP: No expiry string found - connector does not expire");
 } else {
  FUNC_8(VAR_3, "DPP: expiry = %s", VAR_10->string);
  if (FUNC_3(VAR_10->string,
        &VAR_4->net_access_key_expiry)) {
   FUNC_8(VAR_3,
       "DPP: Connector (netAccessKey) has expired");
   goto fail;
  }
 }

 VAR_9 = FUNC_6(VAR_7, "netAccessKey");
 if (!VAR_9 || VAR_9->type != VAR_1) {
  FUNC_8(VAR_3, "DPP: No netAccessKey object found");
  goto fail;
 }

 VAR_12 = FUNC_4(VAR_9, &VAR_13);
 if (!VAR_12)
  goto fail;
 FUNC_2("DPP: Received netAccessKey", VAR_12);

 if (FUNC_0(VAR_12, VAR_4->own_protocol_key) != 1) {
  FUNC_8(VAR_3,
      "DPP: netAccessKey in connector does not match own protocol key");
  goto fail;

 }

 VAR_11 = 0;
fail:
 FUNC_1(VAR_12);
 FUNC_5(VAR_7);
 return VAR_11;
}
