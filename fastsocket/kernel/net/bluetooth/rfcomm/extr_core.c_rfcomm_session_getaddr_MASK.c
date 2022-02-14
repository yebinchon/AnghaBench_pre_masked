
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rfcomm_session {TYPE_1__* sock; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_3__ {struct sock* sk; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (struct sock*) ;

void FUNC_2(struct rfcomm_session *VAR_0, bdaddr_t *VAR_1, bdaddr_t *VAR_2)
{
 struct sock *VAR_3 = VAR_0->sock->sk;
 if (VAR_1)
  FUNC_0(VAR_1, &FUNC_1(VAR_3)->src);
 if (VAR_2)
  FUNC_0(VAR_2, &FUNC_1(VAR_3)->dst);
}
