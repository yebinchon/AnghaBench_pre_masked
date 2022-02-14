
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct msghdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ sin6_scope_id; int sin6_addr; } ;
struct ip6_mtuinfo {scalar_t__ ip6m_mtu; TYPE_1__ ip6m_addr; } ;
struct cmsghdr {scalar_t__ cmsg_len; scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int mtuctl ;
struct TYPE_4__ {scalar_t__ sin6_scope_id; int sin6_addr; } ;


 int FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (struct ip6_mtuinfo*,int ,int) ;
 int VAR_5 ;
 char* FUNC_6 (struct sockaddr*,int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct msghdr *VAR_6)
{
 return(0);
}
