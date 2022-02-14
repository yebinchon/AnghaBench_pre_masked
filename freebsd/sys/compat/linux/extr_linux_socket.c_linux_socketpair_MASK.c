
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socketpair_args {scalar_t__ domain; int type; int* rsv; scalar_t__ protocol; } ;
struct linux_socketpair_args {int type; scalar_t__ protocol; int rsv; int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct thread*,struct socketpair_args*) ;

int
FUNC_4(struct thread *VAR_7, struct linux_socketpair_args *VAR_8)
{
 struct socketpair_args VAR_9;





 int VAR_10;

 VAR_9.domain = FUNC_2(VAR_8->domain);
 if (VAR_9.domain != VAR_5)
  return (VAR_0);
 VAR_9.type = VAR_8->type & VAR_4;
 if (VAR_9.type < 0 || VAR_9.type > VAR_3)
  return (VAR_1);
 VAR_10 = FUNC_1(VAR_8->type & ~VAR_4,
  &VAR_9.type);
 if (VAR_10 != 0)
  return (VAR_10);
 if (VAR_8->protocol != 0 && VAR_8->protocol != VAR_6)







  return (VAR_2);
 else
  VAR_9.protocol = 0;
 VAR_9.rsv = (int *)FUNC_0(VAR_8->rsv);
 return (FUNC_3(VAR_7, &VAR_9));
}
