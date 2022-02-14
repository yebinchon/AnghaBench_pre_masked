
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ng_hci_unit_p ;
typedef int * hook_p ;
struct TYPE_3__ {int state; int * drv; int * raw; int * sco; int * acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_3)
{
 ng_hci_unit_p VAR_4 = (ng_hci_unit_p) FUNC_3(FUNC_0(VAR_3));

 if (VAR_3 == VAR_4->acl)
  VAR_4->acl = ((void*)0);
 else if (VAR_3 == VAR_4->sco)
  VAR_4->sco = ((void*)0);
 else if (VAR_3 == VAR_4->raw)
  VAR_4->raw = ((void*)0);
 else if (VAR_3 == VAR_4->drv) {
  VAR_4->drv = ((void*)0);


  FUNC_4(VAR_4, 0x16);
  VAR_4->state &= ~(VAR_1|VAR_2);
 } else
  return (VAR_0);


 if ((FUNC_2(FUNC_0(VAR_3)) == 0) &&
     (FUNC_1(FUNC_0(VAR_3))))
  FUNC_5(FUNC_0(VAR_3));

 return (0);
}
