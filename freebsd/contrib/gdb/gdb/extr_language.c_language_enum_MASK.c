
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum language { ____Placeholder_language } language ;
struct TYPE_2__ {int la_language; int la_name; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

enum language
FUNC_1 (char *VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    if (FUNC_0 (VAR_1[VAR_4]->la_name, VAR_3))
      return VAR_1[VAR_4]->la_language;

  return VAR_0;
}
