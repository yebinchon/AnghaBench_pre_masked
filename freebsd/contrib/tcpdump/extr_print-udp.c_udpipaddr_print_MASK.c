
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_hdr {scalar_t__ ip6_nxt; int ip6_dst; int ip6_src; } ;
struct ip {scalar_t__ ip_p; int ip_dst; int ip_src; } ;
typedef int netdissect_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_1, const struct ip *VAR_2, int VAR_3, int VAR_4)
{
 const struct ip6_hdr *VAR_5;

 if (FUNC_0(VAR_2) == 6)
  VAR_5 = (const struct ip6_hdr *)VAR_2;
 else
  VAR_5 = ((void*)0);

 if (VAR_5) {
  if (VAR_5->ip6_nxt == VAR_0) {
   if (VAR_3 == -1) {
    FUNC_1((VAR_1, "%s > %s: ",
     FUNC_2(VAR_1, &VAR_5->ip6_src),
     FUNC_2(VAR_1, &VAR_5->ip6_dst)));
   } else {
    FUNC_1((VAR_1, "%s.%s > %s.%s: ",
     FUNC_2(VAR_1, &VAR_5->ip6_src),
     FUNC_4(VAR_1, VAR_3),
     FUNC_2(VAR_1, &VAR_5->ip6_dst),
     FUNC_4(VAR_1, VAR_4)));
   }
  } else {
   if (VAR_3 != -1) {
    FUNC_1((VAR_1, "%s > %s: ",
     FUNC_4(VAR_1, VAR_3),
     FUNC_4(VAR_1, VAR_4)));
   }
  }
 } else {
  if (VAR_2->ip_p == VAR_0) {
   if (VAR_3 == -1) {
    FUNC_1((VAR_1, "%s > %s: ",
     FUNC_3(VAR_1, &VAR_2->ip_src),
     FUNC_3(VAR_1, &VAR_2->ip_dst)));
   } else {
    FUNC_1((VAR_1, "%s.%s > %s.%s: ",
     FUNC_3(VAR_1, &VAR_2->ip_src),
     FUNC_4(VAR_1, VAR_3),
     FUNC_3(VAR_1, &VAR_2->ip_dst),
     FUNC_4(VAR_1, VAR_4)));
   }
  } else {
   if (VAR_3 != -1) {
    FUNC_1((VAR_1, "%s > %s: ",
     FUNC_4(VAR_1, VAR_3),
     FUNC_4(VAR_1, VAR_4)));
   }
  }
 }
}
