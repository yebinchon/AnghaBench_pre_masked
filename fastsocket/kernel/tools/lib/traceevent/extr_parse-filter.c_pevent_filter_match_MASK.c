
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent_record {int dummy; } ;
struct pevent {int dummy; } ;
struct filter_type {int filter; int event; } ;
struct event_filter {int filters; struct pevent* pevent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct filter_type* FUNC_0 (struct event_filter*,int) ;
 int FUNC_1 (struct pevent*,struct pevent_record*) ;
 scalar_t__ FUNC_2 (int ,int ,struct pevent_record*) ;

int FUNC_3(struct event_filter *VAR_4,
   struct pevent_record *VAR_5)
{
 struct pevent *VAR_6 = VAR_4->pevent;
 struct filter_type *VAR_7;
 int VAR_8;

 if (!VAR_4->filters)
  return VAR_3;

 VAR_8 = FUNC_1(VAR_6, VAR_5);

 VAR_7 = FUNC_0(VAR_4, VAR_8);

 if (!VAR_7)
  return VAR_2;

 return FUNC_2(VAR_7->event, VAR_7->filter, VAR_5) ?
  VAR_0 : VAR_1;
}
