
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_port {scalar_t__ usr_handle; } ;
struct sock {int sk_sleep; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tipc_port *VAR_0)
{
 struct sock *VAR_1 = (struct sock *)VAR_0->usr_handle;

 if (FUNC_0(VAR_1->sk_sleep))
  FUNC_1(VAR_1->sk_sleep);
}
