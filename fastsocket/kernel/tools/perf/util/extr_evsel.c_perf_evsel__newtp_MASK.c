
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_evsel {struct perf_evsel* name; TYPE_1__* tp_format; } ;
struct perf_event_attr {int sample_type; int sample_period; int config; int type; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct perf_evsel**,char*,char const*,char const*) ;
 int FUNC_1 (struct perf_event_attr*) ;
 TYPE_1__* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct perf_evsel*) ;
 int FUNC_4 (struct perf_evsel*,struct perf_event_attr*,int) ;
 struct perf_evsel* FUNC_5 (int) ;

struct perf_evsel *FUNC_6(const char *VAR_5, const char *VAR_6, int VAR_7)
{
 struct perf_evsel *VAR_8 = FUNC_5(sizeof(*VAR_8));

 if (VAR_8 != ((void*)0)) {
  struct perf_event_attr VAR_9 = {
   .type = VAR_4,
   .sample_type = (VAR_2 | VAR_3 |
       VAR_0 | VAR_1),
  };

  if (FUNC_0(&VAR_8->name, "%s:%s", VAR_5, VAR_6) < 0)
   goto out_free;

  VAR_8->tp_format = FUNC_2(VAR_5, VAR_6);
  if (VAR_8->tp_format == ((void*)0))
   goto out_free;

  FUNC_1(&VAR_9);
  VAR_9.config = VAR_8->tp_format->id;
  VAR_9.sample_period = 1;
  FUNC_4(VAR_8, &VAR_9, VAR_7);
 }

 return VAR_8;

out_free:
 FUNC_3(VAR_8->name);
 FUNC_3(VAR_8);
 return ((void*)0);
}
