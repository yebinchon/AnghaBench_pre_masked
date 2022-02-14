
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct rlimit {scalar_t__ rlim_max; } ;
struct TYPE_2__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_1, unsigned int VAR_2,
  struct rlimit *VAR_3)
{
 struct rlimit *VAR_4 = VAR_1->signal->rlim + VAR_2;





 if (VAR_4->rlim_max != VAR_3->rlim_max)
  return FUNC_0(VAR_1, VAR_0);

 return 0;
}
