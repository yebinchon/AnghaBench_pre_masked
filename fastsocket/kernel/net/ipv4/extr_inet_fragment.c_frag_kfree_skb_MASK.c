
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ truesize; } ;
struct netns_frags {int mem; } ;
struct inet_frags {int (* skb_free ) (struct sk_buff*) ;} ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3(struct netns_frags *VAR_0, struct inet_frags *VAR_1,
  struct sk_buff *VAR_2, int *VAR_3)
{
 if (VAR_3)
  *VAR_3 -= VAR_2->truesize;

 FUNC_0(VAR_2->truesize, &VAR_0->mem);
 if (VAR_1->skb_free)
  VAR_1->skb_free(VAR_2);
 FUNC_1(VAR_2);
}
