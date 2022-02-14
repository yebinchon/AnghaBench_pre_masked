
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_work_share {int sched; long chunk_size; long end; long incr; long next; } ;
typedef enum gomp_schedule_type { ____Placeholder_gomp_schedule_type } gomp_schedule_type ;



__attribute__((used)) static inline void
FUNC_0 (struct gomp_work_share *VAR_0, long VAR_1, long VAR_2, long VAR_3,
  enum gomp_schedule_type VAR_4, long VAR_5)
{
  VAR_0->sched = VAR_4;
  VAR_0->chunk_size = VAR_5;

  VAR_0->end = ((VAR_3 > 0 && VAR_1 > VAR_2) || (VAR_3 < 0 && VAR_1 < VAR_2))
     ? VAR_1 : VAR_2;
  VAR_0->incr = VAR_3;
  VAR_0->next = VAR_1;
}
