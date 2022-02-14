
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int a4; } ;
struct port_sock {TYPE_1__ ret_source; } ;
struct msghdr {int msg_controllen; } ;
struct in_addr {int dummy; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct port_sock *VAR_2, struct msghdr *VAR_3)
{
 struct cmsghdr *VAR_4 = FUNC_1(VAR_3);


 VAR_4->cmsg_level = VAR_0;
 VAR_4->cmsg_type = VAR_1;
 VAR_4->cmsg_len = FUNC_2(sizeof(struct in_addr));
 FUNC_4(FUNC_0(VAR_4), &VAR_2->ret_source.a4,
     sizeof(struct in_addr));

 VAR_3->msg_controllen = FUNC_3(sizeof(struct in_addr));
}
