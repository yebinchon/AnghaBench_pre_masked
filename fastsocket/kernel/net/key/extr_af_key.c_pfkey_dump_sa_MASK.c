
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct pfkey_sock {TYPE_2__ dump; int sk; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int *) ;
 int FUNC_1 (struct net*,int *,int ,void*) ;

__attribute__((used)) static int FUNC_2(struct pfkey_sock *VAR_1)
{
 struct net *VAR_2 = FUNC_0(&VAR_1->sk);
 return FUNC_1(VAR_2, &VAR_1->dump.u.state, VAR_0, (void *) VAR_1);
}
