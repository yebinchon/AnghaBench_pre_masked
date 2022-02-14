
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filter_type {int event_id; TYPE_2__* filter; } ;
struct event_filter {int filters; struct filter_type* event_filters; } ;
typedef enum filter_trivial_type { ____Placeholder_filter_trivial_type } filter_trivial_type ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ boolean; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct event_filter*,int) ;
 int* FUNC_3 (int*,int) ;

void FUNC_4(struct event_filter *VAR_1,
     enum filter_trivial_type VAR_2)
{
 struct filter_type *VAR_3;
 int VAR_4 = 0;
 int *VAR_5 = ((void*)0);
 int VAR_6;

 if (!VAR_1->filters)
  return;





 for (VAR_6 = 0; VAR_6 < VAR_1->filters; VAR_6++) {
  VAR_3 = &VAR_1->event_filters[VAR_6];
  if (VAR_3->filter->type != VAR_0)
   continue;
  switch (VAR_2) {
  case 129:
   if (VAR_3->filter->boolean.value)
    continue;
  case 128:
   if (!VAR_3->filter->boolean.value)
    continue;
  default:
   break;
  }

  VAR_5 = FUNC_3(VAR_5, sizeof(*VAR_5) * (VAR_4 + 1));
  if (!VAR_5)
   FUNC_0("Can't allocate ids");
  VAR_5[VAR_4++] = VAR_3->event_id;
 }

 if (!VAR_4)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_2(VAR_1, VAR_5[VAR_6]);

 FUNC_1(VAR_5);
}
