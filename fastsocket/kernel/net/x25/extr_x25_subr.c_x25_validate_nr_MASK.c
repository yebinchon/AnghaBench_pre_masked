
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {unsigned short va; unsigned short vs; TYPE_1__* neighbour; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct x25_sock* FUNC_0 (struct sock*) ;

int FUNC_1(struct sock *VAR_2, unsigned short VAR_3)
{
 struct x25_sock *VAR_4 = FUNC_0(VAR_2);
 unsigned short VAR_5 = VAR_4->va;
 int VAR_6 = VAR_4->neighbour->extended ? VAR_0 : VAR_1;

 while (VAR_5 != VAR_4->vs) {
  if (VAR_3 == VAR_5)
   return 1;
  VAR_5 = (VAR_5 + 1) % VAR_6;
 }

 return VAR_3 == VAR_4->vs ? 1 : 0;
}
