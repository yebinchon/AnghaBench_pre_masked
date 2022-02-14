
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unix_sock {TYPE_1__* addr; } ;
struct sock {int dummy; } ;
struct msghdr {int msg_name; int msg_namelen; } ;
struct TYPE_2__ {int len; int name; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct unix_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct msghdr *VAR_0, struct sock *VAR_1)
{
 struct unix_sock *VAR_2 = FUNC_1(VAR_1);

 VAR_0->msg_namelen = 0;
 if (VAR_2->addr) {
  VAR_0->msg_namelen = VAR_2->addr->len;
  FUNC_0(VAR_0->msg_name, VAR_2->addr->name, VAR_2->addr->len);
 }
}
