
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct json_token {scalar_t__ type; int string; } ;
struct dpp_curve_params {char* jws_alg; } ;
typedef int EVP_MD ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct json_token*) ;
 struct json_token* FUNC_4 (struct json_token*,char*) ;
 struct wpabuf* FUNC_5 (struct json_token*,char*) ;
 struct json_token* FUNC_6 (char const*,int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,struct wpabuf*) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf *
FUNC_10(const struct dpp_curve_params *VAR_3,
         const u8 *VAR_4, u16 VAR_5,
         const EVP_MD **VAR_6)
{
 struct json_token *VAR_7, *VAR_8;
 struct wpabuf *VAR_9 = ((void*)0);

 VAR_7 = FUNC_6((const char *) VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_9(VAR_2,
      "DPP: JSON parsing failed for JWS Protected Header");
  goto fail;
 }

 if (VAR_7->type != VAR_0) {
  FUNC_9(VAR_2,
      "DPP: JWS Protected Header root is not an object");
  goto fail;
 }

 VAR_8 = FUNC_4(VAR_7, "typ");
 if (!VAR_8 || VAR_8->type != VAR_1) {
  FUNC_9(VAR_2, "DPP: No typ string value found");
  goto fail;
 }
 FUNC_9(VAR_2, "DPP: JWS Protected Header typ=%s",
     VAR_8->string);
 if (FUNC_7(VAR_8->string, "dppCon") != 0) {
  FUNC_9(VAR_2,
      "DPP: Unsupported JWS Protected Header typ=%s",
      VAR_8->string);
  goto fail;
 }

 VAR_8 = FUNC_4(VAR_7, "alg");
 if (!VAR_8 || VAR_8->type != VAR_1) {
  FUNC_9(VAR_2, "DPP: No alg string value found");
  goto fail;
 }
 FUNC_9(VAR_2, "DPP: JWS Protected Header alg=%s",
     VAR_8->string);
 if (FUNC_7(VAR_8->string, VAR_3->jws_alg) != 0) {
  FUNC_9(VAR_2,
      "DPP: Unexpected JWS Protected Header alg=%s (expected %s based on C-sign-key)",
      VAR_8->string, VAR_3->jws_alg);
  goto fail;
 }
 if (FUNC_7(VAR_8->string, "ES256") == 0 ||
     FUNC_7(VAR_8->string, "BS256") == 0)
  *VAR_6 = FUNC_0();
 else if (FUNC_7(VAR_8->string, "ES384") == 0 ||
   FUNC_7(VAR_8->string, "BS384") == 0)
  *VAR_6 = FUNC_1();
 else if (FUNC_7(VAR_8->string, "ES512") == 0 ||
   FUNC_7(VAR_8->string, "BS512") == 0)
  *VAR_6 = FUNC_2();
 else
  *VAR_6 = ((void*)0);
 if (!*VAR_6) {
  FUNC_9(VAR_2,
      "DPP: Unsupported JWS Protected Header alg=%s",
      VAR_8->string);
  goto fail;
 }

 VAR_9 = FUNC_5(VAR_7, "kid");
 if (!VAR_9) {
  FUNC_9(VAR_2, "DPP: No kid string value found");
  goto fail;
 }
 FUNC_8(VAR_2, "DPP: JWS Protected Header kid (decoded)",
   VAR_9);

fail:
 FUNC_3(VAR_7);
 return VAR_9;
}
