
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_version; } ;
struct TYPE_3__ {int policy; } ;
struct TYPE_4__ {TYPE_1__ u; int done; int * dump; int msg_pid; int msg_version; } ;
struct pfkey_sock {TYPE_2__ dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfkey_sock*) ;
 int * VAR_2 ;
 int VAR_3 ;
 struct pfkey_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_4, struct sk_buff *VAR_5, struct sadb_msg *VAR_6, void **VAR_7)
{
 struct pfkey_sock *VAR_8 = FUNC_1(VAR_4);

 if (VAR_8->dump.dump != ((void*)0))
  return -VAR_0;

 VAR_8->dump.msg_version = VAR_6->sadb_msg_version;
 VAR_8->dump.msg_pid = VAR_6->sadb_msg_pid;
 VAR_8->dump.dump = VAR_2;
 VAR_8->dump.done = VAR_3;
 FUNC_2(&VAR_8->dump.u.policy, VAR_1);

 return FUNC_0(VAR_8);
}
