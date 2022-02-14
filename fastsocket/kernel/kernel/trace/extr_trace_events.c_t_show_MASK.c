
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ftrace_event_call {int name; int system; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct ftrace_event_call *VAR_3 = VAR_2;

 if (FUNC_1(VAR_3->system, VAR_0) != 0)
  FUNC_0(VAR_1, "%s:", VAR_3->system);
 FUNC_0(VAR_1, "%s\n", VAR_3->name);

 return 0;
}
