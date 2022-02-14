
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct thread* VAR_0 ;
 int FUNC_1 (int,struct socket*,struct sockaddr*,struct thread*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct socket *VAR_2, struct sockaddr *VAR_3,
    struct thread *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4 == VAR_0, ("uipc_connectat: td != curthread"));
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 return (VAR_5);
}
