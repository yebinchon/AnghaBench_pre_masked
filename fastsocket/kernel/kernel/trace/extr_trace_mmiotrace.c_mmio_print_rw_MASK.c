
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct mmiotrace_rw {int opcode; int value; int pc; scalar_t__ phys; int map_id; int width; } ;
struct trace_mmiotrace_rw {struct mmiotrace_rw rw; } ;
struct trace_iterator {int ts; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct trace_mmiotrace_rw*,struct trace_entry*) ;
 int FUNC_3 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t FUNC_4(struct trace_iterator *VAR_3)
{
 struct trace_entry *VAR_4 = VAR_3->ent;
 struct trace_mmiotrace_rw *VAR_5;
 struct mmiotrace_rw *VAR_6;
 struct trace_seq *VAR_7 = &VAR_3->seq;
 unsigned long long VAR_8 = FUNC_1(VAR_3->ts);
 unsigned long VAR_9 = FUNC_0(VAR_8, VAR_2);
 unsigned VAR_10 = (unsigned long)VAR_8;
 int VAR_11 = 1;

 FUNC_2(VAR_5, VAR_4);
 VAR_6 = &VAR_5->rw;

 switch (VAR_6->opcode) {
 case 130:
  VAR_11 = FUNC_3(VAR_7,
   "R %d %u.%06lu %d 0x%llx 0x%lx 0x%lx %d\n",
   VAR_6->width, VAR_10, VAR_9, VAR_6->map_id,
   (unsigned long long)VAR_6->phys,
   VAR_6->value, VAR_6->pc, 0);
  break;
 case 128:
  VAR_11 = FUNC_3(VAR_7,
   "W %d %u.%06lu %d 0x%llx 0x%lx 0x%lx %d\n",
   VAR_6->width, VAR_10, VAR_9, VAR_6->map_id,
   (unsigned long long)VAR_6->phys,
   VAR_6->value, VAR_6->pc, 0);
  break;
 case 129:
  VAR_11 = FUNC_3(VAR_7,
   "UNKNOWN %u.%06lu %d 0x%llx %02lx,%02lx,"
   "%02lx 0x%lx %d\n",
   VAR_10, VAR_9, VAR_6->map_id,
   (unsigned long long)VAR_6->phys,
   (VAR_6->value >> 16) & 0xff, (VAR_6->value >> 8) & 0xff,
   (VAR_6->value >> 0) & 0xff, VAR_6->pc, 0);
  break;
 default:
  VAR_11 = FUNC_3(VAR_7, "rw what?\n");
  break;
 }
 if (VAR_11)
  return VAR_0;
 return VAR_1;
}
