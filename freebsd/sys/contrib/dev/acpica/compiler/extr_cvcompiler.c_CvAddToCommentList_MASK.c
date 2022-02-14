
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* Comment; struct TYPE_3__* Next; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 () ;

void
FUNC_1 (
    char *VAR_2)
{

   if (VAR_0)
   {
       VAR_1->Next = FUNC_0 ();
       VAR_1 = VAR_1->Next;
   }
   else
   {
       VAR_0 = FUNC_0 ();
       VAR_1 = VAR_0;
   }

   VAR_1->Comment = VAR_2;
}
