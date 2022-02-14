
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,unsigned int) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_0, unsigned int VAR_1)
{
 if (FUNC_0(&VAR_0->sk_rmem_alloc) > VAR_0->sk_rcvbuf ||
     !FUNC_1(VAR_0, VAR_1)) {

  if (FUNC_3(VAR_0) < 0)
   return -1;

  if (!FUNC_1(VAR_0, VAR_1)) {
   if (!FUNC_2(VAR_0))
    return -1;

   if (!FUNC_1(VAR_0, VAR_1))
    return -1;
  }
 }
 return 0;
}
