
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_bound_dev_if; } ;
struct net_device {scalar_t__ ifindex; } ;
struct inet_sock {scalar_t__ mc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int *,char*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int VAR_2 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3, char *VAR_4)
{
 struct net_device *VAR_5;
 struct inet_sock *VAR_6 = FUNC_1(VAR_3);

 if ((VAR_5 = FUNC_0(&VAR_2, VAR_4)) == ((void*)0))
  return -VAR_1;

 if (VAR_3->sk_bound_dev_if && VAR_5->ifindex != VAR_3->sk_bound_dev_if)
  return -VAR_0;

 FUNC_2(VAR_3);
 VAR_6->mc_index = VAR_5->ifindex;

 FUNC_3(VAR_3);

 return 0;
}
