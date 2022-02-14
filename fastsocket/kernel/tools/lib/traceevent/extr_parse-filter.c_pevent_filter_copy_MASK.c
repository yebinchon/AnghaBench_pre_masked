
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_filter {int filters; int * event_filters; } ;


 scalar_t__ FUNC_0 (struct event_filter*,struct event_filter*,int *) ;
 int FUNC_1 (struct event_filter*) ;

int FUNC_2(struct event_filter *VAR_0, struct event_filter *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 FUNC_1(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->filters; VAR_3++) {
  if (FUNC_0(VAR_0, VAR_1, &VAR_1->event_filters[VAR_3]))
   VAR_2 = -1;
 }
 return VAR_2;
}
