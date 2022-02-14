
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ieee802154 {scalar_t__ family; int addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct ieee802154_addr {int dummy; } ;
struct dgram_sock {int bound; int src_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct dgram_sock* FUNC_1 (struct sock*) ;
 struct net_device* FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct sockaddr_ieee802154 *VAR_7 = (struct sockaddr_ieee802154 *)VAR_5;
 struct dgram_sock *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = -VAR_2;
 struct net_device *VAR_10;

 FUNC_3(VAR_4);

 VAR_8->bound = 0;

 if (VAR_6 < sizeof(*VAR_7))
  goto out;

 if (VAR_7->family != VAR_0)
  goto out;

 VAR_10 = FUNC_2(FUNC_6(VAR_4), &VAR_7->addr);
 if (!VAR_10) {
  VAR_9 = -VAR_3;
  goto out;
 }

 if (VAR_10->type != VAR_1) {
  VAR_9 = -VAR_3;
  goto out_put;
 }

 FUNC_4(&VAR_8->src_addr, &VAR_7->addr, sizeof(struct ieee802154_addr));

 VAR_8->bound = 1;
 VAR_9 = 0;
out_put:
 FUNC_0(VAR_10);
out:
 FUNC_5(VAR_4);

 return VAR_9;
}
