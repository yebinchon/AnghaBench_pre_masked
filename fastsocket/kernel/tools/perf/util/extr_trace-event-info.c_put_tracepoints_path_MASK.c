
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_path {struct tracepoint_path* system; struct tracepoint_path* name; struct tracepoint_path* next; } ;


 int FUNC_0 (struct tracepoint_path*) ;

__attribute__((used)) static void
FUNC_1(struct tracepoint_path *VAR_0)
{
 while (VAR_0) {
  struct tracepoint_path *VAR_1 = VAR_0;

  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1->system);
  FUNC_0(VAR_1);
 }
}
