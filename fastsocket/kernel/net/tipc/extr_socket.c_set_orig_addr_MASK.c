
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct TYPE_5__ {scalar_t__ domain; } ;
struct TYPE_4__ {int node; int ref; } ;
struct TYPE_6__ {TYPE_2__ name; TYPE_1__ id; } ;
struct sockaddr_tipc {scalar_t__ scope; TYPE_3__ addr; int addrtype; int family; } ;
struct msghdr {int msg_namelen; scalar_t__ msg_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tipc_msg*) ;
 int FUNC_1 (struct tipc_msg*) ;

__attribute__((used)) static void FUNC_2(struct msghdr *VAR_2, struct tipc_msg *VAR_3)
{
 struct sockaddr_tipc *VAR_4 = (struct sockaddr_tipc *)VAR_2->msg_name;

 if (VAR_4) {
  VAR_4->family = VAR_0;
  VAR_4->addrtype = VAR_1;
  VAR_4->addr.id.ref = FUNC_1(VAR_3);
  VAR_4->addr.id.node = FUNC_0(VAR_3);
  VAR_4->addr.name.domain = 0;
  VAR_4->scope = 0;
  VAR_2->msg_namelen = sizeof(struct sockaddr_tipc);
 }
}
