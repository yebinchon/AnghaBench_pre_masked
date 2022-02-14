
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mems_allowed; } ;
struct mm_struct {int dummy; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (struct mm_struct*,int const*,int const*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_2, const nodemask_t *VAR_3,
       const nodemask_t *VAR_4)
{
 struct task_struct *VAR_5 = VAR_1;

 VAR_5->mems_allowed = *VAR_4;

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0);

 FUNC_1(FUNC_2(VAR_5),&VAR_5->mems_allowed);
}
