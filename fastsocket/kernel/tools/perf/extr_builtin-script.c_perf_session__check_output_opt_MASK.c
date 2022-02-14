
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {int dummy; } ;
struct perf_evsel {int dummy; } ;
struct TYPE_2__ {scalar_t__ fields; int wildcard_set; scalar_t__ user_set; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct perf_evsel*,struct perf_session*) ;
 struct perf_evsel* FUNC_2 (struct perf_session*,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct perf_session *VAR_2)
{
 int VAR_3;
 struct perf_evsel *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);





  if (!VAR_4 && VAR_1[VAR_3].user_set && !VAR_1[VAR_3].wildcard_set) {
   FUNC_3("%s events do not exist. "
          "Remove corresponding -f option to proceed.\n",
          FUNC_0(VAR_3));
   return -1;
  }

  if (VAR_4 && VAR_1[VAR_3].fields &&
   FUNC_1(VAR_4, VAR_2))
   return -1;
 }

 return 0;
}
