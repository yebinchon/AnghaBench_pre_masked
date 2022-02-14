
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct msghdr {int dummy; } ;
struct ipcm_cookie {int addr; int oif; int opt; } ;
struct TYPE_2__ {int s_addr; } ;
struct in_pktinfo {TYPE_1__ ipi_spec_dst; int ipi_ifindex; } ;
struct cmsghdr {scalar_t__ cmsg_level; int cmsg_type; int cmsg_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*) ;
 int FUNC_3 (int) ;
 struct cmsghdr* FUNC_4 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_5 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_6 (struct net*,int *,scalar_t__,int) ;

int FUNC_7(struct net *VAR_2, struct msghdr *VAR_3, struct ipcm_cookie *VAR_4)
{
 int VAR_5;
 struct cmsghdr *VAR_6;

 for (VAR_6 = FUNC_2(VAR_3); VAR_6; VAR_6 = FUNC_4(VAR_3, VAR_6)) {
  if (!FUNC_5(VAR_3, VAR_6))
   return -VAR_0;
  if (VAR_6->cmsg_level != VAR_1)
   continue;
  switch (VAR_6->cmsg_type) {
  case 128:
   VAR_5 = VAR_6->cmsg_len - FUNC_0(sizeof(struct cmsghdr));
   VAR_5 = FUNC_6(VAR_2, &VAR_4->opt, FUNC_1(VAR_6),
          VAR_5 < 40 ? VAR_5 : 40);
   if (VAR_5)
    return VAR_5;
   break;
  case 129:
  {
   struct in_pktinfo *VAR_7;
   if (VAR_6->cmsg_len != FUNC_3(sizeof(struct in_pktinfo)))
    return -VAR_0;
   VAR_7 = (struct in_pktinfo *)FUNC_1(VAR_6);
   VAR_4->oif = VAR_7->ipi_ifindex;
   VAR_4->addr = VAR_7->ipi_spec_dst.s_addr;
   break;
  }
  default:
   return -VAR_0;
  }
 }
 return 0;
}
