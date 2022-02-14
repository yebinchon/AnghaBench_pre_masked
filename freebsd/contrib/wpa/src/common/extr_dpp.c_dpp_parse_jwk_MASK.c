
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct json_token {scalar_t__ type; int string; } ;
struct dpp_curve_params {scalar_t__ prime_len; int name; } ;
typedef int EVP_PKEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct dpp_curve_params* FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ,int ,scalar_t__) ;
 struct json_token* FUNC_5 (struct json_token*,char*) ;
 struct wpabuf* FUNC_6 (struct json_token*,char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,struct wpabuf*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpabuf*) ;
 scalar_t__ FUNC_12 (struct wpabuf*) ;

__attribute__((used)) static EVP_PKEY * FUNC_13(struct json_token *VAR_2,
    const struct dpp_curve_params **VAR_3)
{
 struct json_token *VAR_4;
 const struct dpp_curve_params *VAR_5;
 struct wpabuf *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 EC_GROUP *VAR_8;
 EVP_PKEY *VAR_9 = ((void*)0);

 VAR_4 = FUNC_5(VAR_2, "kty");
 if (!VAR_4 || VAR_4->type != VAR_0) {
  FUNC_9(VAR_1, "DPP: No kty in JWK");
  goto fail;
 }
 if (FUNC_7(VAR_4->string, "EC") != 0) {
  FUNC_9(VAR_1, "DPP: Unexpected JWK kty '%s'",
      VAR_4->string);
  goto fail;
 }

 VAR_4 = FUNC_5(VAR_2, "crv");
 if (!VAR_4 || VAR_4->type != VAR_0) {
  FUNC_9(VAR_1, "DPP: No crv in JWK");
  goto fail;
 }
 VAR_5 = FUNC_3(VAR_4->string);
 if (!VAR_5) {
  FUNC_9(VAR_1, "DPP: Unsupported JWK crv '%s'",
      VAR_4->string);
  goto fail;
 }

 VAR_6 = FUNC_6(VAR_2, "x");
 if (!VAR_6) {
  FUNC_9(VAR_1, "DPP: No x in JWK");
  goto fail;
 }
 FUNC_8(VAR_1, "DPP: JWK x", VAR_6);
 if (FUNC_12(VAR_6) != VAR_5->prime_len) {
  FUNC_9(VAR_1,
      "DPP: Unexpected JWK x length %u (expected %u for curve %s)",
      (unsigned int) FUNC_12(VAR_6),
      (unsigned int) VAR_5->prime_len, VAR_5->name);
  goto fail;
 }

 VAR_7 = FUNC_6(VAR_2, "y");
 if (!VAR_7) {
  FUNC_9(VAR_1, "DPP: No y in JWK");
  goto fail;
 }
 FUNC_8(VAR_1, "DPP: JWK y", VAR_7);
 if (FUNC_12(VAR_7) != VAR_5->prime_len) {
  FUNC_9(VAR_1,
      "DPP: Unexpected JWK y length %u (expected %u for curve %s)",
      (unsigned int) FUNC_12(VAR_7),
      (unsigned int) VAR_5->prime_len, VAR_5->name);
  goto fail;
 }

 VAR_8 = FUNC_1(FUNC_2(VAR_5->name));
 if (!VAR_8) {
  FUNC_9(VAR_1, "DPP: Could not prepare group for JWK");
  goto fail;
 }

 VAR_9 = FUNC_4(VAR_8, FUNC_11(VAR_6), FUNC_11(VAR_7),
       FUNC_12(VAR_6));
 FUNC_0(VAR_8);
 *VAR_3 = VAR_5;

fail:
 FUNC_10(VAR_6);
 FUNC_10(VAR_7);

 return VAR_9;
}
