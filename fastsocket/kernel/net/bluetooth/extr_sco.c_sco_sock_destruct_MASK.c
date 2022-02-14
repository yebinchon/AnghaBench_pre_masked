
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; int sk_receive_queue; } ;


 int FUNC_0 (char*,struct sock*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 FUNC_0("sk %p", VAR_0);

 FUNC_1(&VAR_0->sk_receive_queue);
 FUNC_1(&VAR_0->sk_write_queue);
}
