
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int disabled; } ;
struct trace_array {struct trace_array_cpu** data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct trace_array*,unsigned long,unsigned long,unsigned long,int) ;
 struct trace_array VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_1 ;

void
FUNC_8(unsigned long VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 struct trace_array *VAR_5 = &VAR_0;
 struct trace_array_cpu *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_1)
  return;

 VAR_9 = FUNC_6();
 FUNC_5(VAR_7);
 VAR_8 = FUNC_7();
 VAR_6 = VAR_5->data[VAR_8];

 if (FUNC_3(FUNC_1(&VAR_6->disabled) == 1))
  FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4, VAR_9);

 FUNC_0(&VAR_6->disabled);
 FUNC_4(VAR_7);
}
