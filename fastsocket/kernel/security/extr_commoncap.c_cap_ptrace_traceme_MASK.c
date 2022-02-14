
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_4__ {int cap_permitted; } ;
struct TYPE_3__ {int cap_permitted; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (struct task_struct*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct task_struct *VAR_2)
{
 int VAR_3 = 0;

 FUNC_4();
 if (!FUNC_1(FUNC_2()->cap_permitted,
     FUNC_0(VAR_2)->cap_permitted) &&
     !FUNC_3(VAR_2, VAR_0))
  VAR_3 = -VAR_1;
 FUNC_5();
 return VAR_3;
}
