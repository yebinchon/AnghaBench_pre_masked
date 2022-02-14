
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_point {int retprobe; int offset; int symbol; } ;
struct perf_probe_point {int retprobe; int offset; int * function; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct probe_trace_point *VAR_1,
     struct perf_probe_point *VAR_2)
{
 VAR_2->function = FUNC_0(VAR_1->symbol);

 if (VAR_2->function == ((void*)0))
  return -VAR_0;

 VAR_2->offset = VAR_1->offset;
 VAR_2->retprobe = VAR_1->retprobe;

 return 0;
}
