
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct ip {int ip_dst; int ip_src; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int cookie_t ;
struct TYPE_5__ {int in6; int in4; } ;
struct TYPE_4__ {int in6; int in4; } ;
struct TYPE_6__ {int version; int initiator; TYPE_2__ raddr; TYPE_1__ iaddr; } ;


 int FUNC_0 (struct ip const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_3(cookie_t *VAR_3, const u_char *VAR_4)
{
 int VAR_5;
 const struct ip *VAR_6;
 const struct ip6_hdr *VAR_7;

 VAR_5 = FUNC_2(VAR_3);
 if (0 <= VAR_5) {
  VAR_2 = (VAR_5 + 1) % VAR_0;
  return;
 }

 VAR_6 = (const struct ip *)VAR_4;
 switch (FUNC_0(VAR_6)) {
 case 4:
  VAR_1[VAR_2].version = 4;
  FUNC_1(&VAR_1[VAR_2].iaddr.in4, &VAR_6->ip_src, sizeof(struct in_addr));
  FUNC_1(&VAR_1[VAR_2].raddr.in4, &VAR_6->ip_dst, sizeof(struct in_addr));
  break;
 case 6:
  VAR_7 = (const struct ip6_hdr *)VAR_4;
  VAR_1[VAR_2].version = 6;
  FUNC_1(&VAR_1[VAR_2].iaddr.in6, &VAR_7->ip6_src, sizeof(struct in6_addr));
  FUNC_1(&VAR_1[VAR_2].raddr.in6, &VAR_7->ip6_dst, sizeof(struct in6_addr));
  break;
 default:
  return;
 }
 FUNC_1(&VAR_1[VAR_2].initiator, VAR_3, sizeof(*VAR_3));
 VAR_2 = (VAR_2 + 1) % VAR_0;
}
