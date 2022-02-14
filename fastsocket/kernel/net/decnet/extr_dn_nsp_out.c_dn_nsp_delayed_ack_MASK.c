
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {scalar_t__ ackxmt_oth; scalar_t__ numoth_rcv; scalar_t__ ackxmt_dat; scalar_t__ numdat_rcv; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_0)
{
 struct dn_scp *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ackxmt_oth != VAR_1->numoth_rcv)
  FUNC_2(VAR_0);

 if (VAR_1->ackxmt_dat != VAR_1->numdat_rcv)
  FUNC_1(VAR_0);
}
