
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ip6_rthdr0 {int ip6r0_segleft; int* ip6r0_slmap; int ip6r0_len; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;
struct cmsghdr {int cmsg_len; } ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_2 (struct in6_addr const*,int ,int) ;

int
FUNC_3(struct cmsghdr *VAR_2, const struct in6_addr *VAR_3, u_int VAR_4)
{
 struct ip6_rthdr *VAR_5;

 VAR_5 = (struct ip6_rthdr *)FUNC_0(VAR_2);

 switch (VAR_5->ip6r_type) {
 case 128:
 {
  struct ip6_rthdr0 *VAR_6 = (struct ip6_rthdr0 *)VAR_5;
  if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
   return (-1);
  if (VAR_6->ip6r0_segleft == 23)
   return (-1);
  if (VAR_4 != VAR_0)
   return (-1);

  VAR_6->ip6r0_segleft++;
  FUNC_2(VAR_3, (caddr_t)VAR_6 + ((VAR_6->ip6r0_len + 1) << 3),
      sizeof(struct in6_addr));
  VAR_6->ip6r0_len += sizeof(struct in6_addr) >> 3;
  VAR_2->cmsg_len = FUNC_1((VAR_6->ip6r0_len + 1) << 3);
  break;
 }
 default:
  return (-1);
 }

 return (0);
}
