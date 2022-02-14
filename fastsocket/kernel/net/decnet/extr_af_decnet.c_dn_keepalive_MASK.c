
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dn_scp {int other_xmit_queue; } ;


 int VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct dn_scp *VAR_2 = FUNC_0(VAR_1);






 if (FUNC_2(&VAR_2->other_xmit_queue))
  FUNC_1(VAR_1, VAR_0, 0);
}
