
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct TYPE_7__ {int proto; int frag; int ttl; int tos; } ;
struct TYPE_5__ {int dst; int src; } ;
struct TYPE_6__ {int label; TYPE_1__ addr; } ;
struct sw_flow_key {TYPE_3__ ip; TYPE_2__ ipv6; } ;
struct sk_buff {int * data; } ;
struct ipv6hdr {int daddr; int saddr; int hop_limit; int nexthdr; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_8__ {int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int,int *,int*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6, struct sw_flow_key *VAR_7,
    int *VAR_8)
{
 unsigned int VAR_9 = FUNC_7(VAR_6);
 unsigned int VAR_10;
 int VAR_11;
 struct ipv6hdr *VAR_12;
 uint8_t VAR_13;
 __be16 VAR_14;
 int VAR_15;

 *VAR_8 = FUNC_0(VAR_5);

 VAR_15 = FUNC_1(VAR_6, VAR_9 + sizeof(*VAR_12));
 if (FUNC_9(VAR_15))
  return VAR_15;

 VAR_12 = FUNC_5(VAR_6);
 VAR_13 = VAR_12->nexthdr;
 VAR_11 = (u8 *)(VAR_12 + 1) - VAR_6->data;

 VAR_7->ip.proto = VAR_2;
 VAR_7->ip.tos = FUNC_4(VAR_12);
 VAR_7->ip.ttl = VAR_12->hop_limit;
 VAR_7->ipv6.label = *(__be32 *)VAR_12 & FUNC_2(VAR_1);
 VAR_7->ipv6.addr.src = VAR_12->saddr;
 VAR_7->ipv6.addr.dst = VAR_12->daddr;

 VAR_11 = FUNC_6(VAR_6, VAR_11, &VAR_13, &VAR_14);
 if (FUNC_9(VAR_11 < 0))
  return -VAR_0;

 if (VAR_14) {
  if (VAR_14 & FUNC_3(~0x7))
   VAR_7->ip.frag = VAR_4;
  else
   VAR_7->ip.frag = VAR_3;
 }

 VAR_10 = VAR_11 - VAR_9;
 FUNC_8(VAR_6, VAR_9 + VAR_10);
 VAR_7->ip.proto = VAR_13;
 return VAR_10;
}
