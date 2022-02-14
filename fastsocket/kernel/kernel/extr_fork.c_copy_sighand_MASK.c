
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int sighand; } ;
struct sighand_struct {int action; int count; } ;
struct TYPE_4__ {TYPE_1__* sighand; } ;
struct TYPE_3__ {int action; int count; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* VAR_3 ;
 struct sighand_struct* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,struct sighand_struct*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_5, struct task_struct *VAR_6)
{
 struct sighand_struct *VAR_7;

 if (VAR_5 & VAR_0) {
  FUNC_0(&VAR_3->sighand->count);
  return 0;
 }
 VAR_7 = FUNC_2(VAR_4, VAR_2);
 FUNC_4(VAR_6->sighand, VAR_7);
 if (!VAR_7)
  return -VAR_1;
 FUNC_1(&VAR_7->count, 1);
 FUNC_3(VAR_7->action, VAR_3->sighand->action, sizeof(VAR_7->action));
 return 0;
}
