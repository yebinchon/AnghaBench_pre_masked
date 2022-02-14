
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gomp_work_share {int chunk_size; unsigned int end; int incr; int next; int sched; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (struct gomp_work_share *VAR_1, unsigned VAR_2)
{
  VAR_1->sched = VAR_0;
  VAR_1->chunk_size = 1;
  VAR_1->end = VAR_2 + 1;
  VAR_1->incr = 1;
  VAR_1->next = 1;
}
