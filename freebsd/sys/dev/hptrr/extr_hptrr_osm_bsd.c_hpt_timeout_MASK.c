
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int priv; } ;
struct TYPE_5__ {TYPE_1__* vbus_ext; } ;
struct TYPE_4__ {scalar_t__ vbus; } ;
typedef int PVBUS ;
typedef TYPE_2__* POS_CMDEXT ;
typedef TYPE_3__* PCOMMAND ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 PCOMMAND VAR_1 = (PCOMMAND)VAR_0;
 POS_CMDEXT VAR_2 = (POS_CMDEXT)VAR_1->priv;

 FUNC_0(("pCmd %p timeout", VAR_1));

 FUNC_1((PVBUS)VAR_2->vbus_ext->vbus);
}
