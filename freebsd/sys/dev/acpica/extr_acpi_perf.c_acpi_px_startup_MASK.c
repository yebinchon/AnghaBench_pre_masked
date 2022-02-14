
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ PstateControl; int SmiCommand; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{


 if (VAR_0.PstateControl == 0)
  return;
 FUNC_0(VAR_1);
 FUNC_2(VAR_0.SmiCommand, VAR_0.PstateControl, 8);
 FUNC_1(VAR_1);
}
