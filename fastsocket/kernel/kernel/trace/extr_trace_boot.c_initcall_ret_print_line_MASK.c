
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {scalar_t__ ts; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
struct boot_trace_ret {int duration; int result; int func; } ;
struct trace_boot_ret {struct boot_trace_ret boot_ret; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct trace_boot_ret*,struct trace_entry*) ;
 int FUNC_2 (struct trace_seq*,char*,unsigned long,unsigned long,int ,int ,int ) ;

__attribute__((used)) static enum print_line_t
FUNC_3(struct trace_iterator *VAR_3)
{
 struct trace_entry *VAR_4 = VAR_3->ent;
 struct trace_seq *VAR_5 = &VAR_3->seq;
 struct trace_boot_ret *VAR_6;
 struct boot_trace_ret *VAR_7;
 u64 VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, VAR_4);
 VAR_7 = &VAR_6->boot_ret;
 VAR_8 = VAR_3->ts;
 VAR_9 = FUNC_0(VAR_8, VAR_0);

 VAR_10 = FUNC_2(VAR_5, "[%5ld.%09ld] initcall %s "
   "returned %d after %llu msecs\n",
   (unsigned long) VAR_8,
   VAR_9,
   VAR_7->func, VAR_7->result, VAR_7->duration);

 if (!VAR_10)
  return VAR_2;
 else
  return VAR_1;
}
