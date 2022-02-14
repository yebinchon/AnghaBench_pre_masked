
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ truesize; } ;
struct netns_frags {int mem; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static __inline__ void FUNC_2(struct netns_frags *VAR_0,
  struct sk_buff *VAR_1, int *VAR_2)
{
 if (VAR_2)
  *VAR_2 -= VAR_1->truesize;
 FUNC_0(VAR_1->truesize, &VAR_0->mem);
 FUNC_1(VAR_1);
}
