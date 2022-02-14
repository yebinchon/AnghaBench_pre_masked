
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip6_flowlabel {struct ip6_flowlabel* next; int users; struct net* fl_net; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ip6_flowlabel*) ;
 struct ip6_flowlabel** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_3);
 for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
  struct ip6_flowlabel *VAR_6, **VAR_7;
  VAR_7 = &VAR_1[VAR_5];
  while ((VAR_6 = *VAR_7) != ((void*)0)) {
   if (VAR_6->fl_net == VAR_4 && FUNC_1(&VAR_6->users) == 0) {
    *VAR_7 = VAR_6->next;
    FUNC_2(VAR_6);
    FUNC_0(&VAR_2);
    continue;
   }
   VAR_7 = &VAR_6->next;
  }
 }
 FUNC_4(&VAR_3);
}
