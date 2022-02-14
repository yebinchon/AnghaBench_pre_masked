
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct mempolicy* mempolicy; } ;
struct TYPE_2__ {int nodes; } ;
struct mempolicy {int mode; TYPE_1__ v; } ;
typedef int nodemask_t ;


 int FUNC_0 () ;



 int FUNC_1 (int ,int const) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

bool FUNC_4(struct task_struct *VAR_0,
     const nodemask_t *VAR_1)
{
 struct mempolicy *VAR_2;
 bool VAR_3 = 1;

 if (!VAR_1)
  return VAR_3;
 FUNC_2(VAR_0);
 VAR_2 = VAR_0->mempolicy;
 if (!VAR_2)
  goto out;

 switch (VAR_2->mode) {
 case 128:






  break;
 case 130:
 case 129:
  VAR_3 = FUNC_1(VAR_2->v.nodes, *VAR_1);
  break;
 default:
  FUNC_0();
 }
out:
 FUNC_3(VAR_0);
 return VAR_3;
}
