
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct inet_sock {int dport; int daddr; } ;


 int VAR_0 ;
 struct inet_sock* FUNC_0 (struct sock*) ;

void FUNC_1(struct sock *VAR_1, struct sockaddr *VAR_2)
{
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_2;
 const struct inet_sock *VAR_4 = FUNC_0(VAR_1);

 VAR_3->sin_family = VAR_0;
 VAR_3->sin_addr.s_addr = VAR_4->daddr;
 VAR_3->sin_port = VAR_4->dport;
}
