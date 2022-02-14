
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct probe_trace_point {int symbol; } ;
struct perf_probe_point {int dummy; } ;


 int VAR_0 ;
 struct symbol* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct probe_trace_point*,struct perf_probe_point*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct probe_trace_point *VAR_1,
     struct perf_probe_point *VAR_2)
{
 struct symbol *VAR_3;

 VAR_3 = FUNC_0(VAR_1->symbol, ((void*)0));
 if (!VAR_3) {
  FUNC_2("Failed to find symbol %s in kernel.\n", VAR_1->symbol);
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2);
}
