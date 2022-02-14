
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_sak_use_body {int lan; int oan; int olpn; int okn; int osrv_mi; int llpn; int lkn; int lsrv_mi; int delay_protect; int prx; int ptx; int orx; int otx; int lrx; int ltx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee802_1x_mka_sak_use_body*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee802_1x_mka_sak_use_body *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;


 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(VAR_0, "MACsec SAK Use parameter set");
 FUNC_3(VAR_0, "\tLatest Key AN....: %d", VAR_1->lan);
 FUNC_3(VAR_0, "\tLatest Key Tx....: %s", FUNC_4(VAR_1->ltx));
 FUNC_3(VAR_0, "\tLatest Key Rx....: %s", FUNC_4(VAR_1->lrx));
 FUNC_3(VAR_0, "\tOld Key AN.......: %d", VAR_1->oan);
 FUNC_3(VAR_0, "\tOld Key Tx.......: %s", FUNC_4(VAR_1->otx));
 FUNC_3(VAR_0, "\tOld Key Rx.......: %s", FUNC_4(VAR_1->orx));
 FUNC_3(VAR_0, "\tPlain Tx.........: %s", FUNC_4(VAR_1->ptx));
 FUNC_3(VAR_0, "\tPlain Rx.........: %s", FUNC_4(VAR_1->prx));
 FUNC_3(VAR_0, "\tDelay Protect....: %s",
     FUNC_4(VAR_1->delay_protect));
 FUNC_3(VAR_0, "\tBody Length......: %d", VAR_2);
 if (!VAR_2)
  return;

 FUNC_3(VAR_0, "\tKey Server MI....: %s", FUNC_2(VAR_1->lsrv_mi));
 FUNC_3(VAR_0, "\tKey Number.......: %u",
     FUNC_0(VAR_1->lkn));
 FUNC_3(VAR_0, "\tLowest PN........: %u",
     FUNC_0(VAR_1->llpn));
 FUNC_3(VAR_0, "\tOld Key Server MI: %s", FUNC_2(VAR_1->osrv_mi));
 FUNC_3(VAR_0, "\tOld Key Number...: %u",
     FUNC_0(VAR_1->okn));
 FUNC_3(VAR_0, "\tOld Lowest PN....: %u",
     FUNC_0(VAR_1->olpn));
}
