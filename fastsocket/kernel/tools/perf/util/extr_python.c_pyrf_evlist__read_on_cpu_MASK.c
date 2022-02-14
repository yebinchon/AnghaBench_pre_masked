
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_evlist {int dummy; } ;
struct pyrf_evlist {struct perf_evlist evlist; } ;
struct pyrf_event {int sample; } ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int*) ;
 int * FUNC_1 (int ,char*,int) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 union perf_event* FUNC_4 (struct perf_evlist*,int) ;
 int FUNC_5 (struct perf_evlist*,union perf_event*,int *) ;
 int * FUNC_6 (union perf_event*) ;

__attribute__((used)) static PyObject *FUNC_7(struct pyrf_evlist *VAR_2,
       PyObject *VAR_3, PyObject *VAR_4)
{
 struct perf_evlist *VAR_5 = &VAR_2->evlist;
 union perf_event *VAR_6;
 int VAR_7 = 1, VAR_8;
 static char *VAR_9[] = { "cpu", "sample_id_all", ((void*)0) };
 int VAR_10;

 if (!FUNC_0(VAR_3, VAR_4, "i|i", VAR_9,
      &VAR_8, &VAR_7))
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_5, VAR_8);
 if (VAR_6 != ((void*)0)) {
  PyObject *VAR_11 = FUNC_6(VAR_6);
  struct pyrf_event *VAR_12 = (struct pyrf_event *)VAR_11;

  if (VAR_11 == ((void*)0))
   return FUNC_2();

  VAR_10 = FUNC_5(VAR_5, VAR_6, &VAR_12->sample);
  if (VAR_10)
   return FUNC_1(VAR_0,
         "perf: can't parse sample, err=%d", VAR_10);
  return VAR_11;
 }

 FUNC_3(VAR_1);
 return VAR_1;
}
