
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_sndbuf; int sk_wmem_alloc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct sock *VAR_0)
{
 return (FUNC_0(&VAR_0->sk_wmem_alloc) << 2) <= VAR_0->sk_sndbuf;
}
