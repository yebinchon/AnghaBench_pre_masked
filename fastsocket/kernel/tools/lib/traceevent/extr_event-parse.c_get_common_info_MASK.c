
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {struct event_format** events; } ;
struct format_field {int offset; int size; } ;
struct event_format {int dummy; } ;


 int FUNC_0 (char*) ;
 struct format_field* FUNC_1 (struct event_format*,char const*) ;

__attribute__((used)) static int FUNC_2(struct pevent *VAR_0,
      const char *VAR_1, int *VAR_2, int *VAR_3)
{
 struct event_format *VAR_4;
 struct format_field *VAR_5;





 if (!VAR_0->events) {
  FUNC_0("no event_list!");
  return -1;
 }

 VAR_4 = VAR_0->events[0];
 VAR_5 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_5)
  return -1;

 *VAR_2 = VAR_5->offset;
 *VAR_3 = VAR_5->size;

 return 0;
}
