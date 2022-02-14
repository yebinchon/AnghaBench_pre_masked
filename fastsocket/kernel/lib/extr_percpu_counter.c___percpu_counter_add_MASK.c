
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_counter {int lock; scalar_t__ count; int counters; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct percpu_counter *VAR_0, s64 VAR_1, s32 VAR_2)
{
 s64 VAR_3;
 s32 *VAR_4;
 int VAR_5 = FUNC_0();

 VAR_4 = FUNC_1(VAR_0->counters, VAR_5);
 VAR_3 = *VAR_4 + VAR_1;
 if (VAR_3 >= VAR_2 || VAR_3 <= -VAR_2) {
  FUNC_3(&VAR_0->lock);
  VAR_0->count += VAR_3;
  *VAR_4 = 0;
  FUNC_4(&VAR_0->lock);
 } else {
  *VAR_4 = VAR_3;
 }
 FUNC_2();
}
