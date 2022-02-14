
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct ip6_hdr {int ip6_src; } ;
struct ip {int ip_src; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_5__ {int in6; int in4; } ;
struct TYPE_4__ {int in6; int in4; } ;
struct TYPE_6__ {int version; TYPE_2__ raddr; TYPE_1__ iaddr; } ;


 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int *,int *,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1, const u_char *VAR_2, int VAR_3)
{
 const struct ip *VAR_4;
 const struct ip6_hdr *VAR_5;

 VAR_4 = (const struct ip *)VAR_2;
 switch (FUNC_0(VAR_4)) {
 case 4:
  if (VAR_0[VAR_1].version != 4)
   return 0;
  if (VAR_3) {
   if (FUNC_1(&VAR_4->ip_src, &VAR_0[VAR_1].iaddr.in4, sizeof(struct in_addr)) == 0)
    return 1;
  } else {
   if (FUNC_1(&VAR_4->ip_src, &VAR_0[VAR_1].raddr.in4, sizeof(struct in_addr)) == 0)
    return 1;
  }
  break;
 case 6:
  if (VAR_0[VAR_1].version != 6)
   return 0;
  VAR_5 = (const struct ip6_hdr *)VAR_2;
  if (VAR_3) {
   if (FUNC_1(&VAR_5->ip6_src, &VAR_0[VAR_1].iaddr.in6, sizeof(struct in6_addr)) == 0)
    return 1;
  } else {
   if (FUNC_1(&VAR_5->ip6_src, &VAR_0[VAR_1].raddr.in6, sizeof(struct in6_addr)) == 0)
    return 1;
  }
  break;
 default:
  break;
 }

 return 0;
}
