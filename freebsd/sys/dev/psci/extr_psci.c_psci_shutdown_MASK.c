
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__* psci_fnids; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_1(void *VAR_5, int VAR_6)
{
 uint32_t VAR_7 = 0;

 if (VAR_4 == ((void*)0))
  return;


 if ((VAR_6 & VAR_3) != 0)
  VAR_7 = VAR_4->psci_fnids[VAR_0];
 else if ((VAR_6 & VAR_2) == 0)
  VAR_7 = VAR_4->psci_fnids[VAR_1];

 if (VAR_7)
  FUNC_0(VAR_7, 0, 0, 0);


}
