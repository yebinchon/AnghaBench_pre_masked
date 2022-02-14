
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_filter {int filters; int * event_filters; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct event_filter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->filters; VAR_1++)
  FUNC_1(&VAR_0->event_filters[VAR_1]);

 FUNC_0(VAR_0->event_filters);
 VAR_0->filters = 0;
 VAR_0->event_filters = ((void*)0);
}
