
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int iter_flags; struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_event {int (* trace ) (struct trace_iterator*,unsigned long) ;} ;
struct trace_entry {int type; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct trace_event* FUNC_0 (int ) ;
 int FUNC_1 (struct trace_iterator*,unsigned long) ;
 int FUNC_2 (struct trace_iterator*) ;
 int VAR_5 ;
 int FUNC_3 (struct trace_iterator*) ;
 int FUNC_4 (struct trace_iterator*) ;
 int FUNC_5 (struct trace_seq*,char*,int ) ;

__attribute__((used)) static enum print_line_t FUNC_6(struct trace_iterator *VAR_6)
{
 struct trace_seq *VAR_7 = &VAR_6->seq;
 unsigned long VAR_8 = (VAR_5 & VAR_2);
 struct trace_entry *VAR_9;
 struct trace_event *VAR_10;

 VAR_9 = VAR_6->ent;

 FUNC_2(VAR_6);

 VAR_10 = FUNC_0(VAR_9->type);

 if (VAR_5 & VAR_1) {
  if (VAR_6->iter_flags & VAR_0) {
   if (!FUNC_4(VAR_6))
    goto partial;
  } else {
   if (!FUNC_3(VAR_6))
    goto partial;
  }
 }

 if (VAR_10)
  return VAR_10->trace(VAR_6, VAR_8);

 if (!FUNC_5(VAR_7, "Unknown type %d\n", VAR_9->type))
  goto partial;

 return VAR_3;
partial:
 return VAR_4;
}
