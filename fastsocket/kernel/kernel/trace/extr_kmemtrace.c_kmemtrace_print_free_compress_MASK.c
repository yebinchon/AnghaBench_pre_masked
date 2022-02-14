
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct kmemtrace_free_entry {int type_id; scalar_t__ call_site; scalar_t__ ptr; } ;
typedef void* ptrdiff_t ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kmemtrace_free_entry*,int ) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;

__attribute__((used)) static enum print_line_t
FUNC_2(struct trace_iterator *VAR_2)
{
 struct kmemtrace_free_entry *VAR_3;
 struct trace_seq *VAR_4 = &VAR_2->seq;
 int VAR_5;

 FUNC_0(VAR_3, VAR_2->ent);


 VAR_5 = FUNC_1(VAR_4, "  -      ");
 if (!VAR_5)
  return VAR_1;


 switch (VAR_3->type_id) {
 case 129:
  VAR_5 = FUNC_1(VAR_4, "K     ");
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_4, "C     ");
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_4, "P     ");
  break;
 default:
  VAR_5 = FUNC_1(VAR_4, "?     ");
 }

 if (!VAR_5)
  return VAR_1;


 VAR_5 = FUNC_1(VAR_4, "                       ");
 if (!VAR_5)
  return VAR_1;


 VAR_5 = FUNC_1(VAR_4, "0x%tx   ", (ptrdiff_t)VAR_3->ptr);
 if (!VAR_5)
  return VAR_1;


 VAR_5 = FUNC_1(VAR_4, "       %pf\n", (void *)VAR_3->call_site);
 if (!VAR_5)
  return VAR_1;

 return VAR_0;
}
