
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vdso_timehands {int th_boottime; int th_offset; int th_counter_mask; int th_offset_count; int th_scale; } ;
struct timehands {TYPE_1__* th_counter; int th_boottime; int th_offset; int th_offset_count; int th_scale; } ;
struct TYPE_2__ {scalar_t__ (* tc_fill_vdso_timehands ) (struct vdso_timehands*,TYPE_1__*) ;int tc_counter_mask; } ;


 scalar_t__ FUNC_0 (struct vdso_timehands*,TYPE_1__*) ;
 struct timehands* VAR_0 ;
 int VAR_1 ;

uint32_t
FUNC_1(struct vdso_timehands *VAR_2)
{
 struct timehands *VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_0;
 VAR_2->th_scale = VAR_3->th_scale;
 VAR_2->th_offset_count = VAR_3->th_offset_count;
 VAR_2->th_counter_mask = VAR_3->th_counter->tc_counter_mask;
 VAR_2->th_offset = VAR_3->th_offset;
 VAR_2->th_boottime = VAR_3->th_boottime;
 if (VAR_3->th_counter->tc_fill_vdso_timehands != ((void*)0)) {
  VAR_4 = VAR_3->th_counter->tc_fill_vdso_timehands(VAR_2,
      VAR_3->th_counter);
 } else
  VAR_4 = 0;
 if (!VAR_1)
  VAR_4 = 0;
 return (VAR_4);
}
