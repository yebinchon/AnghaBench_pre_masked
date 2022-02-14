
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_usb_state_t ;
typedef int cvmx_usb_port_status_t ;
struct TYPE_2__ {int port_status; } ;
typedef TYPE_1__ cvmx_usb_internal_state_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 () ;

void FUNC_3(cvmx_usb_state_t *VAR_0, cvmx_usb_port_status_t VAR_1)
{
    cvmx_usb_internal_state_t *VAR_2 = (cvmx_usb_internal_state_t*)VAR_0;
    FUNC_0();
    FUNC_1("%p", VAR_0);
    VAR_2->port_status = VAR_1;
    FUNC_2();
}
