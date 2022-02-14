
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; struct trace_seq seq; } ;
typedef int pid_t ;
typedef enum trace_type { ____Placeholder_trace_type } trace_type ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,int) ;
 int FUNC_2 (int,struct trace_seq*,int) ;
 int FUNC_3 (struct trace_seq*,int ) ;
 int FUNC_4 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_5(struct trace_iterator *VAR_10, unsigned long VAR_11,
  enum trace_type VAR_12, int VAR_13, pid_t VAR_14, u32 VAR_15)
{
 int VAR_16;
 struct trace_seq *VAR_17 = &VAR_10->seq;

 if (VAR_11 < (unsigned long)VAR_9 ||
  VAR_11 >= (unsigned long)VAR_8)
  return VAR_7;


 if (VAR_15 & VAR_1) {
  VAR_16 = FUNC_0(VAR_10->ts, VAR_17);
  if (!VAR_16)
   return VAR_6;
 }


 if (VAR_15 & VAR_2) {
  VAR_16 = FUNC_1(VAR_17, VAR_13);
  if (VAR_16 == VAR_6)
   return VAR_6;
 }


 if (VAR_15 & VAR_4) {
  VAR_16 = FUNC_3(VAR_17, VAR_14);
  if (VAR_16 == VAR_6)
   return VAR_6;
  VAR_16 = FUNC_4(VAR_17, " | ");
  if (!VAR_16)
   return VAR_6;
 }


 VAR_16 = FUNC_2(-1, VAR_17, VAR_15);
 if (!VAR_16)
  return VAR_6;

 if (VAR_12 == VAR_0)
  VAR_16 = FUNC_4(VAR_17, "==========>");
 else
  VAR_16 = FUNC_4(VAR_17, "<==========");

 if (!VAR_16)
  return VAR_6;


 if (VAR_15 & VAR_3)
  FUNC_4(VAR_17, " |");
 VAR_16 = FUNC_4(VAR_17, "\n");

 if (!VAR_16)
  return VAR_6;
 return VAR_5;
}
