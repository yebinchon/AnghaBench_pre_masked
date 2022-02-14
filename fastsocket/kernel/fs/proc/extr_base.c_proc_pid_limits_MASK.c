
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_1__* signal; } ;
struct rlimit {int rlim_max; int rlim_cur; } ;
struct TYPE_4__ {char* name; char* unit; } ;
struct TYPE_3__ {int rlim; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct task_struct*,unsigned long*) ;
 int FUNC_1 (struct rlimit*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;
 int FUNC_3 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_3, char *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;
 unsigned long VAR_7;
 char *VAR_8 = VAR_4;

 struct rlimit VAR_9[VAR_1];

 if (!FUNC_0(VAR_3, &VAR_7))
  return 0;
 FUNC_1(VAR_9, VAR_3->signal->rlim, sizeof(struct rlimit) * VAR_1);
 FUNC_3(VAR_3, &VAR_7);




 VAR_6 += FUNC_2(&VAR_8[VAR_6], "%-25s %-20s %-20s %-10s\n",
   "Limit", "Soft Limit", "Hard Limit", "Units");

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_9[VAR_5].rlim_cur == VAR_0)
   VAR_6 += FUNC_2(&VAR_8[VAR_6], "%-25s %-20s ",
      VAR_2[VAR_5].name, "unlimited");
  else
   VAR_6 += FUNC_2(&VAR_8[VAR_6], "%-25s %-20lu ",
      VAR_2[VAR_5].name, VAR_9[VAR_5].rlim_cur);

  if (VAR_9[VAR_5].rlim_max == VAR_0)
   VAR_6 += FUNC_2(&VAR_8[VAR_6], "%-20s ", "unlimited");
  else
   VAR_6 += FUNC_2(&VAR_8[VAR_6], "%-20lu ",
      VAR_9[VAR_5].rlim_max);

  if (VAR_2[VAR_5].unit)
   VAR_6 += FUNC_2(&VAR_8[VAR_6], "%-10s\n",
      VAR_2[VAR_5].unit);
  else
   VAR_6 += FUNC_2(&VAR_8[VAR_6], "\n");
 }

 return VAR_6;
}
