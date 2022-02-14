
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_token {scalar_t__ type; int string; } ;
struct dpp_authentication {int psk_set; int * passphrase; int akm; int psk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 struct json_token* FUNC_3 (struct json_token*,char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,size_t) ;
 int FUNC_7 (int ,char*,int ,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct dpp_authentication *VAR_3,
     struct json_token *VAR_4)
{
 struct json_token *VAR_5, *VAR_6;

 FUNC_8(VAR_1, "DPP: Legacy akm=psk credential");

 VAR_5 = FUNC_3(VAR_4, "pass");
 VAR_6 = FUNC_3(VAR_4, "psk_hex");

 if (VAR_5 && VAR_5->type == VAR_0) {
  size_t VAR_7 = FUNC_5(VAR_5->string);

  FUNC_6(VAR_1, "DPP: Legacy passphrase",
          VAR_5->string, VAR_7);
  if (VAR_7 < 8 || VAR_7 > 63)
   return -1;
  FUNC_4(VAR_3->passphrase, VAR_5->string,
      sizeof(VAR_3->passphrase));
 } else if (VAR_6 && VAR_6->type == VAR_0) {
  if (FUNC_1(VAR_3->akm) && !FUNC_0(VAR_3->akm)) {
   FUNC_8(VAR_1,
       "DPP: Unexpected psk_hex with akm=sae");
   return -1;
  }
  if (FUNC_5(VAR_6->string) != VAR_2 * 2 ||
      FUNC_2(VAR_6->string, VAR_3->psk, VAR_2) < 0) {
   FUNC_8(VAR_1, "DPP: Invalid psk_hex encoding");
   return -1;
  }
  FUNC_7(VAR_1, "DPP: Legacy PSK",
    VAR_3->psk, VAR_2);
  VAR_3->psk_set = 1;
 } else {
  FUNC_8(VAR_1, "DPP: No pass or psk_hex strings found");
  return -1;
 }

 if (FUNC_1(VAR_3->akm) && !VAR_3->passphrase[0]) {
  FUNC_8(VAR_1, "DPP: No pass for sae found");
  return -1;
 }

 return 0;
}
