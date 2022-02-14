
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_rthdr0 {int dummy; } ;
struct ip6_rthdr {int ip6r_type; } ;
struct in6_addr {int dummy; } ;
struct cmsghdr {void* cmsg_len; int cmsg_type; int cmsg_level; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_2 (struct ip6_rthdr*,int) ;

struct cmsghdr *
FUNC_3(void *VAR_2, int VAR_3)
{
 struct cmsghdr *VAR_4 = (struct cmsghdr *)VAR_2;
 struct ip6_rthdr *VAR_5;

 VAR_5 = (struct ip6_rthdr *)FUNC_0(VAR_4);

 VAR_4->cmsg_level = VAR_0;
 VAR_4->cmsg_type = VAR_1;

 switch (VAR_3) {
 case 128:




  VAR_4->cmsg_len = FUNC_1(sizeof(struct ip6_rthdr0));


  FUNC_2(VAR_5, sizeof(struct ip6_rthdr0));
  VAR_5->ip6r_type = 128;
  return (VAR_4);
 default:
  return (((void*)0));
 }
}
