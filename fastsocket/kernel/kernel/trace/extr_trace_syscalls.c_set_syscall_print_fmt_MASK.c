
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct syscall_metadata {struct ftrace_event_call* enter_event; } ;
struct TYPE_2__ {char* print_fmt; } ;
struct ftrace_event_call {TYPE_1__ fmt; struct syscall_metadata* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct syscall_metadata*,char*,int) ;
 char* FUNC_1 (int,int ) ;

int FUNC_2(struct ftrace_event_call *VAR_2)
{
 char *VAR_3;
 int VAR_4;
 struct syscall_metadata *VAR_5 = VAR_2->data;

 if (VAR_5->enter_event != VAR_2) {
  VAR_2->fmt.print_fmt = "\"0x%lx\", REC->ret";
  return 0;
 }


 VAR_4 = FUNC_0(VAR_5, ((void*)0), 0);

 VAR_3 = FUNC_1(VAR_4 + 1, VAR_1);
 if (!VAR_3)
  return -VAR_0;


 FUNC_0(VAR_5, VAR_3, VAR_4 + 1);
 VAR_2->fmt.print_fmt = VAR_3;

 return 0;
}
