
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_dst_cache; } ;
struct dn_scp {int other_receive_queue; int other_xmit_queue; int data_xmit_queue; } ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct dn_scp *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->data_xmit_queue);
 FUNC_2(&VAR_1->other_xmit_queue);
 FUNC_2(&VAR_1->other_receive_queue);

 FUNC_1(FUNC_3(&VAR_0->sk_dst_cache, ((void*)0)));
}
