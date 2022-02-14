
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int disabled; } ;
struct trace_array {struct trace_array_cpu** data; } ;


 int FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 struct trace_array* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct trace_array*,unsigned long,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(unsigned long VAR_2, unsigned long VAR_3)
{
 struct trace_array *VAR_4 = VAR_1;
 struct trace_array_cpu *VAR_5;
 unsigned long VAR_6;
 long VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 if (FUNC_9(!VAR_0))
  return;

 VAR_10 = FUNC_6();
 VAR_9 = FUNC_2();
 FUNC_5(VAR_6);
 VAR_8 = FUNC_7();
 VAR_5 = VAR_4->data[VAR_8];
 VAR_7 = FUNC_1(&VAR_5->disabled);

 if (FUNC_4(VAR_7 == 1))
  FUNC_8(VAR_4, VAR_2, VAR_3, VAR_6, VAR_10);

 FUNC_0(&VAR_5->disabled);
 FUNC_3(VAR_9);
}
