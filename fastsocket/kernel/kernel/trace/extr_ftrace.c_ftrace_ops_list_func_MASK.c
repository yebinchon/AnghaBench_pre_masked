
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {struct ftrace_ops* next; int (* func ) (unsigned long,unsigned long) ;} ;


 struct ftrace_ops VAR_0 ;
 struct ftrace_ops* VAR_1 ;
 scalar_t__ FUNC_0 (struct ftrace_ops*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_2, unsigned long VAR_3)
{
 struct ftrace_ops *VAR_4;





 FUNC_1();
 VAR_4 = VAR_1;
 FUNC_3();
 while (VAR_4 != &VAR_0) {
  if (FUNC_0(VAR_4, VAR_2))
   VAR_4->func(VAR_2, VAR_3);
  VAR_4 = VAR_4->next;
  FUNC_3();
 };
 FUNC_2();
}
