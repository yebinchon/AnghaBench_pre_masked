
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct ip6_rthdr0 {struct in6_addr* ip6r0_addr; } ;
struct ip6_rthdr {int ip6r_len; int ip6r_type; } ;
struct in6_addr {int dummy; } ;
struct ip6_hdr {int ip6_nxt; struct in6_addr ip6_dst; } ;
struct ip6_frag {int dummy; } ;
struct TYPE_3__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (struct ip6_rthdr const) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (struct in6_addr*,struct in6_addr const*,int) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, struct in6_addr *VAR_1,
            const struct ip6_hdr *VAR_2)
{
 const u_char *VAR_3;
 int VAR_4;
 u_int VAR_5;
 const struct in6_addr *VAR_6;
 const struct ip6_rthdr *VAR_7;
 const struct ip6_rthdr0 *VAR_8;
 const struct in6_addr *VAR_9;
 int VAR_10, VAR_11;

 VAR_3 = (const u_char *)VAR_2;
 VAR_4 = sizeof(struct ip6_hdr);
 VAR_5 = VAR_2->ip6_nxt;
 VAR_6 = &VAR_2->ip6_dst;

 while (VAR_3 < VAR_0->ndo_snapend) {
  VAR_3 += VAR_4;

  switch (VAR_5) {

  case 134:
  case 137:
  case 131:
  case 132:






   FUNC_1(*VAR_3, 2);
   VAR_4 = (int)((*(VAR_3 + 1) + 1) << 3);
   VAR_5 = *VAR_3;
   break;

  case 135:





   FUNC_1(*VAR_3, 1);
   VAR_4 = sizeof(struct ip6_frag);
   VAR_5 = *VAR_3;
   break;

  case 130:



   VAR_7 = (const struct ip6_rthdr *)VAR_3;
   FUNC_0(*VAR_7);
   VAR_11 = VAR_7->ip6r_len;
   switch (VAR_7->ip6r_type) {

   case 129:
   case 128:
    VAR_8 = (const struct ip6_rthdr0 *)VAR_7;
    if (VAR_11 % 2 == 1)
     goto trunc;
    VAR_11 >>= 1;
    VAR_9 = &VAR_8->ip6r0_addr[0];
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
     if ((const u_char *)(VAR_9 + 1) > VAR_0->ndo_snapend)
      goto trunc;

     VAR_6 = VAR_9;
     VAR_9++;
    }
    break;

   default:
    break;
   }




   goto done;

  case 138:
  case 136:
  case 133:
  default:
   goto done;
  }
 }

done:
trunc:
 FUNC_2(VAR_1, VAR_6, sizeof(struct in6_addr));
}
