
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ u32 ;
struct xt_match_param {struct ebt_ip6_info* matchinfo; } ;
struct TYPE_15__ {int* u6_addr32; } ;
struct TYPE_16__ {TYPE_6__ in6_u; } ;
struct TYPE_10__ {int* u6_addr32; } ;
struct TYPE_11__ {TYPE_1__ in6_u; } ;
struct tcpudphdr {scalar_t__ nexthdr; int src; int dst; TYPE_7__ daddr; TYPE_2__ saddr; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {scalar_t__ nexthdr; int src; int dst; TYPE_7__ daddr; TYPE_2__ saddr; } ;
struct TYPE_14__ {int* u6_addr32; } ;
struct in6_addr {TYPE_5__ in6_u; } ;
struct TYPE_17__ {int* u6_addr32; } ;
struct TYPE_18__ {TYPE_8__ in6_u; } ;
struct TYPE_12__ {int* u6_addr32; } ;
struct TYPE_13__ {TYPE_3__ in6_u; } ;
struct ebt_ip6_info {int bitmask; scalar_t__ tclass; scalar_t__ protocol; scalar_t__* dport; scalar_t__* sport; int daddr; TYPE_9__ dmsk; int saddr; TYPE_4__ smsk; } ;
typedef int _ports ;
typedef int _ip6h ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct in6_addr*,int *) ;
 scalar_t__ FUNC_2 (struct tcpudphdr const*) ;
 int FUNC_3 (struct sk_buff const*,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct tcpudphdr* FUNC_5 (struct sk_buff const*,int,int,struct tcpudphdr*) ;

__attribute__((used)) static bool
FUNC_6(const struct sk_buff *VAR_6, const struct xt_match_param *VAR_7)
{
 const struct ebt_ip6_info *VAR_8 = VAR_7->matchinfo;
 const struct ipv6hdr *VAR_9;
 struct ipv6hdr VAR_10;
 const struct tcpudphdr *VAR_11;
 struct tcpudphdr VAR_12;
 struct in6_addr VAR_13;
 int VAR_14;

 VAR_9 = FUNC_5(VAR_6, 0, sizeof(VAR_10), &VAR_10);
 if (VAR_9 == ((void*)0))
  return 0;
 if (VAR_8->bitmask & VAR_5 &&
    FUNC_0(VAR_8->tclass != FUNC_2(VAR_9), VAR_5))
  return 0;
 for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
  VAR_13.in6_u.u6_addr32[VAR_14] = VAR_9->saddr.in6_u.u6_addr32[VAR_14] &
   VAR_8->smsk.in6_u.u6_addr32[VAR_14];
 if (VAR_8->bitmask & VAR_3 &&
  FUNC_0((FUNC_1(&VAR_13, &VAR_8->saddr) != 0),
   VAR_3))
  return 0;
 for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
  VAR_13.in6_u.u6_addr32[VAR_14] = VAR_9->daddr.in6_u.u6_addr32[VAR_14] &
   VAR_8->dmsk.in6_u.u6_addr32[VAR_14];
 if (VAR_8->bitmask & VAR_0 &&
    FUNC_0((FUNC_1(&VAR_13, &VAR_8->daddr) != 0), VAR_0))
  return 0;
 if (VAR_8->bitmask & VAR_2) {
  uint8_t VAR_15 = VAR_9->nexthdr;
  int VAR_16;

  VAR_16 = FUNC_3(VAR_6, sizeof(VAR_10), &VAR_15);
  if (VAR_16 == -1)
   return 0;
  if (FUNC_0(VAR_8->protocol != VAR_15, VAR_2))
   return 0;
  if (!(VAR_8->bitmask & VAR_1) &&
      !(VAR_8->bitmask & VAR_4))
   return 1;
  VAR_11 = FUNC_5(VAR_6, VAR_16, sizeof(VAR_12),
       &VAR_12);
  if (VAR_11 == ((void*)0))
   return 0;
  if (VAR_8->bitmask & VAR_1) {
   u32 VAR_17 = FUNC_4(VAR_11->dst);
   if (FUNC_0(VAR_17 < VAR_8->dport[0] ||
      VAR_17 > VAR_8->dport[1], VAR_1))
    return 0;
  }
  if (VAR_8->bitmask & VAR_4) {
   u32 VAR_18 = FUNC_4(VAR_11->src);
   if (FUNC_0(VAR_18 < VAR_8->sport[0] ||
      VAR_18 > VAR_8->sport[1], VAR_4))
   return 0;
  }
  return 1;
 }
 return 1;
}
