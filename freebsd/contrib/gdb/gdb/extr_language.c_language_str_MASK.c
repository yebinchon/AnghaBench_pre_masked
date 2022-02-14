
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum language { ____Placeholder_language } language ;
struct TYPE_2__ {int la_language; char* la_name; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

char *
FUNC_0 (enum language VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
      if (VAR_0[VAR_3]->la_language == VAR_2)
 {
   return VAR_0[VAR_3]->la_name;
 }
    }
  return "Unknown";
}
