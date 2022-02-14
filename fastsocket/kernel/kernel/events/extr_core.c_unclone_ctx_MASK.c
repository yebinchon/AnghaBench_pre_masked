
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int * parent_ctx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct perf_event_context *VAR_0)
{
 if (VAR_0->parent_ctx) {
  FUNC_0(VAR_0->parent_ctx);
  VAR_0->parent_ctx = ((void*)0);
 }
}
