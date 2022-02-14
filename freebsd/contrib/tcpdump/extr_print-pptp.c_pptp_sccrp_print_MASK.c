
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_sccrp {int * vendor; int * hostname; int * firm_rev; int * max_channel; int * bearer_cap; int * framing_cap; int * err_code; int * result_code; int * proto_ver; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int **,int ) ;
 int FUNC_10 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11(netdissect_options *VAR_2,
                 const u_char *VAR_3)
{
 const struct pptp_msg_sccrp *VAR_4 = (const struct pptp_msg_sccrp *)VAR_3;

 FUNC_1(VAR_4->proto_ver);
 FUNC_8(VAR_2, &VAR_4->proto_ver);
 FUNC_1(VAR_4->result_code);
 FUNC_9(VAR_2, &VAR_4->result_code, VAR_0);
 FUNC_1(VAR_4->err_code);
 FUNC_3(VAR_2, &VAR_4->err_code);
 FUNC_1(VAR_4->framing_cap);
 FUNC_5(VAR_2, &VAR_4->framing_cap);
 FUNC_1(VAR_4->bearer_cap);
 FUNC_2(VAR_2, &VAR_4->bearer_cap);
 FUNC_1(VAR_4->max_channel);
 FUNC_7(VAR_2, &VAR_4->max_channel);
 FUNC_1(VAR_4->firm_rev);
 FUNC_4(VAR_2, &VAR_4->firm_rev);
 FUNC_1(VAR_4->hostname);
 FUNC_6(VAR_2, &VAR_4->hostname[0]);
 FUNC_1(VAR_4->vendor);
 FUNC_10(VAR_2, &VAR_4->vendor[0]);

 return;

trunc:
 FUNC_0((VAR_2, "%s", VAR_1));
}
