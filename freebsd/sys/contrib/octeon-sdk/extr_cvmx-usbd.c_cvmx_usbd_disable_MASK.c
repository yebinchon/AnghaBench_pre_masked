
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int index; } ;
typedef TYPE_2__ cvmx_usbd_state_t ;
struct TYPE_7__ {int sgoutnak; int sftdiscon; } ;
struct TYPE_9__ {int u32; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_usbcx_dctl_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

int FUNC_3(cvmx_usbd_state_t *VAR_0)
{
    cvmx_usbcx_dctl_t VAR_1;
    VAR_1.u32 = FUNC_1(VAR_0, FUNC_0(VAR_0->index));
    VAR_1.s.sgoutnak = 1;
    VAR_1.s.sftdiscon = 1;
    FUNC_2(VAR_0, FUNC_0(VAR_0->index), VAR_1.u32);
    return 0;
}
