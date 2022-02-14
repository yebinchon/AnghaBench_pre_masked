
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_type {scalar_t__ event_id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct filter_type *VAR_2 = VAR_0;
 const struct filter_type *VAR_3 = VAR_1;

 if (VAR_2->event_id < VAR_3->event_id)
  return -1;

 if (VAR_2->event_id > VAR_3->event_id)
  return 1;

 return 0;
}
