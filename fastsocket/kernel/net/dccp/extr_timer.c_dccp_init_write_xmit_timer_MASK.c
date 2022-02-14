
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct dccp_sock {int dccps_xmit_timer; } ;


 struct dccp_sock* FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1)
{
 struct dccp_sock *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->dccps_xmit_timer, VAR_0,
   (unsigned long)VAR_1);
}
