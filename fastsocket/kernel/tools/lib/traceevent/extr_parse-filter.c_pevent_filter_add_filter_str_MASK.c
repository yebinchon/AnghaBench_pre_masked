
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent {scalar_t__ test_filters; } ;
struct event_list {TYPE_1__* event; struct event_list* next; } ;
struct event_filter {struct pevent* pevent; } ;
struct TYPE_2__ {char* name; int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct event_filter*,TYPE_1__*,char const*,char**) ;
 int FUNC_2 (struct pevent*,struct event_list**,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct event_list*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (struct event_filter*,int ) ;
 int FUNC_9 (char*,char*,char*) ;
 int FUNC_10 (char**,char*,...) ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char const*) ;
 char* FUNC_14 (char*,char*,char**) ;

int FUNC_15(struct event_filter *VAR_0,
     const char *VAR_1,
     char **VAR_2)
{
 struct pevent *VAR_3 = VAR_0->pevent;
 struct event_list *VAR_4;
 struct event_list *VAR_5 = ((void*)0);
 const char *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;


 FUNC_7("", 0);

 if (VAR_2)
  *VAR_2 = ((void*)0);

 VAR_6 = FUNC_11(VAR_1, ':');
 if (VAR_6)
  VAR_13 = VAR_6 - VAR_1;
 else
  VAR_13 = FUNC_13(VAR_1);


 do {
  VAR_7 = FUNC_11(VAR_1, ',');
  if (VAR_7 &&
      (!VAR_6 || VAR_7 < VAR_6))
   VAR_13 = VAR_7 - VAR_1;
  else if (VAR_6)
   VAR_13 = VAR_6 - VAR_1;
  else
   VAR_13 = FUNC_13(VAR_1);

  VAR_8 = FUNC_5(VAR_13 + 1);
  FUNC_6(VAR_8, VAR_1, VAR_13);
  VAR_8[VAR_13] = 0;

  if (VAR_7)
   VAR_7++;

  VAR_1 = VAR_7;

  VAR_10 = FUNC_14(VAR_8, "/", &VAR_11);
  VAR_9 = FUNC_14(((void*)0), "/", &VAR_11);

  if (!VAR_10) {
   FUNC_10(VAR_2, "No filter found");

   FUNC_4(VAR_5);
   FUNC_3(VAR_8);
   return -1;
  }


  VAR_14 = FUNC_2(VAR_3, &VAR_5, FUNC_12(VAR_10), FUNC_12(VAR_9));
  if (VAR_14 < 0) {
   if (VAR_9)
    FUNC_10(VAR_2,
        "No event found under '%s.%s'",
        VAR_10, VAR_9);
   else
    FUNC_10(VAR_2,
        "No event found under '%s'",
        VAR_10);
   FUNC_4(VAR_5);
   FUNC_3(VAR_8);
   return -1;
  }
  FUNC_3(VAR_8);
 } while (VAR_1);


 if (VAR_6)
  VAR_6++;


 for (VAR_4 = VAR_5; VAR_4; VAR_4 = VAR_4->next) {
  VAR_14 = FUNC_1(VAR_0, VAR_4->event, VAR_6,
       VAR_2);

  if (VAR_14 < 0)
   VAR_12 = VAR_14;

  if (VAR_14 >= 0 && VAR_3->test_filters) {
   char *VAR_15;
   VAR_15 = FUNC_8(VAR_0, VAR_4->event->id);
   FUNC_9(" '%s: %s'\n", VAR_4->event->name, VAR_15);
   FUNC_3(VAR_15);
  }
 }

 FUNC_4(VAR_5);

 if (VAR_12 >= 0 && VAR_3->test_filters)
  FUNC_0(0);

 return VAR_12;
}
