
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_mincore_args {int start; int vec; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thread*,int,int ,int ) ;

int
FUNC_1(struct thread *VAR_2, struct linux_mincore_args *VAR_3)
{


 if (VAR_3->start & VAR_1)
  return (VAR_0);
 return (FUNC_0(VAR_2, VAR_3->start, VAR_3->len, VAR_3->vec));
}
