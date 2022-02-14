
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int net; int station; } ;
struct sockaddr_ec {TYPE_1__ addr; int port; int sec_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct econet_sock {int net; int station; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct econet_sock* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr_ec*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4,
     int *VAR_5, int VAR_6)
{
 struct sock *VAR_7;
 struct econet_sock *VAR_8;
 struct sockaddr_ec *VAR_9 = (struct sockaddr_ec *)VAR_4;

 if (VAR_6)
  return -VAR_1;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 FUNC_2(&VAR_2);

 VAR_7 = VAR_3->sk;
 VAR_8 = FUNC_0(VAR_7);

 VAR_9->sec_family = VAR_0;
 VAR_9->port = VAR_8->port;
 VAR_9->addr.station = VAR_8->station;
 VAR_9->addr.net = VAR_8->net;

 FUNC_3(&VAR_2);

 *VAR_5 = sizeof(*VAR_9);
 return 0;
}
