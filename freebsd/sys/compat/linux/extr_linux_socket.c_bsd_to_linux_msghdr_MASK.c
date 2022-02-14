
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_control; int msg_iovlen; int msg_iov; int msg_namelen; int msg_name; } ;
struct l_msghdr {void* msg_control; int msg_iovlen; void* msg_iov; int msg_namelen; void* msg_name; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct msghdr *VAR_0, struct l_msghdr *VAR_1)
{
 VAR_1->msg_name = FUNC_0(VAR_0->msg_name);
 VAR_1->msg_namelen = VAR_0->msg_namelen;
 VAR_1->msg_iov = FUNC_0(VAR_0->msg_iov);
 VAR_1->msg_iovlen = VAR_0->msg_iovlen;
 VAR_1->msg_control = FUNC_0(VAR_0->msg_control);
 return (0);
}
