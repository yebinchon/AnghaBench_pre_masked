
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_trace {int entries; int nr_entries; } ;
struct TYPE_2__ {int start; } ;
struct kmemleak_object {int flags; int count; int min_count; int jiffies; int pid; int comm; int size; TYPE_1__ tree_node; int trace; int trace_len; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct stack_trace*,int) ;

__attribute__((used)) static void FUNC_2(struct kmemleak_object *VAR_0)
{
 struct stack_trace VAR_1;

 VAR_1.nr_entries = VAR_0->trace_len;
 VAR_1.entries = VAR_0->trace;

 FUNC_0("Object 0x%08lx (size %zu):\n",
    VAR_0->tree_node.start, VAR_0->size);
 FUNC_0("  comm \"%s\", pid %d, jiffies %lu\n",
    VAR_0->comm, VAR_0->pid, VAR_0->jiffies);
 FUNC_0("  min_count = %d\n", VAR_0->min_count);
 FUNC_0("  count = %d\n", VAR_0->count);
 FUNC_0("  flags = 0x%lx\n", VAR_0->flags);
 FUNC_0("  backtrace:\n");
 FUNC_1(&VAR_1, 4);
}
