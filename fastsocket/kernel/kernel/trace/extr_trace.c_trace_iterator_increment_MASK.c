
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {size_t cpu; scalar_t__* buffer_iter; int idx; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(struct trace_iterator *VAR_0)
{

 FUNC_0();

 VAR_0->idx++;
 if (VAR_0->buffer_iter[VAR_0->cpu])
  FUNC_2(VAR_0->buffer_iter[VAR_0->cpu], ((void*)0));

 FUNC_1();
}
