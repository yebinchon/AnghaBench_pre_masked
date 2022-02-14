
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {int pevent; struct perf_evlist* evlist; } ;
struct perf_evsel_str_handler {int * handler; int name; } ;
struct TYPE_2__ {int * func; } ;
struct perf_evsel {TYPE_1__ handler; } ;
struct perf_evlist {int dummy; } ;
struct event_format {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct perf_evsel* FUNC_1 (struct perf_evlist*,int ) ;
 struct event_format* FUNC_2 (int ,char*,char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (int ) ;

int FUNC_5(struct perf_session *VAR_3,
          const struct perf_evsel_str_handler *VAR_4,
          size_t VAR_5)
{
 struct perf_evlist *VAR_6 = VAR_3->evlist;
 struct event_format *VAR_7;
 struct perf_evsel *VAR_8;
 char *VAR_9, *VAR_10;
 size_t VAR_11;
 int VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_12 = -VAR_2;
  VAR_9 = FUNC_4(VAR_4[VAR_11].name);
  if (VAR_9 == ((void*)0))
   goto out;

  VAR_12 = -VAR_1;
  VAR_10 = FUNC_3(VAR_9, ':');
  if (VAR_10 == ((void*)0))
   goto out_free;

  *VAR_10++ = '\0';
  VAR_7 = FUNC_2(VAR_3->pevent,
         VAR_9, VAR_10);
  if (VAR_7 == ((void*)0)) {




   goto next;
  }

  VAR_8 = FUNC_1(VAR_6, VAR_7->id);
  if (VAR_8 == ((void*)0))
   goto next;

  VAR_12 = -VAR_0;
  if (VAR_8->handler.func != ((void*)0))
   goto out_free;
  VAR_8->handler.func = VAR_4[VAR_11].handler;
next:
  FUNC_0(VAR_9);
 }

 VAR_12 = 0;
out:
 return VAR_12;

out_free:
 FUNC_0(VAR_9);
 goto out;
}
