
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine_ops {int dummy; } ;
struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;
struct pid {int dummy; } ;


 struct utrace_engine* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_1 (struct pid*,int ) ;
 int FUNC_2 (struct task_struct*) ;
 struct utrace_engine* FUNC_3 (struct task_struct*,int,struct utrace_engine_ops const*,void*) ;

struct utrace_engine *FUNC_4(
 struct pid *VAR_2, int VAR_3,
 const struct utrace_engine_ops *VAR_4, void *VAR_5)
{
 struct utrace_engine *VAR_6 = FUNC_0(-VAR_0);
 struct task_struct *VAR_7 = FUNC_1(VAR_2, VAR_1);
 if (VAR_7) {
  VAR_6 = FUNC_3(VAR_7, VAR_3, VAR_4, VAR_5);
  FUNC_2(VAR_7);
 }
 return VAR_6;
}
