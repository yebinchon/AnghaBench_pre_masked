
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int sa_data; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sock*,struct net_device*,int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_2, struct sockaddr *VAR_3,
       int VAR_4)
{
 struct sock *VAR_5 = VAR_2->sk;
 char VAR_6[15];
 struct net_device *VAR_7;
 int VAR_8 = -VAR_1;





 if (VAR_4 != sizeof(struct sockaddr))
  return -VAR_0;
 FUNC_5(VAR_6, VAR_3->sa_data, sizeof(VAR_6));

 VAR_7 = FUNC_0(FUNC_4(VAR_5), VAR_6);
 if (VAR_7) {
  VAR_8 = FUNC_2(VAR_5, VAR_7, FUNC_3(VAR_5)->num);
  FUNC_1(VAR_7);
 }
 return VAR_8;
}
