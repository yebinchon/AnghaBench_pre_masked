
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qfq_sched {unsigned long* bitmaps; int V; } ;
struct qfq_group {unsigned long index; size_t front; unsigned long long slot_shift; scalar_t__ S; scalar_t__ F; int * slots; int full_slots; } ;
struct qfq_class {int S; int F; struct qfq_group* grp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct qfq_sched*,struct qfq_group*) ;
 int FUNC_5 (struct qfq_sched*,unsigned long,size_t,size_t) ;
 scalar_t__ FUNC_6 (int ,unsigned long long) ;
 int FUNC_7 (struct qfq_sched*,struct qfq_group*,struct qfq_class*) ;
 struct qfq_class* FUNC_8 (struct qfq_group*) ;
 int FUNC_9 (struct qfq_sched*,int ) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_11(struct qfq_sched *VAR_4, struct qfq_class *VAR_5)
{
 struct qfq_group *VAR_6 = VAR_5->grp;
 unsigned long VAR_7;
 u64 VAR_8;
 int VAR_9;

 VAR_5->F = VAR_5->S;
 FUNC_7(VAR_4, VAR_6, VAR_5);

 if (!VAR_6->full_slots) {
  FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_3]);
  FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_0]);
  FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_2]);

  if (FUNC_10(VAR_6->index, &VAR_4->bitmaps[VAR_1]) &&
      !(VAR_4->bitmaps[VAR_1] & ~((1UL << VAR_6->index) - 1))) {
   VAR_7 = VAR_4->bitmaps[VAR_1] & ((1UL << VAR_6->index) - 1);
   if (VAR_7)
    VAR_7 = ~((1UL << FUNC_1(VAR_7)) - 1);
   else
    VAR_7 = ~0UL;
   FUNC_5(VAR_4, VAR_7, VAR_0, VAR_1);
   FUNC_5(VAR_4, VAR_7, VAR_2, VAR_3);
  }
  FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_1]);
 } else if (FUNC_3(&VAR_6->slots[VAR_6->front])) {
  VAR_5 = FUNC_8(VAR_6);
  VAR_8 = FUNC_6(VAR_5->S, VAR_6->slot_shift);
  if (VAR_6->S != VAR_8) {
   FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_1]);
   FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_3]);
   FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_0]);
   FUNC_0(VAR_6->index, &VAR_4->bitmaps[VAR_2]);
   VAR_6->S = VAR_8;
   VAR_6->F = VAR_8 + (2ULL << VAR_6->slot_shift);
   VAR_9 = FUNC_4(VAR_4, VAR_6);
   FUNC_2(VAR_6->index, &VAR_4->bitmaps[VAR_9]);
  }
 }

 FUNC_9(VAR_4, VAR_4->V);
}
