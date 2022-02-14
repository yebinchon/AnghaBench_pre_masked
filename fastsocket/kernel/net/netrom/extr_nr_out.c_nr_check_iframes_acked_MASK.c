
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {unsigned short vs; unsigned short va; scalar_t__ n2count; } ;


 int FUNC_0 (struct sock*,unsigned short) ;
 struct nr_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0, unsigned short VAR_1)
{
 struct nr_sock *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->vs == VAR_1) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_3(VAR_0);
  VAR_2->n2count = 0;
 } else {
  if (VAR_2->va != VAR_1) {
   FUNC_0(VAR_0, VAR_1);
   FUNC_2(VAR_0);
  }
 }
}
