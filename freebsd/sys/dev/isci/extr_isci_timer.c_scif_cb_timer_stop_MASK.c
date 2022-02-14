
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_TIMER {int callout; int is_started; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,char*,void*) ;

void
FUNC_2(SCI_CONTROLLER_HANDLE_T VAR_1, void *VAR_2)
{
 struct ISCI_TIMER *VAR_3 = (struct ISCI_TIMER *)VAR_2;

 FUNC_1(3, "TIMER", "stop %p\n", VAR_2);
 VAR_3->is_started = VAR_0;
 FUNC_0(&VAR_3->callout);
}
