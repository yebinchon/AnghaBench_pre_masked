
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct svc_rqst {TYPE_2__ rq_daddr; } ;
struct TYPE_6__ {int s_addr; } ;
struct in_pktinfo {TYPE_3__ ipi_spec_dst; } ;
struct cmsghdr {scalar_t__ cmsg_type; } ;


 struct in_pktinfo* FUNC_0 (struct cmsghdr*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct svc_rqst *VAR_1,
         struct cmsghdr *VAR_2)
{
 struct in_pktinfo *VAR_3 = FUNC_0(VAR_2);
 if (VAR_2->cmsg_type != VAR_0)
  return 0;
 VAR_1->rq_daddr.addr.s_addr = VAR_3->ipi_spec_dst.s_addr;
 return 1;
}
