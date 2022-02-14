
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_freq_range_list {unsigned int num; TYPE_1__* range; } ;
struct TYPE_2__ {unsigned int min; unsigned int max; } ;



int FUNC_0(const struct wpa_freq_range_list *VAR_0,
        unsigned int VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0 == ((void*)0))
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++) {
  if (VAR_1 >= VAR_0->range[VAR_2].min && VAR_1 <= VAR_0->range[VAR_2].max)
   return 1;
 }

 return 0;
}
