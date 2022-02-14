
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mbchain {struct mbuf* mb_top; } ;



struct mbuf *
FUNC_0(struct mbchain *VAR_0)
{
 struct mbuf *VAR_1;

 VAR_1 = VAR_0->mb_top;
 VAR_0->mb_top = ((void*)0);
 return (VAR_1);
}
