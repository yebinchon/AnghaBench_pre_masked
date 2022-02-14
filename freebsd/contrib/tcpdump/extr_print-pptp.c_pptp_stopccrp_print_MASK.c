
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pptp_msg_stopccrp {int reserved1; int err_code; int result_code; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_2,
                    const u_char *VAR_3)
{
 const struct pptp_msg_stopccrp *VAR_4 = (const struct pptp_msg_stopccrp *)VAR_3;

 FUNC_1(VAR_4->result_code);
 FUNC_3(VAR_2, &VAR_4->result_code, VAR_0);
 FUNC_1(VAR_4->err_code);
 FUNC_2(VAR_2, &VAR_4->err_code);
 FUNC_1(VAR_4->reserved1);

 return;

trunc:
 FUNC_0((VAR_2, "%s", VAR_1));
}
