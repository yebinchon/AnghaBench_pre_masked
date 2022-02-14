
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xt_match_param {struct ebt_ip_info* matchinfo; } ;
struct tcpudphdr {scalar_t__ tos; int saddr; int daddr; scalar_t__ protocol; int ihl; int src; int dst; int frag_off; } ;
struct sk_buff {int dummy; } ;
struct iphdr {scalar_t__ tos; int saddr; int daddr; scalar_t__ protocol; int ihl; int src; int dst; int frag_off; } ;
struct ebt_ip_info {int bitmask; scalar_t__ tos; int smsk; int saddr; int dmsk; int daddr; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; } ;
typedef int _ports ;
typedef int _iph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct tcpudphdr* FUNC_2 (struct sk_buff const*,int,int,struct tcpudphdr*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_7, const struct xt_match_param *VAR_8)
{
 const struct ebt_ip_info *VAR_9 = VAR_8->matchinfo;
 const struct iphdr *VAR_10;
 struct iphdr VAR_11;
 const struct tcpudphdr *VAR_12;
 struct tcpudphdr VAR_13;

 VAR_10 = FUNC_2(VAR_7, 0, sizeof(VAR_11), &VAR_11);
 if (VAR_10 == ((void*)0))
  return 0;
 if (VAR_9->bitmask & VAR_5 &&
    FUNC_0(VAR_9->tos != VAR_10->tos, VAR_5))
  return 0;
 if (VAR_9->bitmask & VAR_3 &&
    FUNC_0((VAR_10->saddr & VAR_9->smsk) !=
    VAR_9->saddr, VAR_3))
  return 0;
 if ((VAR_9->bitmask & VAR_0) &&
    FUNC_0((VAR_10->daddr & VAR_9->dmsk) !=
    VAR_9->daddr, VAR_0))
  return 0;
 if (VAR_9->bitmask & VAR_2) {
  if (FUNC_0(VAR_9->protocol != VAR_10->protocol, VAR_2))
   return 0;
  if (!(VAR_9->bitmask & VAR_1) &&
      !(VAR_9->bitmask & VAR_4))
   return 1;
  if (FUNC_1(VAR_10->frag_off) & VAR_6)
   return 0;
  VAR_12 = FUNC_2(VAR_7, VAR_10->ihl*4,
       sizeof(VAR_13), &VAR_13);
  if (VAR_12 == ((void*)0))
   return 0;
  if (VAR_9->bitmask & VAR_1) {
   u32 VAR_14 = FUNC_1(VAR_12->dst);
   if (FUNC_0(VAR_14 < VAR_9->dport[0] ||
      VAR_14 > VAR_9->dport[1],
      VAR_1))
   return 0;
  }
  if (VAR_9->bitmask & VAR_4) {
   u32 VAR_15 = FUNC_1(VAR_12->src);
   if (FUNC_0(VAR_15 < VAR_9->sport[0] ||
      VAR_15 > VAR_9->sport[1],
      VAR_4))
   return 0;
  }
 }
 return 1;
}
