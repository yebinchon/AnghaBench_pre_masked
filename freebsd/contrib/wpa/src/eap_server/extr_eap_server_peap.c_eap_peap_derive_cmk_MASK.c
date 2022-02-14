
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_peap_data {int * cmk; int * ipmk; int peap_version; TYPE_1__ ssl; } ;
typedef int isk ;
typedef int imck ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_peap_data*,int *,int) ;
 int * FUNC_1 (struct eap_sm*,TYPE_1__*,char*,int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,int *,int,char*,int *,int,int *,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct eap_sm *VAR_2, struct eap_peap_data *VAR_3)
{
 u8 *VAR_4;
 u8 VAR_5[32], VAR_6[60];
 int VAR_7;





 VAR_4 = FUNC_1(VAR_2, &VAR_3->ssl, "client EAP encryption",
           ((void*)0), 0, VAR_0);
 if (VAR_4 == ((void*)0))
  return -1;
 FUNC_7(VAR_1, "EAP-PEAP: TK", VAR_4, 60);

 if (FUNC_6(VAR_2->ssl_ctx, VAR_3->ssl.conn)) {

  FUNC_4(VAR_3->ipmk, VAR_4, 40);
  FUNC_7(VAR_1, "EAP-PEAP: IPMK from TK",
    VAR_3->ipmk, 40);
  FUNC_4(VAR_3->cmk, VAR_4 + 40, 20);
  FUNC_7(VAR_1, "EAP-PEAP: CMK from TK",
    VAR_3->cmk, 20);
  FUNC_3(VAR_4);
  return 0;
 }

 FUNC_0(VAR_3, VAR_5, sizeof(VAR_5));
 FUNC_7(VAR_1, "EAP-PEAP: ISK", VAR_5, sizeof(VAR_5));
 FUNC_7(VAR_1, "EAP-PEAP: TempKey", VAR_4, 40);
 VAR_7 = FUNC_5(VAR_3->peap_version, VAR_4, 40,
      "Inner Methods Compound Keys",
      VAR_5, sizeof(VAR_5), VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_5, sizeof(VAR_5));
 if (VAR_7 < 0) {
  FUNC_3(VAR_4);
  return -1;
 }
 FUNC_7(VAR_1, "EAP-PEAP: IMCK (IPMKj)",
   VAR_6, sizeof(VAR_6));

 FUNC_3(VAR_4);

 FUNC_4(VAR_3->ipmk, VAR_6, 40);
 FUNC_7(VAR_1, "EAP-PEAP: IPMK (S-IPMKj)", VAR_3->ipmk, 40);
 FUNC_4(VAR_3->cmk, VAR_6 + 40, 20);
 FUNC_7(VAR_1, "EAP-PEAP: CMK (CMKj)", VAR_3->cmk, 20);
 FUNC_2(VAR_6, sizeof(VAR_6));

 return 0;
}
