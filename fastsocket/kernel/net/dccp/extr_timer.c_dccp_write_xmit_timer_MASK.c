
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_xmit_timer; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct sock *VAR_2 = (struct sock *)VAR_1;
 struct dccp_sock *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2);
 if (FUNC_5(VAR_2))
  FUNC_4(VAR_2, &VAR_3->dccps_xmit_timer, VAR_0+1);
 else
  FUNC_3(VAR_2, 0);
 FUNC_1(VAR_2);
 FUNC_6(VAR_2);
}
