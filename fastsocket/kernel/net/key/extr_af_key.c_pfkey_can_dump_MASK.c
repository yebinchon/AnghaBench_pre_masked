
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_0)
{
 if (3 * FUNC_0(&VAR_0->sk_rmem_alloc) <= 2 * VAR_0->sk_rcvbuf)
  return 1;
 return 0;
}
