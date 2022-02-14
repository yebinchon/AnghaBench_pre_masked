
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct creation_set {int filter_count; TYPE_1__* filters; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int filter_name; scalar_t__ program; } ;


 int FUNC_0 (struct archive*,int ) ;

int
FUNC_1(struct creation_set *VAR_0, struct archive *VAR_1)
{
 int VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->filter_count; VAR_3++) {
  if (VAR_0->filters[VAR_3].program) {
   FUNC_0(VAR_1,
       VAR_0->filters[VAR_3].filter_name);
   ++VAR_2;
  }
 }
 return (VAR_2);
}
