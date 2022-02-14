
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum language { ____Placeholder_language } language ;
struct TYPE_3__ {int la_language; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

enum language
FUNC_2 (enum language VAR_3)
{
  int VAR_4;
  enum language VAR_5;

  VAR_5 = VAR_0->la_language;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      if (VAR_1[VAR_4]->la_language == VAR_3)
 {
   VAR_0 = VAR_1[VAR_4];
   FUNC_1 ();
   FUNC_0 ();
   break;
 }
    }

  return VAR_5;
}
