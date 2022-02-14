
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct thread_stat {int dummy; } ;
struct perf_sample {int time; int tid; } ;
struct perf_evsel {int dummy; } ;
struct lock_stat {int discard; int nr_acquire; int nr_acquired; int nr_readlock; int nr_trylock; } ;
struct lock_seq_stat {int state; int read_count; int prev_event_time; int list; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;






 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct lock_seq_stat*) ;
 struct lock_seq_stat* FUNC_2 (struct thread_stat*,void*) ;
 int FUNC_3 (int *) ;
 struct lock_stat* FUNC_4 (void*,char const*) ;
 int FUNC_5 (void**,void**,int) ;
 void* FUNC_6 (struct perf_evsel*,struct perf_sample*,char*) ;
 char* FUNC_7 (struct perf_evsel*,struct perf_sample*,char*) ;
 struct thread_stat* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct perf_evsel *VAR_4,
         struct perf_sample *VAR_5)
{
 void *VAR_6;
 struct lock_stat *VAR_7;
 struct thread_stat *VAR_8;
 struct lock_seq_stat *VAR_9;
 const char *VAR_10 = FUNC_7(VAR_4, VAR_5, "name");
 u64 VAR_11 = FUNC_6(VAR_4, VAR_5, "lockdep_addr");
 int VAR_12 = FUNC_6(VAR_4, VAR_5, "flag");

 FUNC_5(&VAR_6, &VAR_11, sizeof(void *));

 VAR_7 = FUNC_4(VAR_6, VAR_10);
 if (!VAR_7)
  return -1;
 if (VAR_7->discard)
  return 0;

 VAR_8 = FUNC_8(VAR_5->tid);
 if (!VAR_8)
  return -1;

 VAR_9 = FUNC_2(VAR_8, VAR_6);
 if (!VAR_9)
  return -1;

 switch (VAR_9->state) {
 case 128:
 case 129:
  if (!VAR_12) {
   VAR_9->state = 132;
  } else {
   if (VAR_12 & VAR_2)
    VAR_7->nr_trylock++;
   if (VAR_12 & VAR_1)
    VAR_7->nr_readlock++;
   VAR_9->state = 130;
   VAR_9->read_count = 1;
   VAR_7->nr_acquired++;
  }
  break;
 case 130:
  if (VAR_12 & VAR_1) {
   VAR_9->read_count++;
   VAR_7->nr_acquired++;
   goto end;
  } else {
   goto broken;
  }
  break;
 case 133:
 case 132:
 case 131:
broken:

  VAR_7->discard = 1;
  VAR_3[VAR_0]++;
  FUNC_3(&VAR_9->list);
  FUNC_1(VAR_9);
  goto end;
  break;
 default:
  FUNC_0("Unknown state of lock sequence found!\n");
  break;
 }

 VAR_7->nr_acquire++;
 VAR_9->prev_event_time = VAR_5->time;
end:
 return 0;
}
