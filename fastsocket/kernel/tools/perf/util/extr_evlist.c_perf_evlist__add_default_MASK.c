
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int name; } ;
struct perf_evlist {int dummy; } ;
struct perf_event_attr {int config; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event_attr*) ;
 int FUNC_1 (struct perf_evlist*,struct perf_evsel*) ;
 int FUNC_2 (struct perf_evsel*) ;
 struct perf_evsel* FUNC_3 (struct perf_event_attr*,int ) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct perf_evlist *VAR_3)
{
 struct perf_event_attr VAR_4 = {
  .type = VAR_2,
  .config = VAR_1,
 };
 struct perf_evsel *VAR_5;

 FUNC_0(&VAR_4);

 VAR_5 = FUNC_3(&VAR_4, 0);
 if (VAR_5 == ((void*)0))
  goto error;


 VAR_5->name = FUNC_4("cycles");
 if (!VAR_5->name)
  goto error_free;

 FUNC_1(VAR_3, VAR_5);
 return 0;
error_free:
 FUNC_2(VAR_5);
error:
 return -VAR_0;
}
