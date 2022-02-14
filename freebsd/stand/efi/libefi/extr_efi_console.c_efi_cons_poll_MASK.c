
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* CheckEvent ) (int *) ;} ;
struct TYPE_5__ {int * WaitForKey; } ;
struct TYPE_4__ {int * WaitForKeyEx; } ;
typedef scalar_t__ EFI_STATUS ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int
FUNC_5(void)
{
 EFI_STATUS VAR_5;

 if (FUNC_2() || VAR_4)
  return (1);






 if (VAR_3 != ((void*)0)) {
  if (VAR_3->WaitForKeyEx == ((void*)0)) {
   VAR_4 = FUNC_1();
  } else {
   VAR_5 = VAR_0->CheckEvent(VAR_3->WaitForKeyEx);
   VAR_4 = VAR_5 == VAR_1;
  }
 } else {
  if (VAR_2->WaitForKey == ((void*)0)) {
   VAR_4 = FUNC_0();
  } else {
   VAR_5 = VAR_0->CheckEvent(VAR_2->WaitForKey);
   VAR_4 = VAR_5 == VAR_1;
  }
 }

 return (VAR_4);
}
