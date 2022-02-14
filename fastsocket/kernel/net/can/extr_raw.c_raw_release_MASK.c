
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct raw_sock {int count; scalar_t__ bound; scalar_t__ ifindex; int filter; int notifier; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct net_device*,struct sock*) ;
 struct raw_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;
 struct raw_sock *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_5(VAR_2);

 FUNC_9(&VAR_3->notifier);

 FUNC_3(VAR_2);


 if (VAR_3->bound) {
  if (VAR_3->ifindex) {
   struct net_device *VAR_4;

   VAR_4 = FUNC_0(&VAR_0, VAR_3->ifindex);
   if (VAR_4) {
    FUNC_4(VAR_4, VAR_2);
    FUNC_1(VAR_4);
   }
  } else
   FUNC_4(((void*)0), VAR_2);
 }

 if (VAR_3->count > 1)
  FUNC_2(VAR_3->filter);

 VAR_3->ifindex = 0;
 VAR_3->bound = 0;
 VAR_3->count = 0;

 FUNC_7(VAR_2);
 VAR_1->sk = ((void*)0);

 FUNC_6(VAR_2);
 FUNC_8(VAR_2);

 return 0;
}
