
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct json_token {scalar_t__ type; int string; } ;
struct dpp_authentication {int e_nonce; TYPE_1__* curve; int ke; } ;
struct TYPE_2__ {scalar_t__ nonce_len; int hash_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,scalar_t__,int ,int *,int *,int const*) ;
 int FUNC_1 (struct dpp_authentication*,char*) ;
 struct wpabuf* FUNC_2 (struct dpp_authentication*,int const*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int const*,size_t) ;
 int const* FUNC_4 (int const*,size_t,int ,scalar_t__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct json_token*) ;
 struct json_token* FUNC_6 (struct json_token*,char*) ;
 struct json_token* FUNC_7 (char const*,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int const* FUNC_9 (size_t) ;
 int FUNC_10 (int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int const*,scalar_t__) ;
 int FUNC_13 (int ,char*,int const*,scalar_t__) ;
 int FUNC_14 (int ,char*,...) ;

struct wpabuf *
FUNC_15(struct dpp_authentication *VAR_9, const u8 *VAR_10,
  size_t VAR_11)
{
 const u8 *VAR_12, *VAR_13, *VAR_14;
 u16 VAR_15, VAR_16, VAR_17;
 u8 *VAR_18 = ((void*)0);
 size_t VAR_19 = 0;
 struct wpabuf *VAR_20 = ((void*)0);
 struct json_token *VAR_21 = ((void*)0), *VAR_22;
 int VAR_23;
 if (FUNC_3(VAR_10, VAR_11) < 0) {
  FUNC_1(VAR_9, "Invalid attribute in config request");
  return ((void*)0);
 }

 VAR_12 = FUNC_4(VAR_10, VAR_11, VAR_3,
        &VAR_15);
 if (!VAR_12 || VAR_15 < VAR_0) {
  FUNC_1(VAR_9,
         "Missing or invalid required Wrapped Data attribute");
  return ((void*)0);
 }

 FUNC_12(VAR_6, "DPP: AES-SIV ciphertext",
      VAR_12, VAR_15);
 VAR_19 = VAR_15 - VAR_0;
 VAR_18 = FUNC_9(VAR_19);
 if (!VAR_18)
  return ((void*)0);
 if (FUNC_0(VAR_9->ke, VAR_9->curve->hash_len,
       VAR_12, VAR_15,
       0, ((void*)0), ((void*)0), VAR_18) < 0) {
  FUNC_1(VAR_9, "AES-SIV decryption failed");
  goto fail;
 }
 FUNC_12(VAR_6, "DPP: AES-SIV cleartext",
      VAR_18, VAR_19);

 if (FUNC_3(VAR_18, VAR_19) < 0) {
  FUNC_1(VAR_9, "Invalid attribute in unwrapped data");
  goto fail;
 }

 VAR_13 = FUNC_4(VAR_18, VAR_19,
          VAR_2,
          &VAR_16);
 if (!VAR_13 || VAR_16 != VAR_9->curve->nonce_len) {
  FUNC_1(VAR_9,
         "Missing or invalid Enrollee Nonce attribute");
  goto fail;
 }
 FUNC_12(VAR_6, "DPP: Enrollee Nonce", VAR_13, VAR_16);
 FUNC_10(VAR_9->e_nonce, VAR_13, VAR_16);

 VAR_14 = FUNC_4(VAR_18, VAR_19,
       VAR_1,
       &VAR_17);
 if (!VAR_14) {
  FUNC_1(VAR_9,
         "Missing or invalid Config Attributes attribute");
  goto fail;
 }
 FUNC_13(VAR_6, "DPP: Config Attributes",
     VAR_14, VAR_17);

 VAR_21 = FUNC_7((const char *) VAR_14, VAR_17);
 if (!VAR_21) {
  FUNC_1(VAR_9, "Could not parse Config Attributes");
  goto fail;
 }

 VAR_22 = FUNC_6(VAR_21, "name");
 if (!VAR_22 || VAR_22->type != VAR_5) {
  FUNC_1(VAR_9, "No Config Attributes - name");
  goto fail;
 }
 FUNC_14(VAR_6, "DPP: Enrollee name = '%s'", VAR_22->string);

 VAR_22 = FUNC_6(VAR_21, "wi-fi_tech");
 if (!VAR_22 || VAR_22->type != VAR_5) {
  FUNC_1(VAR_9, "No Config Attributes - wi-fi_tech");
  goto fail;
 }
 FUNC_14(VAR_6, "DPP: wi-fi_tech = '%s'", VAR_22->string);
 if (FUNC_11(VAR_22->string, "infra") != 0) {
  FUNC_14(VAR_6, "DPP: Unsupported wi-fi_tech '%s'",
      VAR_22->string);
  FUNC_1(VAR_9, "Unsupported wi-fi_tech");
  goto fail;
 }

 VAR_22 = FUNC_6(VAR_21, "netRole");
 if (!VAR_22 || VAR_22->type != VAR_5) {
  FUNC_1(VAR_9, "No Config Attributes - netRole");
  goto fail;
 }
 FUNC_14(VAR_6, "DPP: netRole = '%s'", VAR_22->string);
 if (FUNC_11(VAR_22->string, "sta") == 0) {
  VAR_23 = 0;
 } else if (FUNC_11(VAR_22->string, "ap") == 0) {
  VAR_23 = 1;
 } else {
  FUNC_14(VAR_6, "DPP: Unsupported netRole '%s'",
      VAR_22->string);
  FUNC_1(VAR_9, "Unsupported netRole");
  goto fail;
 }

 VAR_20 = FUNC_2(VAR_9, VAR_13, VAR_16, VAR_23);

fail:
 FUNC_5(VAR_21);
 FUNC_8(VAR_18);
 return VAR_20;
}
