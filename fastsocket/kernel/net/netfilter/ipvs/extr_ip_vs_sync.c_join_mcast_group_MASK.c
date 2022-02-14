
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_bound_dev_if; } ;
struct net_device {scalar_t__ ifindex; } ;
struct ip_mreqn {scalar_t__ imr_ifindex; int imr_multiaddr; } ;
struct in_addr {int dummy; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,struct ip_mreqn*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,struct in_addr*,int) ;
 int FUNC_4 (struct ip_mreqn*,int ,int) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int
FUNC_6(struct sock *VAR_3, struct in_addr *VAR_4, char *VAR_5)
{
 struct ip_mreqn VAR_6;
 struct net_device *VAR_7;
 int VAR_8;

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(&VAR_6.imr_multiaddr, VAR_4, sizeof(struct in_addr));

 if ((VAR_7 = FUNC_0(&VAR_2, VAR_5)) == ((void*)0))
  return -VAR_1;
 if (VAR_3->sk_bound_dev_if && VAR_7->ifindex != VAR_3->sk_bound_dev_if)
  return -VAR_0;

 VAR_6.imr_ifindex = VAR_7->ifindex;

 FUNC_2(VAR_3);
 VAR_8 = FUNC_1(VAR_3, &VAR_6);
 FUNC_5(VAR_3);

 return VAR_8;
}
