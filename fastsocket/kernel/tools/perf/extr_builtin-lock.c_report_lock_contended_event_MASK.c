
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread_stat {int dummy; } ;
struct perf_sample {int time; int tid; } ;
struct perf_evsel {int dummy; } ;
struct lock_stat {int discard; int nr_contended; } ;
struct lock_seq_stat {int state; int prev_event_time; int list; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;






 int * VAR_1 ;
 int FUNC_1 (struct lock_seq_stat*) ;
 struct lock_seq_stat* FUNC_2 (struct thread_stat*,void*) ;
 int FUNC_3 (int *) ;
 struct lock_stat* FUNC_4 (void*,char const*) ;
 int FUNC_5 (void**,int *,int) ;
 int FUNC_6 (struct perf_evsel*,struct perf_sample*,char*) ;
 char* FUNC_7 (struct perf_evsel*,struct perf_sample*,char*) ;
 struct thread_stat* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct perf_evsel *VAR_2,
           struct perf_sample *VAR_3)
{
 void *VAR_4;
 struct lock_stat *VAR_5;
 struct thread_stat *VAR_6;
 struct lock_seq_stat *VAR_7;
 const char *VAR_8 = FUNC_7(VAR_2, VAR_3, "name");
 u64 VAR_9 = FUNC_6(VAR_2, VAR_3, "lockdep_addr");

 FUNC_5(&VAR_4, &VAR_9, sizeof(void *));

 VAR_5 = FUNC_4(VAR_4, VAR_8);
 if (!VAR_5)
  return -1;
 if (VAR_5->discard)
  return 0;

 VAR_6 = FUNC_8(VAR_3->tid);
 if (!VAR_6)
  return -1;

 VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (!VAR_7)
  return -1;

 switch (VAR_7->state) {
 case 128:

  return 0;
 case 132:
  break;
 case 129:
 case 133:
 case 130:
 case 131:

  VAR_5->discard = 1;
  VAR_1[VAR_0]++;
  FUNC_3(&VAR_7->list);
  FUNC_1(VAR_7);
  goto end;
  break;
 default:
  FUNC_0("Unknown state of lock sequence found!\n");
  break;
 }

 VAR_7->state = 131;
 VAR_5->nr_contended++;
 VAR_7->prev_event_time = VAR_3->time;
end:
 return 0;
}
