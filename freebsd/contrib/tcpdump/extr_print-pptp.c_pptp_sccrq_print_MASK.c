
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_sccrq {int * vendor; int * hostname; int * firm_rev; int * max_channel; int * bearer_cap; int * framing_cap; int * reserved1; int * proto_ver; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_1,
                 const u_char *VAR_2)
{
 const struct pptp_msg_sccrq *VAR_3 = (const struct pptp_msg_sccrq *)VAR_2;

 FUNC_1(VAR_3->proto_ver);
 FUNC_7(VAR_1, &VAR_3->proto_ver);
 FUNC_1(VAR_3->reserved1);
 FUNC_1(VAR_3->framing_cap);
 FUNC_4(VAR_1, &VAR_3->framing_cap);
 FUNC_1(VAR_3->bearer_cap);
 FUNC_2(VAR_1, &VAR_3->bearer_cap);
 FUNC_1(VAR_3->max_channel);
 FUNC_6(VAR_1, &VAR_3->max_channel);
 FUNC_1(VAR_3->firm_rev);
 FUNC_3(VAR_1, &VAR_3->firm_rev);
 FUNC_1(VAR_3->hostname);
 FUNC_5(VAR_1, &VAR_3->hostname[0]);
 FUNC_1(VAR_3->vendor);
 FUNC_8(VAR_1, &VAR_3->vendor[0]);

 return;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
}
