
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_type {TYPE_1__* filter; int event_id; } ;
struct event_filter {int filters; struct filter_type* event_filters; } ;
struct TYPE_2__ {int type; } ;




 char* FUNC_0 (struct event_filter*,TYPE_1__*) ;
 struct filter_type* FUNC_1 (struct event_filter*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

int FUNC_4(struct event_filter *VAR_0, struct event_filter *VAR_1)
{
 struct filter_type *VAR_2;
 struct filter_type *VAR_3;
 char *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7;


 if (VAR_0->filters != VAR_1->filters)
  return 0;
 if (!VAR_0->filters && !VAR_1->filters)
  return 1;





 for (VAR_7 = 0; VAR_7 < VAR_0->filters; VAR_7++) {
  VAR_2 = &VAR_0->event_filters[VAR_7];
  VAR_3 = FUNC_1(VAR_1, VAR_2->event_id);
  if (!VAR_3)
   break;
  if (VAR_2->filter->type != VAR_3->filter->type)
   break;
  switch (VAR_2->filter->type) {
  case 129:
  case 128:

   continue;
  default:
   break;
  }

  VAR_4 = FUNC_0(VAR_0, VAR_2->filter);
  VAR_5 = FUNC_0(VAR_1, VAR_3->filter);
  if (VAR_4 && VAR_5)
   VAR_6 = FUNC_3(VAR_4, VAR_5) != 0;
  else

   VAR_6 = 1;

  FUNC_2(VAR_4);
  FUNC_2(VAR_5);
  if (VAR_6)
   break;
 }

 if (VAR_7 < VAR_0->filters)
  return 0;
 return 1;
}
