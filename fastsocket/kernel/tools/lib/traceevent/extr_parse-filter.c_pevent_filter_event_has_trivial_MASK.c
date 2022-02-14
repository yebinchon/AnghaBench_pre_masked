
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filter_type {TYPE_2__* filter; } ;
struct event_filter {int filters; } ;
typedef enum filter_trivial_type { ____Placeholder_filter_trivial_type } filter_trivial_type ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ boolean; } ;


 scalar_t__ VAR_0 ;


 struct filter_type* FUNC_0 (struct event_filter*,int) ;

int FUNC_1(struct event_filter *VAR_1,
        int VAR_2,
        enum filter_trivial_type VAR_3)
{
 struct filter_type *VAR_4;

 if (!VAR_1->filters)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_4)
  return 0;

 if (VAR_4->filter->type != VAR_0)
  return 0;

 switch (VAR_3) {
 case 129:
  return !VAR_4->filter->boolean.value;

 case 128:
  return VAR_4->filter->boolean.value;
 default:
  return 1;
 }
}
