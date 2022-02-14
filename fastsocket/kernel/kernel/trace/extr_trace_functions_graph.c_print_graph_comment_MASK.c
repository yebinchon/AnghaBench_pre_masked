
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {char* buffer; int len; } ;
struct trace_iterator {TYPE_1__* ent; int cpu; struct fgraph_data* private; } ;
struct trace_event {int (* trace ) (struct trace_iterator*,unsigned long) ;} ;
struct trace_entry {int type; } ;
struct fgraph_data {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_4__ {int depth; } ;
struct TYPE_3__ {int type; } ;



 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct trace_event* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct fgraph_data*,int ) ;
 int FUNC_2 (int,struct trace_seq*,int) ;
 scalar_t__ FUNC_3 (struct trace_iterator*,struct trace_seq*,int ,int ,int) ;
 int FUNC_4 (struct trace_iterator*,unsigned long) ;
 unsigned long VAR_6 ;
 int FUNC_5 (struct trace_iterator*) ;
 int FUNC_6 (struct trace_iterator*) ;
 int FUNC_7 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_8(struct trace_seq *VAR_7, struct trace_entry *VAR_8,
      struct trace_iterator *VAR_9, u32 VAR_10)
{
 unsigned long VAR_11 = (VAR_6 & VAR_2);
 struct fgraph_data *VAR_12 = VAR_9->private;
 struct trace_event *VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;

 if (VAR_12)
  VAR_14 = FUNC_1(VAR_12, VAR_9->cpu)->depth;

 if (FUNC_3(VAR_9, VAR_7, 0, 0, VAR_10))
  return VAR_4;


 VAR_15 = FUNC_2(-1, VAR_7, VAR_10);
 if (!VAR_15)
  return VAR_4;


 if (VAR_10 & VAR_1) {
  VAR_15 = FUNC_7(VAR_7, "            |  ");
  if (!VAR_15)
   return VAR_4;
 }


 if (VAR_14 > 0)
  for (VAR_16 = 0; VAR_16 < (VAR_14 + 1) * VAR_0; VAR_16++) {
   VAR_15 = FUNC_7(VAR_7, " ");
   if (!VAR_15)
    return VAR_4;
  }


 VAR_15 = FUNC_7(VAR_7, "/* ");
 if (!VAR_15)
  return VAR_4;

 switch (VAR_9->ent->type) {
 case 129:
  VAR_15 = FUNC_5(VAR_9);
  if (VAR_15 != VAR_3)
   return VAR_15;
  break;
 case 128:
  VAR_15 = FUNC_6(VAR_9);
  if (VAR_15 != VAR_3)
   return VAR_15;
  break;
 default:
  VAR_13 = FUNC_0(VAR_8->type);
  if (!VAR_13)
   return VAR_5;

  VAR_15 = VAR_13->trace(VAR_9, VAR_11);
  if (VAR_15 != VAR_3)
   return VAR_15;
 }


 if (VAR_7->buffer[VAR_7->len - 1] == '\n') {
  VAR_7->buffer[VAR_7->len - 1] = '\0';
  VAR_7->len--;
 }

 VAR_15 = FUNC_7(VAR_7, " */\n");
 if (!VAR_15)
  return VAR_4;

 return VAR_3;
}
