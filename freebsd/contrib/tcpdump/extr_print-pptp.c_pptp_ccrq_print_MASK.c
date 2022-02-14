
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_ccrq {int reserved1; int call_id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_1,
                const u_char *VAR_2)
{
 const struct pptp_msg_ccrq *VAR_3 = (const struct pptp_msg_ccrq *)VAR_2;

 FUNC_1(VAR_3->call_id);
 FUNC_2(VAR_1, &VAR_3->call_id);
 FUNC_1(VAR_3->reserved1);

 return;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
}
