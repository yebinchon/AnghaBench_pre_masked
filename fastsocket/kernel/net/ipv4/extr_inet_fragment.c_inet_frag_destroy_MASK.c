
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct netns_frags {int mem; } ;
struct inet_frags {int (* destructor ) (struct inet_frag_queue*) ;scalar_t__ qsize; } ;
struct inet_frag_queue {int last_in; struct netns_frags* net; struct sk_buff* fragments; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct netns_frags*,struct inet_frags*,struct sk_buff*,int*) ;
 int FUNC_4 (struct inet_frag_queue*) ;
 int FUNC_5 (struct inet_frag_queue*) ;

void FUNC_6(struct inet_frag_queue *VAR_1, struct inet_frags *VAR_2,
     int *VAR_3)
{
 struct sk_buff *VAR_4;
 struct netns_frags *VAR_5;

 FUNC_0(!(VAR_1->last_in & VAR_0));
 FUNC_0(FUNC_2(&VAR_1->timer) != 0);


 VAR_4 = VAR_1->fragments;
 VAR_5 = VAR_1->net;
 while (VAR_4) {
  struct sk_buff *VAR_6 = VAR_4->next;

  FUNC_3(VAR_5, VAR_2, VAR_4, VAR_3);
  VAR_4 = VAR_6;
 }

 if (VAR_3)
  *VAR_3 -= VAR_2->qsize;
 FUNC_1(VAR_2->qsize, &VAR_5->mem);

 if (VAR_2->destructor)
  VAR_2->destructor(VAR_1);
 FUNC_4(VAR_1);

}
