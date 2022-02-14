
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sco_conn {struct sock* sk; } ;
struct TYPE_2__ {struct sco_conn* conn; } ;


 int FUNC_0 (char*,struct sco_conn*) ;
 int FUNC_1 (struct sock*,struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sco_conn *VAR_0, struct sock *VAR_1, struct sock *VAR_2)
{
 FUNC_0("conn %p", VAR_0);

 FUNC_2(VAR_1)->conn = VAR_0;
 VAR_0->sk = VAR_1;

 if (VAR_2)
  FUNC_1(VAR_2, VAR_1);
}
