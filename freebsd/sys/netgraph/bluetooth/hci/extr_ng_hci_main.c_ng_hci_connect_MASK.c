
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ng_hci_unit_p ;
typedef scalar_t__ hook_p ;
struct TYPE_2__ {scalar_t__ drv; scalar_t__ acl; scalar_t__ sco; scalar_t__ raw; int state; int node; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_6)
{
 ng_hci_unit_p VAR_7 = (ng_hci_unit_p) FUNC_3(FUNC_0(VAR_6));

 if (VAR_6 != VAR_7->drv) {
  if (VAR_6 == VAR_7->acl) {
   FUNC_2(VAR_6, VAR_5);
   FUNC_1(VAR_6, VAR_1);
  } else if (VAR_6 == VAR_7->sco) {
   FUNC_2(VAR_6, VAR_5);
   FUNC_1(VAR_6, VAR_4);
  } else
   FUNC_1(VAR_6, VAR_3);


  if (VAR_6 != VAR_7->raw)
   FUNC_4(VAR_7->node, VAR_6, VAR_2, ((void*)0),0);
 } else
  VAR_7->state |= VAR_0;

 return (0);
}
