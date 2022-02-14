
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ pkt_type; } ;
struct packet_type {int dummy; } ;
struct net_device {scalar_t__ addr_len; int flags; } ;
struct neighbour_cb {int dummy; } ;
struct arphdr {scalar_t__ ar_hln; int ar_pln; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct sk_buff*,struct net_device*,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct arphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_7, struct net_device *VAR_8,
     struct packet_type *VAR_9, struct net_device *VAR_10)
{
 struct arphdr *VAR_11;


 if (!FUNC_6(VAR_7, FUNC_3(VAR_8)))
  goto freeskb;

 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11->ar_hln != VAR_8->addr_len ||
     VAR_8->flags & VAR_1 ||
     VAR_7->pkt_type == VAR_5 ||
     VAR_7->pkt_type == VAR_4 ||
     VAR_11->ar_pln != 4)
  goto freeskb;

 if ((VAR_7 = FUNC_7(VAR_7, VAR_0)) == ((void*)0))
  goto out_of_mem;

 FUNC_5(FUNC_0(VAR_7), 0, sizeof(struct neighbour_cb));

 return FUNC_1(VAR_2, VAR_3, VAR_7, VAR_8, ((void*)0), VAR_6);

freeskb:
 FUNC_4(VAR_7);
out_of_mem:
 return 0;
}
