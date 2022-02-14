
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nr_sock {unsigned short va; int ack_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nr_sock* FUNC_1 (struct sock*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

void FUNC_4(struct sock *VAR_1, unsigned short VAR_2)
{
 struct nr_sock *VAR_3 = FUNC_1(VAR_1);
 struct sk_buff *VAR_4;




 if (VAR_3->va != VAR_2) {
  while (FUNC_3(&VAR_3->ack_queue) != ((void*)0) && VAR_3->va != VAR_2) {
   VAR_4 = FUNC_2(&VAR_3->ack_queue);
   FUNC_0(VAR_4);
   VAR_3->va = (VAR_3->va + 1) % VAR_0;
  }
 }
}
