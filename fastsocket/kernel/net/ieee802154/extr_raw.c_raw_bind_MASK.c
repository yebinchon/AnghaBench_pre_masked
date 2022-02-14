
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ieee802154 {scalar_t__ family; int addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bound_dev_if; } ;
struct net_device {scalar_t__ type; int ifindex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct sockaddr_ieee802154 *VAR_7 = (struct sockaddr_ieee802154 *)VAR_5;
 int VAR_8 = 0;
 struct net_device *VAR_9 = ((void*)0);

 if (VAR_6 < sizeof(*VAR_7))
  return -VAR_2;

 if (VAR_7->family != VAR_0)
  return -VAR_2;

 FUNC_2(VAR_4);

 VAR_9 = FUNC_1(FUNC_5(VAR_4), &VAR_7->addr);
 if (!VAR_9) {
  VAR_8 = -VAR_3;
  goto out;
 }

 if (VAR_9->type != VAR_1) {
  VAR_8 = -VAR_3;
  goto out_put;
 }

 VAR_4->sk_bound_dev_if = VAR_9->ifindex;
 FUNC_4(VAR_4);

out_put:
 FUNC_0(VAR_9);
out:
 FUNC_3(VAR_4);

 return VAR_8;
}
