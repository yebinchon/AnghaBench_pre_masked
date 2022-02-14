
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct language_defn {int la_language; } ;
typedef enum language { ____Placeholder_language } language ;


 struct language_defn const** VAR_0 ;
 int VAR_1 ;

const struct language_defn *
FUNC_0 (enum language VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
      if (VAR_0[VAR_3]->la_language == VAR_2)
 {
   return VAR_0[VAR_3];
 }
    }
  return ((void*)0);
}
