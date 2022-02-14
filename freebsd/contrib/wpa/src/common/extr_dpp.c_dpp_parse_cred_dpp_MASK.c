
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {scalar_t__ type; char* string; } ;
struct dpp_signed_connector_info {int payload; int payload_len; } ;
struct dpp_curve_params {int dummy; } ;
struct dpp_authentication {int connector; int akm; } ;
typedef int info ;
typedef int EVP_PKEY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dpp_authentication*,int *) ;
 int FUNC_4 (struct dpp_authentication*) ;
 int FUNC_5 (char*,int *) ;
 scalar_t__ FUNC_6 (struct dpp_authentication*,int ,int ) ;
 scalar_t__ FUNC_7 (struct dpp_authentication*,struct json_token*) ;
 int * FUNC_8 (struct json_token*,struct dpp_curve_params const**) ;
 scalar_t__ FUNC_9 (struct dpp_signed_connector_info*,int *,char const*) ;
 struct json_token* FUNC_10 (struct json_token*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct dpp_signed_connector_info*,int ,int) ;
 scalar_t__ FUNC_13 (char const*,char) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,char*,char*,int ) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static int FUNC_18(struct dpp_authentication *VAR_4,
         struct json_token *VAR_5)
{
 struct dpp_signed_connector_info VAR_6;
 struct json_token *VAR_7, *VAR_8;
 int VAR_9 = -1;
 EVP_PKEY *VAR_10 = ((void*)0);
 const struct dpp_curve_params *VAR_11 = ((void*)0);
 const char *VAR_12;

 FUNC_12(&VAR_6, 0, sizeof(VAR_6));

 if (FUNC_1(VAR_4->akm) || FUNC_2(VAR_4->akm)) {
  FUNC_17(VAR_3,
      "DPP: Legacy credential included in Connector credential");
  if (FUNC_7(VAR_4, VAR_5) < 0)
   return -1;
 }

 FUNC_17(VAR_3, "DPP: Connector credential");

 VAR_8 = FUNC_10(VAR_5, "csign");
 if (!VAR_8 || VAR_8->type != VAR_1) {
  FUNC_17(VAR_3, "DPP: No csign JWK in JSON");
  goto fail;
 }

 VAR_10 = FUNC_8(VAR_8, &VAR_11);
 if (!VAR_10) {
  FUNC_17(VAR_3, "DPP: Failed to parse csign JWK");
  goto fail;
 }
 FUNC_5("DPP: Received C-sign-key", VAR_10);

 VAR_7 = FUNC_10(VAR_5, "signedConnector");
 if (!VAR_7 || VAR_7->type != VAR_2) {
  FUNC_17(VAR_3, "DPP: No signedConnector string found");
  goto fail;
 }
 FUNC_16(VAR_3, "DPP: signedConnector",
     VAR_7->string, FUNC_15(VAR_7->string));
 VAR_12 = VAR_7->string;

 if (FUNC_13(VAR_12, '"') ||
     FUNC_13(VAR_12, '\n')) {
  FUNC_17(VAR_3,
      "DPP: Unexpected character in signedConnector");
  goto fail;
 }

 if (FUNC_9(&VAR_6, VAR_10,
      VAR_12) != VAR_0)
  goto fail;

 if (FUNC_6(VAR_4, VAR_6.payload, VAR_6.payload_len) < 0) {
  FUNC_17(VAR_3, "DPP: Failed to parse connector");
  goto fail;
 }

 FUNC_11(VAR_4->connector);
 VAR_4->connector = FUNC_14(VAR_12);

 FUNC_3(VAR_4, VAR_10);
 FUNC_4(VAR_4);

 VAR_9 = 0;
fail:
 FUNC_0(VAR_10);
 FUNC_11(VAR_6.payload);
 return VAR_9;
}
