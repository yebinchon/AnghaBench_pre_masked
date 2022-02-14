
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_proto {int (* rcv ) (struct stp_proto const*,struct sk_buff*,struct net_device*) ;int group_address; } ;
struct sk_buff {int dummy; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct llc_pdu_un {scalar_t__ ssap; scalar_t__ dsap; scalar_t__ ctrl_1; } ;
struct ethhdr {scalar_t__* h_dest; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 struct ethhdr* FUNC_1 (struct sk_buff*) ;
 int * VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 struct llc_pdu_un* FUNC_3 (struct sk_buff*) ;
 struct stp_proto* FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (struct stp_proto const*,struct sk_buff*,struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct net_device *VAR_7,
         struct packet_type *VAR_8, struct net_device *VAR_9)
{
 const struct ethhdr *VAR_10 = FUNC_1(VAR_6);
 const struct llc_pdu_un *VAR_11 = FUNC_3(VAR_6);
 const struct stp_proto *VAR_12;

 if (VAR_11->ssap != VAR_3 ||
     VAR_11->dsap != VAR_3 ||
     VAR_11->ctrl_1 != VAR_2)
  goto err;

 if (VAR_10->h_dest[5] >= VAR_1 && VAR_10->h_dest[5] <= VAR_0) {
  VAR_12 = FUNC_4(VAR_4[VAR_10->h_dest[5] -
          VAR_1]);
  if (VAR_12 &&
      FUNC_0(VAR_10->h_dest, VAR_12->group_address))
   goto err;
 } else
  VAR_12 = FUNC_4(VAR_5);

 if (!VAR_12)
  goto err;

 VAR_12->rcv(VAR_12, VAR_6, VAR_7);
 return 0;

err:
 FUNC_2(VAR_6);
 return 0;
}
