
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pmu {int dummy; } ;
struct perf_event_attr {int sample_period; int read_format; int sample_type; scalar_t__ task; scalar_t__ comm; scalar_t__ mmap_data; scalar_t__ mmap; scalar_t__ inherit; scalar_t__ sample_freq; scalar_t__ freq; scalar_t__ disabled; } ;
struct hw_perf_event {int sample_period; int last_period; int period_left; } ;
struct perf_event {int cpu; int oncpu; int attach_state; struct perf_event_attr attr; struct perf_event* parent; scalar_t__ ns; struct hw_perf_event hw; int state; void* overflow_handler_context; scalar_t__ overflow_handler; int id; int * pmu; struct perf_event* group_leader; int refcount; int mmap_mutex; int pending; int waitq; int rb_entry; int sibling_list; int event_entry; int group_entry; int child_list; int child_mutex; } ;
typedef scalar_t__ perf_overflow_handler_t ;


 long VAR_0 ;
 long VAR_1 ;
 struct perf_event* FUNC_0 (long) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pmu*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long FUNC_3 (struct pmu*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_8 ;
 int FUNC_7 (struct perf_event*) ;
 long FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct perf_event*) ;
 struct perf_event* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct pmu* FUNC_16 (struct perf_event*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static struct perf_event *
FUNC_19(struct perf_event_attr *VAR_16, int VAR_17,
   struct task_struct *VAR_18,
   struct perf_event *VAR_19,
   struct perf_event *VAR_20,
   perf_overflow_handler_t VAR_21,
   void *VAR_22)
{
 struct pmu *VAR_23;
 struct perf_event *VAR_24;
 struct hw_perf_event *VAR_25;
 long VAR_26;

 if ((unsigned)VAR_17 >= VAR_10) {
  if (!VAR_18 || VAR_17 != -1)
   return FUNC_0(-VAR_0);
 }

 VAR_24 = FUNC_13(sizeof(*VAR_24), VAR_2);
 if (!VAR_24)
  return FUNC_0(-VAR_1);





 if (!VAR_19)
  VAR_19 = VAR_24;

 FUNC_15(&VAR_24->child_mutex);
 FUNC_1(&VAR_24->child_list);

 FUNC_1(&VAR_24->group_entry);
 FUNC_1(&VAR_24->event_entry);
 FUNC_1(&VAR_24->sibling_list);
 FUNC_1(&VAR_24->rb_entry);

 FUNC_11(&VAR_24->waitq);
 FUNC_10(&VAR_24->pending, VAR_14);

 FUNC_15(&VAR_24->mmap_mutex);

 FUNC_6(&VAR_24->refcount, 1);
 VAR_24->cpu = VAR_17;
 VAR_24->attr = *VAR_16;
 VAR_24->group_leader = VAR_19;
 VAR_24->pmu = ((void*)0);
 VAR_24->oncpu = -1;

 VAR_24->parent = VAR_20;

 VAR_24->ns = FUNC_9(FUNC_18(VAR_8));
 VAR_24->id = FUNC_4(&VAR_13);

 VAR_24->state = VAR_4;

 if (VAR_18)
  VAR_24->attach_state = VAR_3;

 if (!VAR_21 && VAR_20) {
  VAR_21 = VAR_20->overflow_handler;
  VAR_22 = VAR_20->overflow_handler_context;
 }

 VAR_24->overflow_handler = VAR_21;
 VAR_24->overflow_handler_context = VAR_22;

 if (VAR_16->disabled)
  VAR_24->state = VAR_5;

 VAR_23 = ((void*)0);

 VAR_25 = &VAR_24->hw;
 VAR_25->sample_period = VAR_16->sample_period;
 if (VAR_16->freq && VAR_16->sample_freq)
  VAR_25->sample_period = 1;
 VAR_25->last_period = VAR_25->sample_period;

 FUNC_14(&VAR_25->period_left, VAR_25->sample_period);




 if (VAR_16->inherit && (VAR_16->read_format & VAR_6))
  goto done;

 VAR_23 = FUNC_16(VAR_24);

done:
 VAR_26 = 0;
 if (!VAR_23)
  VAR_26 = -VAR_0;
 else if (FUNC_2(VAR_23))
  VAR_26 = FUNC_3(VAR_23);

 if (VAR_26) {
  if (VAR_24->ns)
   FUNC_17(VAR_24->ns);
  FUNC_12(VAR_24);
  return FUNC_0(VAR_26);
 }

 if (!VAR_24->parent) {
  if (VAR_24->attach_state & VAR_3)
   FUNC_5(&VAR_15);
  if (VAR_24->attr.mmap || VAR_24->attr.mmap_data)
   FUNC_5(&VAR_11);
  if (VAR_24->attr.comm)
   FUNC_5(&VAR_9);
  if (VAR_24->attr.task)
   FUNC_5(&VAR_12);
  if (VAR_24->attr.sample_type & VAR_7) {
   VAR_26 = FUNC_8();
   if (VAR_26) {
    FUNC_7(VAR_24);
    return FUNC_0(VAR_26);
   }
  }
 }

 return VAR_24;
}
