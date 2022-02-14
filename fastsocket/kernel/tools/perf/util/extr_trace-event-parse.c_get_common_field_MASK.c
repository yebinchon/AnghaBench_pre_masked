
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scripting_context {scalar_t__ event_data; struct pevent* pevent; } ;
struct pevent {struct event_format** events; } ;
struct format_field {int offset; int size; } ;
struct event_format {int dummy; } ;


 struct format_field* FUNC_0 (struct event_format*,char const*) ;
 int FUNC_1 (struct pevent*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct scripting_context *VAR_0,
       int *VAR_1, int *VAR_2, const char *VAR_3)
{
 struct pevent *VAR_4 = VAR_0->pevent;
 struct event_format *VAR_5;
 struct format_field *VAR_6;

 if (!*VAR_2) {
  if (!VAR_4->events)
   return 0;

  VAR_5 = VAR_4->events[0];
  VAR_6 = FUNC_0(VAR_5, VAR_3);
  if (!VAR_6)
   return 0;
  *VAR_1 = VAR_6->offset;
  *VAR_2 = VAR_6->size;
 }

 return FUNC_1(VAR_4, VAR_0->event_data + *VAR_1, *VAR_2);
}
