
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;


 int FUNC_0 (struct nf_conntrack_expect*) ;

__attribute__((used)) static int FUNC_1(struct netlink_callback *VAR_0)
{
 if (VAR_0->args[1])
  FUNC_0((struct nf_conntrack_expect *)VAR_0->args[1]);
 return 0;
}
