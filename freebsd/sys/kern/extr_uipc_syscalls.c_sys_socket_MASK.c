
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket_args {int protocol; int type; int domain; } ;


 int FUNC_0 (struct thread*,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_0, struct socket_args *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->domain, VAR_1->type, VAR_1->protocol));
}
