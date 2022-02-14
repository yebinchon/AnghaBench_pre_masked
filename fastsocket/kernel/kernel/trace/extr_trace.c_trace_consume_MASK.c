
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int ts; int cpu; TYPE_1__* tr; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct trace_iterator *VAR_0)
{

 FUNC_0();
 FUNC_2(VAR_0->tr->buffer, VAR_0->cpu, &VAR_0->ts);
 FUNC_1();
}
