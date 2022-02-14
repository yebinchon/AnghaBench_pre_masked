
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int evq; int tcal; int last_time; int time; int tnt; int ip; int * event; scalar_t__ consume_packet; scalar_t__ enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pt_query_decoder *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->enabled = 0;
 VAR_0->consume_packet = 0;
 VAR_0->event = ((void*)0);

 FUNC_1(&VAR_0->ip);
 FUNC_4(&VAR_0->tnt);
 FUNC_3(&VAR_0->time);
 FUNC_3(&VAR_0->last_time);
 FUNC_2(&VAR_0->tcal);
 FUNC_0(&VAR_0->evq);
}
