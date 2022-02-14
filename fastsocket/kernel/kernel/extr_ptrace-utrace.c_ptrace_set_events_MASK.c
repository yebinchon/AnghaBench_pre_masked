
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {int dummy; } ;
struct task_struct {int dummy; } ;
struct ptrace_context {unsigned long options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_5 ;
 struct ptrace_context* FUNC_1 (struct utrace_engine*) ;
 int FUNC_2 (struct task_struct*,struct utrace_engine*,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct task_struct *VAR_6,
     struct utrace_engine *VAR_7,
     unsigned long VAR_8)
{
 struct ptrace_context *VAR_9 = FUNC_1(VAR_7);




 unsigned long VAR_10 = FUNC_0(VAR_4) | FUNC_0(VAR_0) |
          FUNC_0(VAR_1) | VAR_5;

 VAR_9->options = VAR_8;
 if (VAR_8 & VAR_3)
  VAR_10 |= FUNC_0(VAR_2);

 return FUNC_2(VAR_6, VAR_7, VAR_10);
}
