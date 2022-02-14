
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_pid; } ;
struct audit_buffer {int skb; } ;
typedef int pid_t ;


 struct nlmsghdr* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct audit_buffer *VAR_0, pid_t VAR_1)
{
 if (VAR_0) {
  struct nlmsghdr *VAR_2 = FUNC_0(VAR_0->skb);
  VAR_2->nlmsg_pid = VAR_1;
 }
}
