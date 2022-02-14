
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ sk_family; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct sockaddr_in*) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_2, struct sockaddr *VAR_3,
    int VAR_4)
{
 if (VAR_2->sk == ((void*)0) || VAR_2->sk->sk_family != VAR_1)
  return 0;
 if (VAR_4 < sizeof(struct sockaddr_in))
  return -VAR_0;

 return FUNC_0(VAR_2->sk, (struct sockaddr_in *)VAR_3);
}
