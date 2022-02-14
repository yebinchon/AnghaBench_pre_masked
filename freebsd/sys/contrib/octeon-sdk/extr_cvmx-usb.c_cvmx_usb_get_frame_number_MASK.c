
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frnum; } ;
struct TYPE_6__ {TYPE_1__ s; int u32; } ;
typedef TYPE_2__ cvmx_usbcx_hfnum_t ;
typedef int cvmx_usb_state_t ;
struct TYPE_7__ {int index; } ;
typedef TYPE_3__ cvmx_usb_internal_state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ) ;

int FUNC_5(cvmx_usb_state_t *VAR_0)
{
    int VAR_1;
    cvmx_usb_internal_state_t *VAR_2 = (cvmx_usb_internal_state_t*)VAR_0;
    cvmx_usbcx_hfnum_t VAR_3;

    FUNC_1();
    FUNC_2("%p", VAR_0);

    VAR_3.u32 = FUNC_4(VAR_2, FUNC_0(VAR_2->index));
    VAR_1 = VAR_3.s.frnum;

    FUNC_3(VAR_1);
}
