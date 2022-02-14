
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sockaddr_pn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct phonethdr {int pn_length; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct net*,int ) ;
 struct sock* FUNC_5 (struct net*,struct sockaddr_pn*) ;
 struct phonethdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_8 (struct sockaddr_pn*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_1, struct net_device *VAR_2,
   struct packet_type *VAR_3,
   struct net_device *VAR_4)
{
 struct net *VAR_5 = FUNC_1(VAR_2);
 struct phonethdr *VAR_6;
 struct sockaddr_pn VAR_7;
 u16 VAR_8;


 if (!FUNC_9(VAR_1, sizeof(struct phonethdr)))
  goto out;


 VAR_6 = FUNC_6(VAR_1);
 VAR_8 = FUNC_2(&VAR_6->pn_length);
 if (VAR_8 < 2)
  goto out;
 VAR_8 -= 2;
 if ((VAR_8 > VAR_1->len) || FUNC_10(VAR_1, VAR_8))
  goto out;
 FUNC_14(VAR_1);

 FUNC_7(VAR_1, &VAR_7);


 if (FUNC_4(VAR_5, FUNC_8(&VAR_7)) == 0) {

  struct sock *VAR_9 = FUNC_5(VAR_5, &VAR_7);

  if (VAR_9)
   return FUNC_13(VAR_9, VAR_1, 0);

  if (FUNC_0(VAR_1)) {
   FUNC_11(VAR_1);
   FUNC_12(VAR_1);
  }
 }

out:
 FUNC_3(VAR_1);
 return VAR_0;
}
