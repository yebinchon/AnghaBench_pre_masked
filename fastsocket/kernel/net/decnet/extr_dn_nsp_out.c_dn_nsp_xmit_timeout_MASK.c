
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {int persist; int other_xmit_queue; int data_xmit_queue; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct sock *VAR_0)
{
 struct dn_scp *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 if (!FUNC_3(&VAR_1->data_xmit_queue) ||
     !FUNC_3(&VAR_1->other_xmit_queue))
  VAR_1->persist = FUNC_2(VAR_0);

 return 0;
}
