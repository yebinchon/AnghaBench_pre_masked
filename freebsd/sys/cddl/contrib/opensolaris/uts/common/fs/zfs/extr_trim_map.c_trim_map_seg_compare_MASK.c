
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ts_start; scalar_t__ ts_end; } ;
typedef TYPE_1__ trim_seg_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const trim_seg_t *VAR_2 = VAR_0;
 const trim_seg_t *VAR_3 = VAR_1;

 if (VAR_2->ts_start < VAR_3->ts_start) {
  if (VAR_2->ts_end > VAR_3->ts_start)
   return (0);
  return (-1);
 }
 if (VAR_2->ts_start > VAR_3->ts_start) {
  if (VAR_2->ts_start < VAR_3->ts_end)
   return (0);
  return (1);
 }
 return (0);
}
