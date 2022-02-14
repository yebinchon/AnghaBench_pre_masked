
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* if_ctx_t ;
struct TYPE_4__ {int ifc_dev; int ifc_led_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

void
FUNC_2(if_ctx_t VAR_1)
{

 VAR_1->ifc_led_dev = FUNC_1(VAR_0, VAR_1,
     FUNC_0(VAR_1->ifc_dev));
}
