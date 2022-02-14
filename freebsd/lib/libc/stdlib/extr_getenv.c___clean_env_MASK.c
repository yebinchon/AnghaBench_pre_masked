
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int active; struct TYPE_6__* name; scalar_t__ putenv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_2(bool VAR_7)
{
 int VAR_8;


 if (VAR_1 != ((void*)0)) {
  for (VAR_8 = VAR_2 - 1; VAR_8 >= 0; VAR_8--)

   if (VAR_1[VAR_8].putenv) {
    if (!VAR_7)
     FUNC_0(VAR_8);
   } else {
    if (VAR_7)
     FUNC_1(VAR_1[VAR_8].name);
    else
     VAR_1[VAR_8].active = 0;
   }
  if (VAR_7) {
   FUNC_1(VAR_1);
   VAR_1 = ((void*)0);
  } else
   VAR_0 = 0;


  if (VAR_6 != ((void*)0)) {
   if (VAR_3 == VAR_5)
    VAR_3 = VAR_6;
   FUNC_1(VAR_5);
   VAR_5 = ((void*)0);
   VAR_4 = 0;
  }
 }

 return;
}
