
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_trace_exit {int nr; int ret; } ;
struct syscall_metadata {int exit_event; int exit_id; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ring_buffer*,int ,struct syscall_trace_exit*,struct ring_buffer_event*) ;
 struct syscall_trace_exit* FUNC_1 (struct ring_buffer_event*) ;
 int FUNC_2 (int ,struct pt_regs*) ;
 struct syscall_metadata* FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 struct ring_buffer_event* FUNC_5 (struct ring_buffer**,int ,int,int ,int ) ;
 int FUNC_6 (struct ring_buffer*,struct ring_buffer_event*,int ,int ) ;
 int FUNC_7 (int ,struct pt_regs*) ;

void FUNC_8(struct pt_regs *VAR_2, long VAR_3)
{
 struct syscall_trace_exit *VAR_4;
 struct syscall_metadata *VAR_5;
 struct ring_buffer_event *VAR_6;
 struct ring_buffer *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_0, VAR_2);
 if (VAR_8 < 0)
  return;
 if (!FUNC_4(VAR_8, VAR_1))
  return;

 VAR_5 = FUNC_3(VAR_8);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_5(&VAR_7, VAR_5->exit_id,
    sizeof(*VAR_4), 0, 0);
 if (!VAR_6)
  return;

 VAR_4 = FUNC_1(VAR_6);
 VAR_4->nr = VAR_8;
 VAR_4->ret = FUNC_2(VAR_0, VAR_2);

 if (!FUNC_0(VAR_7, VAR_5->exit_event,
       VAR_4, VAR_6))
  FUNC_6(VAR_7, VAR_6, 0, 0);
}
