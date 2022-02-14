
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int dummy; } ;
struct perf_event {int cpu; scalar_t__ ctx; int mmap_mutex; struct ring_buffer* rb; int mmap_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ring_buffer*,struct ring_buffer*) ;
 int FUNC_4 (struct perf_event*,struct ring_buffer*) ;
 struct ring_buffer* FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct ring_buffer*) ;

__attribute__((used)) static int
FUNC_7(struct perf_event *VAR_1, struct perf_event *VAR_2)
{
 struct ring_buffer *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 int VAR_5 = -VAR_0;

 if (!VAR_2)
  goto set;


 if (VAR_1 == VAR_2)
  goto out;




 if (VAR_2->cpu != VAR_1->cpu)
  goto out;




 if (VAR_2->cpu == -1 && VAR_2->ctx != VAR_1->ctx)
  goto out;

set:
 FUNC_1(&VAR_1->mmap_mutex);

 if (FUNC_0(&VAR_1->mmap_count))
  goto unlock;

 if (VAR_2) {

  VAR_3 = FUNC_5(VAR_2);
  if (!VAR_3)
   goto unlock;
 }

 VAR_4 = VAR_1->rb;
 FUNC_3(VAR_1->rb, VAR_3);
 if (VAR_4)
  FUNC_4(VAR_1, VAR_4);
 VAR_5 = 0;
unlock:
 FUNC_2(&VAR_1->mmap_mutex);

 if (VAR_4)
  FUNC_6(VAR_4);
out:
 return VAR_5;
}
