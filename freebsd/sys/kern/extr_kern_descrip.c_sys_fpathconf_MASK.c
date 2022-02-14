
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {long* td_retval; } ;
struct fpathconf_args {int name; int fd; } ;


 int FUNC_0 (struct thread*,int ,int ,long*) ;

int
FUNC_1(struct thread *VAR_0, struct fpathconf_args *VAR_1)
{
 long VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->fd, VAR_1->name, &VAR_2);
 if (VAR_3 == 0)
  VAR_0->td_retval[0] = VAR_2;
 return (VAR_3);
}
