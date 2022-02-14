
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; void* protocol; } ;
struct net_bridge {int multicast_last_member_interval; int multicast_query_response_interval; TYPE_1__* dev; } ;
struct iphdr {int version; int ihl; int tos; int ttl; int daddr; scalar_t__ saddr; int protocol; void* frag_off; scalar_t__ id; void* tot_len; } ;
struct igmphdr {int code; scalar_t__ csum; scalar_t__ group; int type; } ;
struct ethhdr {int* h_dest; void* h_proto; int h_source; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,int) ;
 struct ethhdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 struct igmphdr* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (void*,int) ;
 struct iphdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct iphdr*) ;
 int FUNC_8 (int ,int ,int) ;
 struct sk_buff* FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_14(struct net_bridge *VAR_8,
          __be32 VAR_9)
{
 struct sk_buff *VAR_10;
 struct igmphdr *VAR_11;
 struct ethhdr *VAR_12;
 struct iphdr *VAR_13;

 VAR_10 = FUNC_9(VAR_8->dev, sizeof(*VAR_12) + sizeof(*VAR_13) +
       sizeof(*VAR_11) + 4);
 if (!VAR_10)
  goto out;

 VAR_10->protocol = FUNC_3(VAR_0);

 FUNC_11(VAR_10);
 VAR_12 = FUNC_1(VAR_10);

 FUNC_8(VAR_12->h_source, VAR_8->dev->dev_addr, 6);
 VAR_12->h_dest[0] = 1;
 VAR_12->h_dest[1] = 0;
 VAR_12->h_dest[2] = 0x5e;
 VAR_12->h_dest[3] = 0;
 VAR_12->h_dest[4] = 0;
 VAR_12->h_dest[5] = 1;
 VAR_12->h_proto = FUNC_3(VAR_0);
 FUNC_10(VAR_10, sizeof(*VAR_12));

 FUNC_12(VAR_10, VAR_10->len);
 VAR_13 = FUNC_6(VAR_10);

 VAR_13->version = 4;
 VAR_13->ihl = 6;
 VAR_13->tos = 0xc0;
 VAR_13->tot_len = FUNC_3(sizeof(*VAR_13) + sizeof(*VAR_11) + 4);
 VAR_13->id = 0;
 VAR_13->frag_off = FUNC_3(VAR_7);
 VAR_13->ttl = 1;
 VAR_13->protocol = VAR_6;
 VAR_13->saddr = 0;
 VAR_13->daddr = FUNC_2(VAR_4);
 ((u8 *)&VAR_13[1])[0] = VAR_5;
 ((u8 *)&VAR_13[1])[1] = 4;
 ((u8 *)&VAR_13[1])[2] = 0;
 ((u8 *)&VAR_13[1])[3] = 0;
 FUNC_7(VAR_13);
 FUNC_10(VAR_10, 24);

 FUNC_13(VAR_10, VAR_10->len);
 VAR_11 = FUNC_4(VAR_10);
 VAR_11->type = VAR_2;
 VAR_11->code = (VAR_9 ? VAR_8->multicast_last_member_interval :
       VAR_8->multicast_query_response_interval) /
     (VAR_1 / VAR_3);
 VAR_11->group = VAR_9;
 VAR_11->csum = 0;
 VAR_11->csum = FUNC_5((void *)VAR_11, sizeof(struct igmphdr));
 FUNC_10(VAR_10, sizeof(*VAR_11));

 FUNC_0(VAR_10, sizeof(*VAR_12));

out:
 return VAR_10;
}
