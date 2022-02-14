
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {int uprobes; } ;
struct __event_package {int ntevs; struct __event_package* tevs; struct perf_probe_event* pev; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_probe_event*,struct __event_package*,int,int) ;
 int FUNC_1 (struct __event_package*) ;
 int FUNC_2 (struct perf_probe_event*,struct __event_package**,int,char const*) ;
 int FUNC_3 (struct __event_package*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct __event_package* FUNC_6 (int) ;

int FUNC_7(struct perf_probe_event *VAR_1, int VAR_2,
     int VAR_3, const char *VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct __event_package *VAR_9;

 VAR_8 = 0;
 VAR_9 = FUNC_6(sizeof(struct __event_package) * VAR_2);

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 if (!VAR_1->uprobes)

  VAR_8 = FUNC_5();
 else
  VAR_8 = FUNC_4();

 if (VAR_8 < 0) {
  FUNC_3(VAR_9);
  return VAR_8;
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_9[VAR_6].pev = &VAR_1[VAR_6];

  VAR_8 = FUNC_2(VAR_9[VAR_6].pev,
           &VAR_9[VAR_6].tevs,
           VAR_3,
           VAR_4);
  if (VAR_8 < 0)
   goto end;
  VAR_9[VAR_6].ntevs = VAR_8;
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_8 = FUNC_0(VAR_9[VAR_6].pev, VAR_9[VAR_6].tevs,
      VAR_9[VAR_6].ntevs, VAR_5);
  if (VAR_8 < 0)
   break;
 }
end:

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_9[VAR_6].ntevs; VAR_7++)
   FUNC_1(&VAR_9[VAR_6].tevs[VAR_7]);
  FUNC_3(VAR_9[VAR_6].tevs);
 }
 FUNC_3(VAR_9);

 return VAR_8;
}
