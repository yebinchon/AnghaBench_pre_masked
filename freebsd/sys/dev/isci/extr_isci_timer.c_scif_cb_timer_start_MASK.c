
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ISCI_TIMER {int callout; int is_started; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int ,void*,int ) ;
 int FUNC_1 (int,char*,char*,void*,int) ;
 int VAR_2 ;

void
FUNC_2(SCI_CONTROLLER_HANDLE_T VAR_3, void *VAR_4,
    uint32_t VAR_5)
{
 struct ISCI_TIMER *VAR_6 = (struct ISCI_TIMER *)VAR_4;

 VAR_6->is_started = VAR_1;
 FUNC_1(3, "TIMER", "start %p %d\n", VAR_4, VAR_5);
 FUNC_0(&VAR_6->callout, VAR_0 * VAR_5, 0,
     VAR_2, VAR_4, 0);
}
