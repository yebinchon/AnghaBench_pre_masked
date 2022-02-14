
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int nr_events; struct event_format** events; } ;
struct event_list {int dummy; } ;
struct event_format {int dummy; } ;
typedef int regex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event_list**,struct event_format*) ;
 scalar_t__ FUNC_1 (struct event_format*,int *,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,char*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct pevent *VAR_2, struct event_list **VAR_3,
    char *VAR_4, char *VAR_5)
{
 struct event_format *VAR_6;
 regex_t VAR_7;
 regex_t VAR_8;
 int VAR_9 = 0;
 char *VAR_10;
 int VAR_11;
 int VAR_12;

 if (!VAR_5) {

  VAR_5 = VAR_4;
  VAR_4 = ((void*)0);
 }

 VAR_10 = FUNC_3(FUNC_7(VAR_5) + 3);
 FUNC_6(VAR_10, "^%s$", VAR_5);

 VAR_11 = FUNC_4(&VAR_7, VAR_10, VAR_0|VAR_1);
 FUNC_2(VAR_10);

 if (VAR_11)
  return -1;

 if (VAR_4) {
  VAR_10 = FUNC_3(FUNC_7(VAR_4) + 3);
  FUNC_6(VAR_10, "^%s$", VAR_4);
  VAR_11 = FUNC_4(&VAR_8, VAR_10, VAR_0|VAR_1);
  FUNC_2(VAR_10);
  if (VAR_11) {
   FUNC_5(&VAR_7);
   return -1;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_2->nr_events; VAR_12++) {
  VAR_6 = VAR_2->events[VAR_12];
  if (FUNC_1(VAR_6, VAR_4 ? &VAR_8 : ((void*)0), &VAR_7)) {
   VAR_9 = 1;
   FUNC_0(VAR_3, VAR_6);
  }
 }

 FUNC_5(&VAR_7);
 if (VAR_4)
  FUNC_5(&VAR_8);

 if (!VAR_9)
  return -1;

 return 0;
}
