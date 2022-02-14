
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_entry {int flags; char preempt_count; char lock_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct trace_seq*,char*,char,...) ;
 int FUNC_1 (struct trace_seq*,char) ;

int FUNC_2(struct trace_seq *VAR_5, struct trace_entry *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_6->flags & VAR_0;
 VAR_8 = VAR_6->flags & VAR_4;

 if (!FUNC_0(VAR_5, "%c%c%c",
         (VAR_6->flags & VAR_2) ? 'd' :
    (VAR_6->flags & VAR_1) ?
      'X' : '.',
         (VAR_6->flags & VAR_3) ?
    'N' : '.',
         (VAR_7 && VAR_8) ? 'H' :
    VAR_7 ? 'h' : VAR_8 ? 's' : '.'))
  return 0;

 if (VAR_6->preempt_count)
  VAR_9 = FUNC_0(VAR_5, "%x", VAR_6->preempt_count);
 else
  VAR_9 = FUNC_1(VAR_5, '.');

 if (!VAR_9)
  return 0;

 if (VAR_6->lock_depth < 0)
  return FUNC_1(VAR_5, '.');

 return FUNC_0(VAR_5, "%d", VAR_6->lock_depth);
}
