
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockcred {scalar_t__ sc_euid; } ;
struct TYPE_6__ {int priv; scalar_t__ cred; } ;
struct TYPE_4__ {int ipi6_ifindex; int ipi6_addr; } ;
struct TYPE_5__ {TYPE_1__ a6; } ;
struct port_sock {TYPE_3__ input; TYPE_2__ ret_source; } ;
struct msghdr {int dummy; } ;
struct in6_pktinfo {int ipi6_ifindex; int ipi6_addr; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr const*) ;
 struct cmsghdr* FUNC_2 (struct msghdr const*,struct cmsghdr*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct port_sock *VAR_4, const struct msghdr *VAR_5)
{
 struct sockcred *VAR_6 = ((void*)0);

 for (struct cmsghdr *VAR_7 = FUNC_1(VAR_5); VAR_7 != ((void*)0);
     VAR_7 = FUNC_2(VAR_5, VAR_7)) {

  if (VAR_7->cmsg_level == VAR_0 &&
      VAR_7->cmsg_type == VAR_1) {
   const struct in6_pktinfo *VAR_8 =
       (const struct in6_pktinfo *)(const void *)
       FUNC_0(VAR_7);
   VAR_4->ret_source.a6.ipi6_addr = VAR_8->ipi6_addr;
   VAR_4->ret_source.a6.ipi6_ifindex =
       !FUNC_3(&VAR_8->ipi6_addr) ? 0:
       VAR_8->ipi6_ifindex;
  } else if (VAR_7->cmsg_level == VAR_3 &&
      VAR_7->cmsg_type == VAR_2) {
   VAR_6 = (struct sockcred *)(void *)FUNC_0(VAR_7);
  }
 }

 VAR_4->input.priv = 0;
 if (VAR_4->input.cred && VAR_6)

  VAR_4->input.priv = (VAR_6->sc_euid == 0);
}
