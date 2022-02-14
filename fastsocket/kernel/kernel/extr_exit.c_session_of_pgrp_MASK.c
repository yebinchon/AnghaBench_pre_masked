
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (struct pid*,int ) ;
 struct pid* FUNC_1 (struct task_struct*) ;

struct pid *FUNC_2(struct pid *VAR_2)
{
 struct task_struct *VAR_3;
 struct pid *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 != ((void*)0))
  VAR_4 = FUNC_1(VAR_3);

 return VAR_4;
}
