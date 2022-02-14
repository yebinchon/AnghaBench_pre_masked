
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr6; } ;
struct svc_rqst {TYPE_1__ rq_daddr; } ;
struct in6_pktinfo {int ipi6_addr; } ;
struct cmsghdr {scalar_t__ cmsg_type; } ;


 struct in6_pktinfo* FUNC_0 (struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct svc_rqst *VAR_1,
         struct cmsghdr *VAR_2)
{
 struct in6_pktinfo *VAR_3 = FUNC_0(VAR_2);
 if (VAR_2->cmsg_type != VAR_0)
  return 0;
 FUNC_1(&VAR_1->rq_daddr.addr6, &VAR_3->ipi6_addr);
 return 1;
}
