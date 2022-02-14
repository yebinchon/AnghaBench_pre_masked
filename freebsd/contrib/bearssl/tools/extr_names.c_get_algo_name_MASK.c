
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* long_name; void const* impl; char const* short_name; } ;
struct TYPE_3__ {char const* long_name; void const* (* get ) () ;char const* short_name; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 void const* FUNC_0 () ;

const char *
FUNC_1(const void *VAR_2, int VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_0[VAR_4].long_name; VAR_4 ++) {
  if (VAR_2 == VAR_0[VAR_4].impl) {
   return VAR_3
    ? VAR_0[VAR_4].long_name
    : VAR_0[VAR_4].short_name;
  }
 }
 for (VAR_4 = 0; VAR_1[VAR_4].long_name; VAR_4 ++) {
  if (VAR_2 == VAR_1[VAR_4].get()) {
   return VAR_3
    ? VAR_1[VAR_4].long_name
    : VAR_1[VAR_4].short_name;
  }
 }
 return "UNKNOWN";
}
