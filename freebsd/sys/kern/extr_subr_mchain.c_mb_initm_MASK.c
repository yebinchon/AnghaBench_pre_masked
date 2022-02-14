
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mbchain {int mb_mleft; struct mbuf* mb_cur; struct mbuf* mb_top; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct mbchain*,int) ;

void
FUNC_2(struct mbchain *VAR_0, struct mbuf *VAR_1)
{
 FUNC_1(VAR_0, sizeof(*VAR_0));
 VAR_0->mb_top = VAR_0->mb_cur = VAR_1;
 VAR_0->mb_mleft = FUNC_0(VAR_1);
}
