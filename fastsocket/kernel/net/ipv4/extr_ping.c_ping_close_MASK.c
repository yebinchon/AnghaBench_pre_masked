
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int counter; } ;
struct sock {TYPE_1__ sk_refcnt; } ;
struct TYPE_5__ {int num; } ;


 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (char*,TYPE_2__*,...) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, long VAR_1)
{
 FUNC_1("ping_close(sk=%p,sk->num=%u)\n",
  FUNC_0(VAR_0), FUNC_0(VAR_0)->num);
 FUNC_1("isk->refcnt = %d\n", VAR_0->sk_refcnt.counter);

 FUNC_2(VAR_0);
}
