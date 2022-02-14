
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int dummy; } ;
struct trace_array {int dummy; } ;
struct pt_regs {int ip; } ;
struct backtrace_info {int pos; struct trace_array_cpu* data; struct trace_array* tr; } ;


 int FUNC_0 (struct trace_array*,struct trace_array_cpu*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct pt_regs*,void*,int *,struct backtrace_info*) ;

__attribute__((used)) static int
FUNC_2(struct pt_regs *VAR_1, struct trace_array *VAR_2,
      struct trace_array_cpu *VAR_3)
{
 struct backtrace_info VAR_4;
 char *VAR_5;

 VAR_4.tr = VAR_2;
 VAR_4.data = VAR_3;
 VAR_4.pos = 1;

 FUNC_0(VAR_4.tr, VAR_4.data, 1, VAR_1->ip, 0);
 VAR_5 = ((char *)VAR_1 + sizeof(struct pt_regs));
 FUNC_1(((void*)0), VAR_1, (void *)VAR_5, &VAR_0, &VAR_4);

 return VAR_4.pos;
}
