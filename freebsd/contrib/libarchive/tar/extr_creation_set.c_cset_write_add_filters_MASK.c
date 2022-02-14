
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct creation_set {int filter_count; TYPE_1__* filters; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {void* filter_name; scalar_t__ program; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,void*) ;
 int FUNC_1 (struct archive*,void*) ;

int
FUNC_2(struct creation_set *VAR_1, struct archive *VAR_2,
    const void **VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->filter_count; VAR_5++) {
  if (VAR_1->filters[VAR_5].program)
   VAR_6 = FUNC_1(VAR_2,
    VAR_1->filters[VAR_5].filter_name);
  else
   VAR_6 = FUNC_0(VAR_2,
    VAR_1->filters[VAR_5].filter_name);
  if (VAR_6 < VAR_0) {
   *VAR_3 = VAR_1->filters[VAR_5].filter_name;
   return (VAR_6);
  }
  ++VAR_4;
 }
 return (VAR_4);
}
