
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockcred {scalar_t__ sc_euid; } ;
struct TYPE_4__ {int priv; scalar_t__ cred; } ;
struct TYPE_3__ {int a4; } ;
struct port_sock {TYPE_2__ input; TYPE_1__ ret_source; } ;
struct msghdr {int dummy; } ;
struct in_addr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr const*) ;
 struct cmsghdr* FUNC_2 (struct msghdr const*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct port_sock *VAR_4, const struct msghdr *VAR_5)
{
 struct sockcred *VAR_6 = ((void*)0);

 for (struct cmsghdr *VAR_7 = FUNC_1(VAR_5); VAR_7 != ((void*)0);
     VAR_7 = FUNC_2(VAR_5, VAR_7)) {

  if (VAR_7->cmsg_level == VAR_0 &&
      VAR_7->cmsg_type == VAR_1) {
   FUNC_3(&VAR_4->ret_source.a4, FUNC_0(VAR_7),
       sizeof(struct in_addr));

  } else if (VAR_7->cmsg_level == VAR_3 &&
      VAR_7->cmsg_type == VAR_2) {
   VAR_6 = (struct sockcred *)(void *)FUNC_0(VAR_7);
  }
 }

 VAR_4->input.priv = 0;
 if (VAR_4->input.cred && VAR_6)

  VAR_4->input.priv = (VAR_6->sc_euid == 0);
}
