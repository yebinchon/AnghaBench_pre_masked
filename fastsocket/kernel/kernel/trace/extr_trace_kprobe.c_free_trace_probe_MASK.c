
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct trace_probe* name; struct trace_probe* system; } ;
struct trace_probe {int nr_args; struct trace_probe* symbol; TYPE_1__ call; int * args; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct trace_probe*) ;

__attribute__((used)) static void FUNC_2(struct trace_probe *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_args; VAR_1++)
  FUNC_0(&VAR_0->args[VAR_1]);

 FUNC_1(VAR_0->call.system);
 FUNC_1(VAR_0->call.name);
 FUNC_1(VAR_0->symbol);
 FUNC_1(VAR_0);
}
