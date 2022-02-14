
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_metadata {char* name; } ;
struct ftrace_event_call {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (char const*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ftrace_event_call *VAR_5)
{
 int VAR_6;
 const char *VAR_7;

 VAR_7 = ((struct syscall_metadata *)VAR_5->data)->name;
 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6 < 0 || VAR_6 >= VAR_0)
  return;
 FUNC_1(&VAR_4);
 VAR_3--;
 FUNC_0(VAR_6, VAR_1);
 if (!VAR_3)
  FUNC_4(VAR_2);
 FUNC_2(&VAR_4);
}
