
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int usage; } ;


 int FUNC_0 (int) ;
 struct cred* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

const struct cred *FUNC_5(struct task_struct *VAR_0)
{
 const struct cred *VAR_1;

 FUNC_3();

 do {
  VAR_1 = FUNC_1((VAR_0));
  FUNC_0(!VAR_1);
 } while (!FUNC_2(&((struct cred *)VAR_1)->usage));

 FUNC_4();
 return VAR_1;
}
