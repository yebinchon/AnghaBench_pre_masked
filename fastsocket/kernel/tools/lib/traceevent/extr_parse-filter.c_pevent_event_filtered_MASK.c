
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_type {int dummy; } ;
struct event_filter {int filters; } ;


 struct filter_type* FUNC_0 (struct event_filter*,int) ;

int FUNC_1(struct event_filter *VAR_0,
     int VAR_1)
{
 struct filter_type *VAR_2;

 if (!VAR_0->filters)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ? 1 : 0;
}
