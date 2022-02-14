
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filter_type {struct filter_arg* filter; TYPE_1__* event; } ;
struct TYPE_4__ {int value; } ;
struct filter_arg {TYPE_2__ boolean; int type; } ;
struct event_format {int id; } ;
struct event_filter {int pevent; } ;
struct TYPE_3__ {char* system; char* name; } ;


 int VAR_0 ;
 struct filter_type* FUNC_0 (struct event_filter*,int ) ;
 struct filter_arg* FUNC_1 () ;
 char* FUNC_2 (struct event_filter*,struct filter_arg*) ;
 int FUNC_3 (struct event_filter*,struct event_format*,char*,int *) ;
 int FUNC_4 (char*) ;
 struct event_format* FUNC_5 (int ,char const*,char const*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct event_filter *VAR_1,
        struct event_filter *VAR_2,
        struct filter_type *VAR_3)
{
 struct filter_arg *VAR_4;
 struct event_format *VAR_5;
 const char *VAR_6;
 const char *VAR_7;
 char *VAR_8;


 VAR_6 = VAR_3->event->system;
 VAR_7 = VAR_3->event->name;
 VAR_5 = FUNC_5(VAR_1->pevent, VAR_6, VAR_7);
 if (!VAR_5)
  return -1;

 VAR_8 = FUNC_2(VAR_2, VAR_3->filter);
 if (!VAR_8)
  return -1;

 if (FUNC_6(VAR_8, "TRUE") == 0 || FUNC_6(VAR_8, "FALSE") == 0) {

  VAR_4 = FUNC_1();
  VAR_4->type = VAR_0;
  if (FUNC_6(VAR_8, "TRUE") == 0)
   VAR_4->boolean.value = 1;
  else
   VAR_4->boolean.value = 0;

  VAR_3 = FUNC_0(VAR_1, VAR_5->id);
  VAR_3->filter = VAR_4;

  FUNC_4(VAR_8);
  return 0;
 }

 FUNC_3(VAR_1, VAR_5, VAR_8, ((void*)0));
 FUNC_4(VAR_8);

 return 0;
}
