
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_map {int dummy; } ;
struct pyrf_thread_map {struct thread_map* threads; } ;
struct TYPE_2__ {int inherit; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct pyrf_evsel {struct perf_evsel evsel; } ;
struct pyrf_cpu_map {struct cpu_map* cpus; } ;
struct cpu_map {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,int **,int **,int*,int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (struct perf_evsel*,struct cpu_map*,struct thread_map*) ;

__attribute__((used)) static PyObject *FUNC_4(struct pyrf_evsel *VAR_2,
      PyObject *VAR_3, PyObject *VAR_4)
{
 struct perf_evsel *VAR_5 = &VAR_2->evsel;
 struct cpu_map *VAR_6 = ((void*)0);
 struct thread_map *VAR_7 = ((void*)0);
 PyObject *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = 0;
 static char *VAR_12[] = { "cpus", "threads", "group", "inherit", ((void*)0) };

 if (!FUNC_0(VAR_3, VAR_4, "|OOii", VAR_12,
      &VAR_8, &VAR_9, &VAR_10, &VAR_11))
  return ((void*)0);

 if (VAR_9 != ((void*)0))
  VAR_7 = ((struct pyrf_thread_map *)VAR_9)->threads;

 if (VAR_8 != ((void*)0))
  VAR_6 = ((struct pyrf_cpu_map *)VAR_8)->cpus;

 VAR_5->attr.inherit = VAR_11;




 if (FUNC_3(VAR_5, VAR_6, VAR_7) < 0) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 FUNC_2(VAR_1);
 return VAR_1;
}
