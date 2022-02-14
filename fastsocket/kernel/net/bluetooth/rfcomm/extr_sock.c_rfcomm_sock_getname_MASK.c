
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_rc {int rc_bdaddr; int rc_channel; int rc_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int src; int dst; } ;
struct TYPE_3__ {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sockaddr_rc*,int ,int) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_1, struct sockaddr *VAR_2, int *VAR_3, int VAR_4)
{
 struct sockaddr_rc *VAR_5 = (struct sockaddr_rc *) VAR_2;
 struct sock *VAR_6 = VAR_1->sk;

 FUNC_0("sock %p, sk %p", VAR_1, VAR_6);

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->rc_family = VAR_0;
 VAR_5->rc_channel = FUNC_4(VAR_6)->channel;
 if (VAR_4)
  FUNC_1(&VAR_5->rc_bdaddr, &FUNC_2(VAR_6)->dst);
 else
  FUNC_1(&VAR_5->rc_bdaddr, &FUNC_2(VAR_6)->src);

 *VAR_3 = sizeof(struct sockaddr_rc);
 return 0;
}
