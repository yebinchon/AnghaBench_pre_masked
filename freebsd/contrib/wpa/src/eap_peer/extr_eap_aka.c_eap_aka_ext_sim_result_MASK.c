
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_peer_config {char* external_sim_resp; } ;
struct eap_aka_data {int res_len; int res; int ck; int ik; int rand; int auts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_6, struct eap_aka_data *VAR_7,
      struct eap_peer_config *VAR_8)
{
 char *VAR_9, *VAR_10;

 FUNC_6(VAR_5,
     "EAP-AKA: Use result from external USIM processing");

 VAR_9 = VAR_8->external_sim_resp;
 VAR_8->external_sim_resp = ((void*)0);

 if (FUNC_3(VAR_9, "UMTS-AUTS:", 10) == 0) {
  VAR_10 = VAR_9 + 10;
  if (FUNC_0(VAR_10, VAR_7->auts, VAR_0) < 0)
   goto invalid;
  FUNC_5(VAR_5, "EAP-AKA: AUTS", VAR_7->auts,
    VAR_0);
  FUNC_1(VAR_9);
  return -2;
 }

 if (FUNC_3(VAR_9, "UMTS-AUTH:", 10) != 0) {
  FUNC_6(VAR_5, "EAP-AKA: Unrecognized external USIM processing response");
  FUNC_1(VAR_9);
  return -1;
 }

 VAR_10 = VAR_9 + 10;
 FUNC_4(VAR_5, "EAP-AKA: RAND", VAR_7->rand, VAR_3);

 if (FUNC_0(VAR_10, VAR_7->ik, VAR_2) < 0)
  goto invalid;
 FUNC_5(VAR_5, "EAP-AKA: IK", VAR_7->ik, VAR_2);
 VAR_10 += VAR_2 * 2;
 if (*VAR_10 != ':')
  goto invalid;
 VAR_10++;

 if (FUNC_0(VAR_10, VAR_7->ck, VAR_1) < 0)
  goto invalid;
 FUNC_5(VAR_5, "EAP-AKA: CK", VAR_7->ck, VAR_1);
 VAR_10 += VAR_1 * 2;
 if (*VAR_10 != ':')
  goto invalid;
 VAR_10++;

 VAR_7->res_len = FUNC_2(VAR_10) / 2;
 if (VAR_7->res_len > VAR_4) {
  VAR_7->res_len = 0;
  goto invalid;
 }
 if (FUNC_0(VAR_10, VAR_7->res, VAR_7->res_len) < 0)
  goto invalid;
 FUNC_5(VAR_5, "EAP-AKA: RES", VAR_7->res, VAR_7->res_len);

 FUNC_1(VAR_9);
 return 0;

invalid:
 FUNC_6(VAR_5, "EAP-AKA: Invalid external USIM processing UMTS-AUTH response");
 FUNC_1(VAR_9);
 return -1;
}
