
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct TYPE_2__ {int la_language; } ;


 struct type* FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct type* VAR_2 ;
 struct type* VAR_3 ;
 struct type* VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct type* VAR_6 ;




 struct symbol* FUNC_2 (char*,int *,int ,int *,int *) ;

struct type *
FUNC_3 (void)
{
  struct symbol *VAR_7;
  struct type *VAR_8;
  switch (VAR_5->la_language)
    {
    case 130:
      VAR_7 = FUNC_2 ("logical", ((void*)0), VAR_1, ((void*)0), ((void*)0));
      if (VAR_7)
 {
   VAR_8 = FUNC_0 (VAR_7);
   if (VAR_8 && FUNC_1 (VAR_8) == VAR_0)
     return VAR_8;
 }
      return VAR_3;
    case 131:
    case 128:
      if (VAR_5->la_language==131)
        {VAR_7 = FUNC_2 ("bool", ((void*)0), VAR_1, ((void*)0), ((void*)0));}
      else
        {VAR_7 = FUNC_2 ("boolean", ((void*)0), VAR_1, ((void*)0), ((void*)0));}
      if (VAR_7)
 {
   VAR_8 = FUNC_0 (VAR_7);
   if (VAR_8 && FUNC_1 (VAR_8) == VAR_0)
     return VAR_8;
 }
      return VAR_2;
    case 129:
      VAR_7 = FUNC_2 ("boolean", ((void*)0), VAR_1, ((void*)0), ((void*)0));
      if (VAR_7)
 {
   VAR_8 = FUNC_0 (VAR_7);
   if (VAR_8 && FUNC_1 (VAR_8) == VAR_0)
     return VAR_8;
 }
      return VAR_6;
    default:
      return VAR_4;
    }
}
