
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* edict; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

void
FUNC_1 (int VAR_6)
{
  if (VAR_4)
    {
      switch (VAR_6)
 {
 case 0:
   if (VAR_5->edict == VAR_0)
     VAR_5->edict = VAR_3;
   else
     VAR_5->edict = VAR_1;
   break;
 case 1:
   if (VAR_5->edict == VAR_1
       || VAR_5->edict == VAR_2)
     VAR_5->edict = VAR_3;
   else
     VAR_5->edict = VAR_0;
   break;
 case 2:
   VAR_5->edict = VAR_2;
   break;
 default:
   FUNC_0 ();
 }
    }
}
