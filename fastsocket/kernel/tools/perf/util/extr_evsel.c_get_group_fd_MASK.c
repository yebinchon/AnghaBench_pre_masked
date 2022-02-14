
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int fd; struct perf_evsel* leader; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_evsel*,int,int) ;
 int FUNC_2 (struct perf_evsel*) ;

__attribute__((used)) static int FUNC_3(struct perf_evsel *VAR_0, int VAR_1, int VAR_2)
{
 struct perf_evsel *VAR_3 = VAR_0->leader;
 int VAR_4;

 if (!FUNC_2(VAR_0))
  return -1;





 FUNC_0(!VAR_3->fd);

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_4 == -1);

 return VAR_4;
}
