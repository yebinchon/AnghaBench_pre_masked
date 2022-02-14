
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct request_sock {int secid; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct request_sock*,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct netlbl_lsm_secattr*) ;
 int FUNC_3 (int ,struct netlbl_lsm_secattr*) ;

int FUNC_4(struct request_sock *VAR_1, u16 VAR_2)
{
 int VAR_3;
 struct netlbl_lsm_secattr VAR_4;

 if (VAR_2 != VAR_0)
  return 0;

 FUNC_2(&VAR_4);
 VAR_3 = FUNC_3(VAR_1->secid, &VAR_4);
 if (VAR_3 != 0)
  goto inet_conn_request_return;
 VAR_3 = FUNC_0(VAR_1, &VAR_4);
inet_conn_request_return:
 FUNC_1(&VAR_4);
 return VAR_3;
}
