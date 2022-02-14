
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {long* td_retval; } ;
struct lpathconf_args {int name; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int ,long*) ;

int
FUNC_1(struct thread *VAR_2, struct lpathconf_args *VAR_3)
{
 long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3->path, VAR_1, VAR_3->name,
     VAR_0, &VAR_4);
 if (VAR_5 == 0)
  VAR_2->td_retval[0] = VAR_4;
 return (VAR_5);
}
