
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;


 int FUNC_0 (long) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_1 (struct task_struct*,struct utrace_engine*,long) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_4,
    struct utrace_engine *VAR_5, long VAR_6)
{
 FUNC_0(VAR_2 & (VAR_3 | VAR_1));

 FUNC_1(VAR_4, VAR_5, VAR_6 & VAR_2);
 return (VAR_6 & ~VAR_2) ? -VAR_0 : 0;
}
