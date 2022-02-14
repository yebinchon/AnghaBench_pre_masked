
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid {size_t level; TYPE_1__* numbers; } ;
struct TYPE_2__ {int nr; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct pid* FUNC_2 (struct task_struct*) ;

int FUNC_3(struct task_struct *VAR_0)
{
 int VAR_1 = 0;
 struct pid *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 != ((void*)0) && VAR_2->numbers[VAR_2->level].nr == 1)
  VAR_1 = 1;
 FUNC_1();

 return VAR_1;
}
