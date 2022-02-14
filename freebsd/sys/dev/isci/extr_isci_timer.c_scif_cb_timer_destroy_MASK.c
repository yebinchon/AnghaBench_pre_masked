
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_TIMER {int dummy; } ;
struct ISCI_CONTROLLER {int timer_pool; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int FUNC_0 (int,char*,char*,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ISCI_TIMER*) ;
 int FUNC_3 (int ,void*) ;

void
FUNC_4(SCI_CONTROLLER_HANDLE_T VAR_0,
    void *VAR_1)
{
 struct ISCI_CONTROLLER *VAR_2 = (struct ISCI_CONTROLLER *)
     FUNC_1(VAR_0);

 FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_2->timer_pool, (struct ISCI_TIMER *)VAR_1);

 FUNC_0(3, "TIMER", "destroy %p\n", VAR_1);
}
