
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip6_flowlabel {scalar_t__ label; struct net* fl_net; struct ip6_flowlabel* next; } ;
typedef scalar_t__ __be32 ;


 size_t FUNC_0 (scalar_t__) ;
 struct ip6_flowlabel** VAR_0 ;

__attribute__((used)) static inline struct ip6_flowlabel *FUNC_1(struct net *VAR_1, __be32 VAR_2)
{
 struct ip6_flowlabel *VAR_3;

 for (VAR_3=VAR_0[FUNC_0(VAR_2)]; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->label == VAR_2 && VAR_3->fl_net == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
