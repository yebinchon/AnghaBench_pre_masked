
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct socket {int sk; } ;
struct TYPE_6__ {int lower; int upper; } ;
struct TYPE_5__ {TYPE_2__ nameseq; } ;
struct sockaddr_tipc {scalar_t__ family; scalar_t__ addrtype; TYPE_1__ addr; int scope; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int ref; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_5, struct sockaddr *VAR_6, int VAR_7)
{
 struct sockaddr_tipc *VAR_8 = (struct sockaddr_tipc *)VAR_6;
 u32 VAR_9 = FUNC_1(VAR_5->sk)->ref;

 if (FUNC_3(!VAR_7))
  return FUNC_2(VAR_9, 0, ((void*)0));

 if (VAR_7 < sizeof(struct sockaddr_tipc))
  return -VAR_2;
 if (VAR_8->family != VAR_0)
  return -VAR_1;

 if (VAR_8->addrtype == VAR_3)
  VAR_8->addr.nameseq.upper = VAR_8->addr.nameseq.lower;
 else if (VAR_8->addrtype != VAR_4)
  return -VAR_1;

 return (VAR_8->scope > 0) ?
  FUNC_0(VAR_9, VAR_8->scope, &VAR_8->addr.nameseq) :
  FUNC_2(VAR_9, -VAR_8->scope, &VAR_8->addr.nameseq);
}
