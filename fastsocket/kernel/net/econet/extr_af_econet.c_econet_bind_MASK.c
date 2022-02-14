
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int net; int station; } ;
struct sockaddr_ec {scalar_t__ sec_family; TYPE_1__ addr; int port; int cb; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct econet_sock {int net; int station; int port; int cb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct econet_sock* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{
 struct sockaddr_ec *VAR_6 = (struct sockaddr_ec *)VAR_4;
 struct sock *VAR_7;
 struct econet_sock *VAR_8;





 if (VAR_5 < sizeof(struct sockaddr_ec) ||
     VAR_6->sec_family != VAR_0)
  return -VAR_1;

 FUNC_1(&VAR_2);

 VAR_7 = VAR_3->sk;
 VAR_8 = FUNC_0(VAR_7);

 VAR_8->cb = VAR_6->cb;
 VAR_8->port = VAR_6->port;
 VAR_8->station = VAR_6->addr.station;
 VAR_8->net = VAR_6->addr.net;

 FUNC_2(&VAR_2);

 return 0;
}
