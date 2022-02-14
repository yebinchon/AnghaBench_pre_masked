
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int old_write_space; int old_state_change; int old_data_ready; } ;
struct sock {int sk_write_space; int sk_state_change; int sk_data_ready; } ;



__attribute__((used)) static void FUNC_0(struct sock_xprt *VAR_0, struct sock *VAR_1)
{
 VAR_1->sk_data_ready = VAR_0->old_data_ready;
 VAR_1->sk_state_change = VAR_0->old_state_change;
 VAR_1->sk_write_space = VAR_0->old_write_space;
}
