
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {scalar_t__ ifindex; } ;
struct ip_ra_chain {struct sock* sk; struct ip_ra_chain* next; } ;
struct TYPE_4__ {scalar_t__ num; } ;
struct TYPE_3__ {scalar_t__ protocol; int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct ip_ra_chain* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct sock*) ;

int FUNC_10(struct sk_buff *VAR_6)
{
 struct ip_ra_chain *VAR_7;
 u8 VAR_8 = FUNC_4(VAR_6)->protocol;
 struct sock *VAR_9 = ((void*)0);
 struct net_device *VAR_10 = VAR_6->dev;

 FUNC_6(&VAR_5);
 for (VAR_7 = VAR_4; VAR_7; VAR_7 = VAR_7->next) {
  struct sock *VAR_11 = VAR_7->sk;




  if (VAR_11 && FUNC_2(VAR_11)->num == VAR_8 &&
      (!VAR_11->sk_bound_dev_if ||
       VAR_11->sk_bound_dev_if == VAR_10->ifindex) &&
      FUNC_9(VAR_11) == FUNC_0(VAR_10)) {
   if (FUNC_4(VAR_6)->frag_off & FUNC_1(VAR_2 | VAR_3)) {
    if (FUNC_3(VAR_6, VAR_1)) {
     FUNC_7(&VAR_5);
     return 1;
    }
   }
   if (VAR_9) {
    struct sk_buff *VAR_12 = FUNC_8(VAR_6, VAR_0);
    if (VAR_12)
     FUNC_5(VAR_9, VAR_12);
   }
   VAR_9 = VAR_11;
  }
 }

 if (VAR_9) {
  FUNC_5(VAR_9, VAR_6);
  FUNC_7(&VAR_5);
  return 1;
 }
 FUNC_7(&VAR_5);
 return 0;
}
