
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unpcb {int dummy; } ;
struct socket {TYPE_1__* so_proto; } ;
struct file {scalar_t__ f_type; struct socket* f_data; } ;
struct TYPE_2__ {int * pr_domain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct unpcb* FUNC_0 (struct socket*) ;

__attribute__((used)) static struct unpcb *
FUNC_1(struct file *VAR_2)
{
 struct socket *VAR_3;

 if (VAR_2->f_type != VAR_0)
  return (((void*)0));
 if ((VAR_3 = VAR_2->f_data) == ((void*)0))
  return (((void*)0));
 if (VAR_3->so_proto->pr_domain != &VAR_1)
  return (((void*)0));
 return FUNC_0(VAR_3);
}
