
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array_cpu {int disabled; } ;
struct trace_array {struct trace_array_cpu** data; } ;


 int FUNC_0 (struct trace_array*,unsigned long,int,int) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 int VAR_0 ;
 struct trace_array* VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
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
 int VAR_8;
 int VAR_9;

 if (FUNC_9(!VAR_0))
  return;





 FUNC_5(VAR_6);
 VAR_8 = FUNC_7();
 VAR_5 = VAR_4->data[VAR_8];
 VAR_7 = FUNC_2(&VAR_5->disabled);

 if (FUNC_3(VAR_7 == 1)) {
  VAR_9 = FUNC_6();
  FUNC_8(VAR_4, VAR_2, VAR_3, VAR_6, VAR_9);
  FUNC_0(VAR_4, VAR_6, 5, VAR_9);
 }

 FUNC_1(&VAR_5->disabled);
 FUNC_4(VAR_6);
}
