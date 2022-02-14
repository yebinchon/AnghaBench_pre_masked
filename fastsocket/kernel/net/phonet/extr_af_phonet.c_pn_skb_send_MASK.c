
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sockaddr_pn {int dummy; } ;
struct sock {scalar_t__ sk_bound_dev_if; } ;
struct sk_buff {int dummy; } ;
struct pn_sock {int sobject; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct net_device*,scalar_t__) ;
 struct net_device* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct sk_buff*,struct net_device*,int ,int ,int ,int ) ;
 struct pn_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct sockaddr_pn const*) ;
 int FUNC_11 (struct sockaddr_pn const*) ;
 int FUNC_12 (struct sockaddr_pn const*) ;
 int FUNC_13 (struct sock*) ;

int FUNC_14(struct sock *VAR_3, struct sk_buff *VAR_4,
  const struct sockaddr_pn *VAR_5)
{
 struct net_device *VAR_6;
 struct pn_sock *VAR_7 = FUNC_9(VAR_3);
 int VAR_8;
 u16 VAR_9;
 u8 VAR_10 = FUNC_10(VAR_5), VAR_11 = VAR_2;

 VAR_8 = -VAR_0;
 if (VAR_3->sk_bound_dev_if)
  VAR_6 = FUNC_0(FUNC_13(VAR_3), VAR_3->sk_bound_dev_if);
 else
  VAR_6 = FUNC_4(FUNC_13(VAR_3));
 if (!VAR_6 || !(VAR_6->flags & VAR_1))
  goto drop;

 VAR_11 = FUNC_3(VAR_6, VAR_10);
 if (VAR_11 == VAR_2)
  goto drop;

 VAR_9 = VAR_7->sobject;
 if (!FUNC_5(VAR_9))
  VAR_9 = FUNC_7(VAR_11, FUNC_6(VAR_9));

 VAR_8 = FUNC_8(VAR_4, VAR_6, FUNC_11(VAR_5),
   VAR_9, FUNC_12(VAR_5), 0);
 FUNC_1(VAR_6);
 return VAR_8;

drop:
 FUNC_2(VAR_4);
 if (VAR_6)
  FUNC_1(VAR_6);
 return VAR_8;
}
