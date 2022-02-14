
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct siginfo {int dummy; } ;
struct TYPE_2__ {int (* task_kill ) (struct task_struct*,struct siginfo*,int,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct task_struct*,struct siginfo*,int,int ) ;

int FUNC_1(struct task_struct *VAR_1, struct siginfo *VAR_2,
   int VAR_3, u32 VAR_4)
{
 return VAR_0->task_kill(VAR_1, VAR_2, VAR_3, VAR_4);
}
