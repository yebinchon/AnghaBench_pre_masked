
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ISCI_TIMER {scalar_t__ is_started; int cookie; int (* callback ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char*,struct ISCI_TIMER*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct ISCI_TIMER *VAR_2 = (struct ISCI_TIMER *)VAR_1;

 FUNC_0(3, "TIMER", "timeout %p\n", VAR_2);







 if (VAR_2->is_started == VAR_0)
  VAR_2->callback(VAR_2->cookie);
}
