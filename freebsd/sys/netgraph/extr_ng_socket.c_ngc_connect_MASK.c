
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct socket *VAR_1, struct sockaddr *VAR_2, struct thread *VAR_3)
{




 FUNC_0("program tried to connect control socket to remote node\n");
 return (VAR_0);
}
