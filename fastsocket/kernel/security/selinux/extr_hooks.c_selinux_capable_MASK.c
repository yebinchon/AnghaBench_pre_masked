
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (struct task_struct*,struct cred const*,int,int) ;
 int FUNC_1 (struct task_struct*,struct cred const*,int,int) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_0, const struct cred *VAR_1,
      int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
