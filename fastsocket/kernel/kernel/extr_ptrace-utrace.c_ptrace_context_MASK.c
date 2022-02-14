
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utrace_engine {struct ptrace_context* data; } ;
struct ptrace_context {int dummy; } ;



__attribute__((used)) static inline struct ptrace_context *
FUNC_0(struct utrace_engine *VAR_0)
{
 return VAR_0->data;
}
