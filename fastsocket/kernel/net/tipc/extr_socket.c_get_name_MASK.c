
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node; int ref; } ;
struct tipc_sock {TYPE_2__* p; TYPE_1__ peer_name; } ;
struct socket {scalar_t__ state; int sk; } ;
struct TYPE_8__ {scalar_t__ domain; } ;
struct TYPE_10__ {int node; int ref; } ;
struct TYPE_9__ {TYPE_3__ name; TYPE_5__ id; } ;
struct sockaddr_tipc {TYPE_4__ addr; scalar_t__ scope; int family; int addrtype; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 struct tipc_sock* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_5, struct sockaddr *VAR_6,
      int *VAR_7, int VAR_8)
{
 struct sockaddr_tipc *VAR_9 = (struct sockaddr_tipc *)VAR_6;
 struct tipc_sock *VAR_10 = FUNC_1(VAR_5->sk);

 if (VAR_8) {
  if ((VAR_5->state != VAR_2) &&
   ((VAR_8 != 2) || (VAR_5->state != VAR_3)))
   return -VAR_1;
  VAR_9->addr.id.ref = VAR_10->peer_name.ref;
  VAR_9->addr.id.node = VAR_10->peer_name.node;
 } else {
  FUNC_0(VAR_10->p->ref, &VAR_9->addr.id);
 }

 *VAR_7 = sizeof(*VAR_9);
 VAR_9->addrtype = VAR_4;
 VAR_9->family = VAR_0;
 VAR_9->scope = 0;
 VAR_9->addr.name.domain = 0;

 return 0;
}
