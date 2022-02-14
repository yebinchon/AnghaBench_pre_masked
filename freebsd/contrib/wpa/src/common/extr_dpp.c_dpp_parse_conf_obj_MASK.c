
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct json_token {scalar_t__ type; int string; } ;
struct dpp_authentication {int akm; scalar_t__ ssid_len; int ssid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dpp_authentication*,char*) ;
 scalar_t__ FUNC_4 (struct dpp_authentication*,struct json_token*) ;
 scalar_t__ FUNC_5 (struct dpp_authentication*,struct json_token*) ;
 int FUNC_6 (struct json_token*) ;
 struct json_token* FUNC_7 (struct json_token*,char*) ;
 struct json_token* FUNC_8 (char const*,int ) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ,scalar_t__) ;
 int FUNC_13 (int ,char*,...) ;

__attribute__((used)) static int FUNC_14(struct dpp_authentication *VAR_4,
         const u8 *VAR_5, u16 VAR_6)
{
 int VAR_7 = -1;
 struct json_token *VAR_8, *VAR_9, *VAR_10, *VAR_11;

 VAR_8 = FUNC_8((const char *) VAR_5, VAR_6);
 if (!VAR_8)
  return -1;
 if (VAR_8->type != VAR_0) {
  FUNC_3(VAR_4, "JSON root is not an object");
  goto fail;
 }

 VAR_9 = FUNC_7(VAR_8, "wi-fi_tech");
 if (!VAR_9 || VAR_9->type != VAR_1) {
  FUNC_3(VAR_4, "No wi-fi_tech string value found");
  goto fail;
 }
 if (FUNC_10(VAR_9->string, "infra") != 0) {
  FUNC_13(VAR_2, "DPP: Unsupported wi-fi_tech value: '%s'",
      VAR_9->string);
  FUNC_3(VAR_4, "Unsupported wi-fi_tech value");
  goto fail;
 }

 VAR_10 = FUNC_7(VAR_8, "discovery");
 if (!VAR_10 || VAR_10->type != VAR_0) {
  FUNC_3(VAR_4, "No discovery object in JSON");
  goto fail;
 }

 VAR_9 = FUNC_7(VAR_10, "ssid");
 if (!VAR_9 || VAR_9->type != VAR_1) {
  FUNC_3(VAR_4, "No discovery::ssid string value found");
  goto fail;
 }
 FUNC_12(VAR_2, "DPP: discovery::ssid",
     VAR_9->string, FUNC_11(VAR_9->string));
 if (FUNC_11(VAR_9->string) > VAR_3) {
  FUNC_3(VAR_4, "Too long discovery::ssid string value");
  goto fail;
 }
 VAR_4->ssid_len = FUNC_11(VAR_9->string);
 FUNC_9(VAR_4->ssid, VAR_9->string, VAR_4->ssid_len);

 VAR_11 = FUNC_7(VAR_8, "cred");
 if (!VAR_11 || VAR_11->type != VAR_0) {
  FUNC_3(VAR_4, "No cred object in JSON");
  goto fail;
 }

 VAR_9 = FUNC_7(VAR_11, "akm");
 if (!VAR_9 || VAR_9->type != VAR_1) {
  FUNC_3(VAR_4, "No cred::akm string value found");
  goto fail;
 }
 VAR_4->akm = FUNC_1(VAR_9->string);

 if (FUNC_2(VAR_4->akm)) {
  if (FUNC_5(VAR_4, VAR_11) < 0)
   goto fail;
 } else if (FUNC_0(VAR_4->akm)) {
  if (FUNC_4(VAR_4, VAR_11) < 0)
   goto fail;
 } else {
  FUNC_13(VAR_2, "DPP: Unsupported akm: %s",
      VAR_9->string);
  FUNC_3(VAR_4, "Unsupported akm");
  goto fail;
 }

 FUNC_13(VAR_2, "DPP: JSON parsing completed successfully");
 VAR_7 = 0;
fail:
 FUNC_6(VAR_8);
 return VAR_7;
}
