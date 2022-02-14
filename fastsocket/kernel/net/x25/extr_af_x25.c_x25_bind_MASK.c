
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_x25 {scalar_t__ sx25_family; int sx25_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int source_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_3->sk;
 struct sockaddr_x25 *VAR_7 = (struct sockaddr_x25 *)VAR_4;

 if (!FUNC_1(VAR_6, VAR_2) ||
     VAR_5 != sizeof(struct sockaddr_x25) ||
     VAR_7->sx25_family != VAR_0)
  return -VAR_1;

 FUNC_4(VAR_6)->source_addr = VAR_7->sx25_addr;
 FUNC_3(VAR_6);
 FUNC_2(VAR_6, VAR_2);
 FUNC_0(VAR_6, "x25_bind: socket is bound\n");

 return 0;
}
