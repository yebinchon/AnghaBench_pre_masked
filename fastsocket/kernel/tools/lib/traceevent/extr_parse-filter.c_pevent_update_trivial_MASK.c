
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent {int dummy; } ;
struct filter_type {struct event_format* event; struct filter_arg* filter; } ;
struct TYPE_2__ {scalar_t__ value; } ;
struct filter_arg {scalar_t__ type; TYPE_1__ boolean; } ;
struct event_format {int id; int name; int system; } ;
struct event_filter {int filters; struct filter_type* event_filters; struct pevent* pevent; } ;
typedef enum filter_trivial_type { ____Placeholder_filter_trivial_type } filter_trivial_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct event_filter*,struct event_format*,char*,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct event_filter*,int ) ;
 struct event_format* FUNC_3 (struct pevent*,int ,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(struct event_filter *VAR_3, struct event_filter *VAR_4,
     enum filter_trivial_type VAR_5)
{
 struct pevent *VAR_6;
 struct pevent *VAR_7;
 struct event_format *VAR_8;
 struct filter_type *VAR_9;
 struct filter_arg *VAR_10;
 char *VAR_11;
 int VAR_12;

 VAR_6 = VAR_4->pevent;
 VAR_7 = VAR_3->pevent;


 if (!VAR_3->filters || !VAR_4->filters)
  return 0;

 for (VAR_12 = 0; VAR_12 < VAR_3->filters; VAR_12++) {
  VAR_9 = &VAR_3->event_filters[VAR_12];
  VAR_10 = VAR_9->filter;
  if (VAR_10->type != VAR_0)
   continue;
  if ((VAR_10->boolean.value && VAR_5 == VAR_1) ||
      (!VAR_10->boolean.value && VAR_5 == VAR_2))
   continue;

  VAR_8 = VAR_9->event;

  if (VAR_6 != VAR_7) {

   VAR_8 = FUNC_3(VAR_6,
         VAR_8->system,
         VAR_8->name);
   if (!VAR_8)
    return -1;
  }

  VAR_11 = FUNC_2(VAR_4, VAR_8->id);
  if (!VAR_11)
   continue;


  if (FUNC_4(VAR_11, "TRUE") != 0 && FUNC_4(VAR_11, "FALSE") != 0)
   FUNC_0(VAR_3, VAR_8, VAR_11, ((void*)0));
  FUNC_1(VAR_11);
 }
 return 0;
}
