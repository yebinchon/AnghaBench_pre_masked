
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_icrq {int * subaddr; int * dialing_no; int * dialed_no; int * dialing_no_len; int * dialed_no_len; int * phy_chan_id; int * bearer_type; int * call_ser; int * call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_8(netdissect_options *VAR_1,
                const u_char *VAR_2)
{
 const struct pptp_msg_icrq *VAR_3 = (const struct pptp_msg_icrq *)VAR_2;

 FUNC_2(VAR_3->call_id);
 FUNC_4(VAR_1, &VAR_3->call_id);
 FUNC_2(VAR_3->call_ser);
 FUNC_5(VAR_1, &VAR_3->call_ser);
 FUNC_2(VAR_3->bearer_type);
 FUNC_3(VAR_1, &VAR_3->bearer_type);
 FUNC_2(VAR_3->phy_chan_id);
 FUNC_6(VAR_1, &VAR_3->phy_chan_id);
 FUNC_2(VAR_3->dialed_no_len);
 FUNC_1((VAR_1, " DIALED_NO_LEN(%u)", FUNC_0(&VAR_3->dialed_no_len)));
 FUNC_2(VAR_3->dialing_no_len);
 FUNC_1((VAR_1, " DIALING_NO_LEN(%u)", FUNC_0(&VAR_3->dialing_no_len)));
 FUNC_2(VAR_3->dialed_no);
 FUNC_1((VAR_1, " DIALED_NO(%.64s)", VAR_3->dialed_no));
 FUNC_2(VAR_3->dialing_no);
 FUNC_1((VAR_1, " DIALING_NO(%.64s)", VAR_3->dialing_no));
 FUNC_2(VAR_3->subaddr);
 FUNC_7(VAR_1, &VAR_3->subaddr[0]);

 return;

trunc:
 FUNC_1((VAR_1, "%s", VAR_0));
}
