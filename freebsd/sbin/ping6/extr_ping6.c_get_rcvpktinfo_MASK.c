
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;
struct in6_pktinfo {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_len; scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int pi ;


 int FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct in6_pktinfo*,int ,int) ;

__attribute__((used)) static struct in6_pktinfo *
FUNC_5(struct msghdr *VAR_2)
{
 static struct in6_pktinfo VAR_3;
 struct cmsghdr *VAR_4;

 for (VAR_4 = (struct cmsghdr *)FUNC_1(VAR_2); VAR_4;
      VAR_4 = (struct cmsghdr *)FUNC_3(VAR_2, VAR_4)) {
  if (VAR_4->cmsg_len == 0)
   return(((void*)0));

  if (VAR_4->cmsg_level == VAR_0 &&
      VAR_4->cmsg_type == VAR_1 &&
      VAR_4->cmsg_len == FUNC_2(sizeof(struct in6_pktinfo))) {
   FUNC_4(&VAR_3, FUNC_0(VAR_4), sizeof(VAR_3));
   return(&VAR_3);
  }
 }

 return(((void*)0));
}
