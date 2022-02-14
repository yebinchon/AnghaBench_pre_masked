
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_sim_data {size_t num_chal; int * sres; int * kc; int * rand; } ;
struct eap_peer_config {char* external_sim_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct eap_sm *VAR_4, struct eap_sim_data *VAR_5,
      struct eap_peer_config *VAR_6)
{
 char *VAR_7, *VAR_8;
 size_t VAR_9;

 FUNC_5(VAR_3,
     "EAP-SIM: Use result from external SIM processing");

 VAR_7 = VAR_6->external_sim_resp;
 VAR_6->external_sim_resp = ((void*)0);

 if (FUNC_2(VAR_7, "GSM-AUTH:", 9) != 0) {
  FUNC_5(VAR_3, "EAP-SIM: Unrecognized external SIM processing response");
  FUNC_1(VAR_7);
  return -1;
 }

 VAR_8 = VAR_7 + 9;
 for (VAR_9 = 0; VAR_9 < VAR_5->num_chal; VAR_9++) {
  FUNC_3(VAR_3, "EAP-SIM: RAND",
       VAR_5->rand[VAR_9], VAR_2);

  if (FUNC_0(VAR_8, VAR_5->kc[VAR_9], VAR_0) < 0)
   goto invalid;
  FUNC_4(VAR_3, "EAP-SIM: Kc",
    VAR_5->kc[VAR_9], VAR_0);
  VAR_8 += VAR_0 * 2;
  if (*VAR_8 != ':')
   goto invalid;
  VAR_8++;

  if (FUNC_0(VAR_8, VAR_5->sres[VAR_9], VAR_1) < 0)
   goto invalid;
  FUNC_4(VAR_3, "EAP-SIM: SRES",
    VAR_5->sres[VAR_9], VAR_1);
  VAR_8 += VAR_1 * 2;
  if (VAR_9 + 1 < VAR_5->num_chal) {
   if (*VAR_8 != ':')
    goto invalid;
   VAR_8++;
  }
 }

 FUNC_1(VAR_7);
 return 0;

invalid:
 FUNC_5(VAR_3, "EAP-SIM: Invalid external SIM processing GSM-AUTH response");
 FUNC_1(VAR_7);
 return -1;
}
