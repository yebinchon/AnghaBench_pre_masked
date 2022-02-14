
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct work_atoms {int dummy; } ;
struct thread {int dummy; } ;
struct perf_sched {int cmp_pid; int atom_root; } ;
struct perf_sample {int cpu; void* time; } ;
struct perf_evsel {int dummy; } ;
struct machine {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct work_atoms*,void* const,void*) ;
 scalar_t__ FUNC_2 (struct work_atoms*,char,void*) ;
 struct thread* FUNC_3 (struct machine*,void* const) ;
 void* FUNC_4 (struct perf_evsel*,struct perf_sample*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct perf_sched*,struct thread*) ;
 struct work_atoms* FUNC_7 (int *,struct thread*,int *) ;

__attribute__((used)) static int FUNC_8(struct perf_sched *VAR_1,
     struct perf_evsel *VAR_2,
     struct perf_sample *VAR_3,
     struct machine *VAR_4)
{
 const u32 VAR_5 = FUNC_4(VAR_2, VAR_3, "pid");
 const u64 VAR_6 = FUNC_4(VAR_2, VAR_3, "runtime");
 struct thread *VAR_7 = FUNC_3(VAR_4, VAR_5);
 struct work_atoms *VAR_8 = FUNC_7(&VAR_1->atom_root, VAR_7, &VAR_1->cmp_pid);
 u64 VAR_9 = VAR_3->time;
 int VAR_10 = VAR_3->cpu;

 FUNC_0(VAR_10 >= VAR_0 || VAR_10 < 0);
 if (!VAR_8) {
  if (FUNC_6(VAR_1, VAR_7))
   return -1;
  VAR_8 = FUNC_7(&VAR_1->atom_root, VAR_7, &VAR_1->cmp_pid);
  if (!VAR_8) {
   FUNC_5("in-event: Internal tree error");
   return -1;
  }
  if (FUNC_2(VAR_8, 'R', VAR_9))
   return -1;
 }

 FUNC_1(VAR_8, VAR_6, VAR_9);
 return 0;
}
