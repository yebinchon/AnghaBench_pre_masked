
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {long offset; } ;


 struct probe_trace_arg_ref* FUNC_0 (int) ;

__attribute__((used)) static struct probe_trace_arg_ref *FUNC_1(long VAR_0)
{
 struct probe_trace_arg_ref *VAR_1;
 VAR_1 = FUNC_0(sizeof(struct probe_trace_arg_ref));
 if (VAR_1 != ((void*)0))
  VAR_1->offset = VAR_0;
 return VAR_1;
}
