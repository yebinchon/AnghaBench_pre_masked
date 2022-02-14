
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct sock_xprt {int xprt; int sock; } ;
typedef int any ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,struct sockaddr*,int,int ) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock_xprt *VAR_1)
{
 int VAR_2;
 struct sockaddr VAR_3;

 FUNC_0("RPC:       disconnecting xprt %p to reuse port\n", VAR_1);





 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sa_family = VAR_0;
 VAR_2 = FUNC_1(VAR_1->sock, &VAR_3, sizeof(VAR_3), 0);
 if (!VAR_2)
  FUNC_3(&VAR_1->xprt);
 FUNC_0("RPC:       AF_UNSPEC connect return code %d\n", VAR_2);
}
