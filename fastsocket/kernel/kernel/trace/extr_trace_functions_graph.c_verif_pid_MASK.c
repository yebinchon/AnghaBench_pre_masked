
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct fgraph_data {int dummy; } ;
typedef int pid_t ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int last_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct fgraph_data*,int) ;
 int FUNC_1 (struct trace_seq*,int) ;
 int FUNC_2 (struct trace_seq*,int) ;
 int FUNC_3 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_4(struct trace_seq *VAR_2, pid_t VAR_3, int VAR_4, struct fgraph_data *VAR_5)
{
 pid_t VAR_6;
 pid_t *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return VAR_0;

 VAR_7 = &(FUNC_0(VAR_5, VAR_4)->last_pid);

 if (*VAR_7 == VAR_3)
  return VAR_0;

 VAR_6 = *VAR_7;
 *VAR_7 = VAR_3;

 if (VAR_6 == -1)
  return VAR_0;
 VAR_8 = FUNC_3(VAR_2,
  " ------------------------------------------\n");
 if (!VAR_8)
  return VAR_1;

 VAR_8 = FUNC_1(VAR_2, VAR_4);
 if (VAR_8 == VAR_1)
  return VAR_1;

 VAR_8 = FUNC_2(VAR_2, VAR_6);
 if (VAR_8 == VAR_1)
  return VAR_1;

 VAR_8 = FUNC_3(VAR_2, " => ");
 if (!VAR_8)
  return VAR_1;

 VAR_8 = FUNC_2(VAR_2, VAR_3);
 if (VAR_8 == VAR_1)
  return VAR_1;

 VAR_8 = FUNC_3(VAR_2,
  "\n ------------------------------------------\n\n");
 if (!VAR_8)
  return VAR_1;

 return VAR_0;
}
