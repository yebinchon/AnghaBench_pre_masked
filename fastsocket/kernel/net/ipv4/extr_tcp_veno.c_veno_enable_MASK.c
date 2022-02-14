
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veno {int doing_veno_now; int minrtt; } ;
struct sock {int dummy; } ;


 struct veno* FUNC_0 (struct sock*) ;

__attribute__((used)) static inline void FUNC_1(struct sock *VAR_0)
{
 struct veno *VAR_1 = FUNC_0(VAR_0);


 VAR_1->doing_veno_now = 1;

 VAR_1->minrtt = 0x7fffffff;
}
