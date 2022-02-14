
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_iterator {TYPE_1__* ent; TYPE_2__* trace; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_4__ {int (* print_line ) (struct trace_iterator*) ;} ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (struct trace_iterator*) ;
 int FUNC_3 (struct trace_iterator*) ;
 int FUNC_4 (struct trace_iterator*) ;
 int VAR_8 ;
 int FUNC_5 (struct trace_iterator*) ;
 int FUNC_6 (struct trace_iterator*) ;

__attribute__((used)) static enum print_line_t FUNC_7(struct trace_iterator *VAR_9)
{
 enum print_line_t VAR_10;

 if (VAR_9->trace && VAR_9->trace->print_line) {
  VAR_10 = VAR_9->trace->print_line(VAR_9);
  if (VAR_10 != VAR_7)
   return VAR_10;
 }

 if (VAR_9->ent->type == VAR_0 &&
   VAR_8 & VAR_3 &&
   VAR_8 & VAR_4)
  return FUNC_5(VAR_9);

 if (VAR_9->ent->type == VAR_6 &&
   VAR_8 & VAR_3 &&
   VAR_8 & VAR_4)
  return FUNC_6(VAR_9);

 if (VAR_8 & VAR_1)
  return FUNC_0(VAR_9);

 if (VAR_8 & VAR_2)
  return FUNC_1(VAR_9);

 if (VAR_8 & VAR_5)
  return FUNC_2(VAR_9);

 return FUNC_3(VAR_9);
}
