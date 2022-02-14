
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_flags; void* msg_control; int msg_iovlen; void* msg_iov; int msg_namelen; void* msg_name; } ;
struct l_msghdr {scalar_t__ msg_controllen; int msg_flags; int msg_control; int msg_iovlen; int msg_iov; int msg_namelen; int msg_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct msghdr *VAR_2, const struct l_msghdr *VAR_3)
{
 if (VAR_3->msg_controllen > VAR_1)
  return (VAR_0);

 VAR_2->msg_name = FUNC_0(VAR_3->msg_name);
 VAR_2->msg_namelen = VAR_3->msg_namelen;
 VAR_2->msg_iov = FUNC_0(VAR_3->msg_iov);
 VAR_2->msg_iovlen = VAR_3->msg_iovlen;
 VAR_2->msg_control = FUNC_0(VAR_3->msg_control);
 VAR_2->msg_flags = FUNC_1(VAR_3->msg_flags);
 return (0);
}
