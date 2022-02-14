
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int sa_data; int sa_family; } ;
struct sock {int dummy; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_2, struct sockaddr *VAR_3,
          int *VAR_4, int VAR_5)
{
 struct net_device *VAR_6;
 struct sock *VAR_7 = VAR_2->sk;

 if (VAR_5)
  return -VAR_1;

 VAR_3->sa_family = VAR_0;
 VAR_6 = FUNC_0(FUNC_4(VAR_7), FUNC_3(VAR_7)->ifindex);
 if (VAR_6) {
  FUNC_5(VAR_3->sa_data, VAR_6->name, 14);
  FUNC_1(VAR_6);
 } else
  FUNC_2(VAR_3->sa_data, 0, 14);
 *VAR_4 = sizeof(*VAR_3);

 return 0;
}
