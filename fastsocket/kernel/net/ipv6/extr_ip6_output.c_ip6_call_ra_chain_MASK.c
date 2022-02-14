
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {TYPE_1__* dev; } ;
struct ip6_ra_chain {int sel; struct sock* sk; struct ip6_ra_chain* next; } ;
struct TYPE_2__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 struct ip6_ra_chain* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, int VAR_4)
{
 struct ip6_ra_chain *VAR_5;
 struct sock *VAR_6 = ((void*)0);

 FUNC_1(&VAR_2);
 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  struct sock *VAR_7 = VAR_5->sk;
  if (VAR_7 && VAR_5->sel == VAR_4 &&
      (!VAR_7->sk_bound_dev_if ||
       VAR_7->sk_bound_dev_if == VAR_3->dev->ifindex)) {
   if (VAR_6) {
    struct sk_buff *VAR_8 = FUNC_3(VAR_3, VAR_0);
    if (VAR_8)
     FUNC_0(VAR_6, VAR_8);
   }
   VAR_6 = VAR_7;
  }
 }

 if (VAR_6) {
  FUNC_0(VAR_6, VAR_3);
  FUNC_2(&VAR_2);
  return 1;
 }
 FUNC_2(&VAR_2);
 return 0;
}
