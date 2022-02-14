
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdchain {TYPE_1__* md_top; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (struct mdchain*) ;
 int FUNC_1 (struct mdchain*,struct mbuf*) ;

int
FUNC_2(struct mdchain *VAR_1)
{
 struct mbuf *VAR_2;

 if (VAR_1->md_top == ((void*)0))
  return (VAR_0);
 VAR_2 = VAR_1->md_top->m_nextpkt;
 FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_1, VAR_2);
 return (0);
}
