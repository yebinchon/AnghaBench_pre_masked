
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_peap_data {int * cmk; int * ipmk; int peap_version; int phase2_eap_started; scalar_t__ reauth; int phase2_success; TYPE_1__ ssl; int * key_data; } ;
typedef int isk ;
typedef int imck ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_peap_data*,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int *,int,char*,int *,int,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_1, struct eap_peap_data *VAR_2)
{
 u8 *VAR_3;
 u8 VAR_4[32], VAR_5[60];
 int VAR_6, VAR_7;





 VAR_3 = VAR_2->key_data;
 if (VAR_3 == ((void*)0))
  return -1;
 FUNC_5(VAR_0, "EAP-PEAP: TK", VAR_3, 60);

 VAR_6 = FUNC_4(VAR_1->ssl_ctx, VAR_2->ssl.conn);
 FUNC_6(VAR_0,
     "EAP-PEAP: CMK derivation - reauth=%d resumed=%d phase2_eap_started=%d phase2_success=%d",
     VAR_2->reauth, VAR_6, VAR_2->phase2_eap_started,
     VAR_2->phase2_success);
 if (VAR_2->reauth && !VAR_2->phase2_eap_started && VAR_6) {

  FUNC_2(VAR_2->ipmk, VAR_3, 40);
  FUNC_5(VAR_0, "EAP-PEAP: IPMK from TK",
    VAR_2->ipmk, 40);
  FUNC_2(VAR_2->cmk, VAR_3 + 40, 20);
  FUNC_5(VAR_0, "EAP-PEAP: CMK from TK",
    VAR_2->cmk, 20);
  return 0;
 }

 if (FUNC_0(VAR_1, VAR_2, VAR_4, sizeof(VAR_4)) < 0)
  return -1;
 FUNC_5(VAR_0, "EAP-PEAP: ISK", VAR_4, sizeof(VAR_4));
 FUNC_5(VAR_0, "EAP-PEAP: TempKey", VAR_3, 40);
 VAR_7 = FUNC_3(VAR_2->peap_version, VAR_3, 40,
      "Inner Methods Compound Keys",
      VAR_4, sizeof(VAR_4), VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_4, sizeof(VAR_4));
 if (VAR_7 < 0)
  return -1;
 FUNC_5(VAR_0, "EAP-PEAP: IMCK (IPMKj)",
   VAR_5, sizeof(VAR_5));

 FUNC_2(VAR_2->ipmk, VAR_5, 40);
 FUNC_5(VAR_0, "EAP-PEAP: IPMK (S-IPMKj)", VAR_2->ipmk, 40);
 FUNC_2(VAR_2->cmk, VAR_5 + 40, 20);
 FUNC_5(VAR_0, "EAP-PEAP: CMK (CMKj)", VAR_2->cmk, 20);
 FUNC_1(VAR_5, sizeof(VAR_5));

 return 0;
}
