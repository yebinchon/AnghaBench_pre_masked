
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ll {scalar_t__ sll_family; scalar_t__ sll_protocol; scalar_t__ sll_ifindex; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sock*,struct net_device*,int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{
 struct sockaddr_ll *VAR_6 = (struct sockaddr_ll *)VAR_4;
 struct sock *VAR_7 = VAR_3->sk;
 struct net_device *VAR_8 = ((void*)0);
 int VAR_9;






 if (VAR_5 < sizeof(struct sockaddr_ll))
  return -VAR_1;
 if (VAR_6->sll_family != VAR_0)
  return -VAR_1;

 if (VAR_6->sll_ifindex) {
  VAR_9 = -VAR_2;
  VAR_8 = FUNC_0(FUNC_4(VAR_7), VAR_6->sll_ifindex);
  if (VAR_8 == ((void*)0))
   goto out;
 }
 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_6->sll_protocol ? : FUNC_3(VAR_7)->num);
 if (VAR_8)
  FUNC_1(VAR_8);

out:
 return VAR_9;
}
