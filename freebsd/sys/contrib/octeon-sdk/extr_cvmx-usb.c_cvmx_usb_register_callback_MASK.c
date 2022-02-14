
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_usb_status_t ;
typedef void cvmx_usb_state_t ;
struct TYPE_2__ {void** callback_data; void** callback; } ;
typedef TYPE_1__ cvmx_usb_internal_state_t ;
typedef size_t cvmx_usb_callback_t ;
typedef void* cvmx_usb_callback_func_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

cvmx_usb_status_t FUNC_4(cvmx_usb_state_t *VAR_3,
                                             cvmx_usb_callback_t VAR_4,
                                             cvmx_usb_callback_func_t VAR_5,
                                             void *VAR_6)
{
    cvmx_usb_internal_state_t *VAR_7 = (cvmx_usb_internal_state_t*)VAR_3;

    FUNC_0();
    FUNC_1("%p", VAR_3);
    FUNC_1("%d", VAR_4);
    FUNC_1("%p", VAR_5);
    FUNC_1("%p", VAR_6);
    if (FUNC_3(VAR_4 >= VAR_2))
        FUNC_2(VAR_0);
    if (FUNC_3(!VAR_5))
        FUNC_2(VAR_0);

    VAR_7->callback[VAR_4] = VAR_5;
    VAR_7->callback_data[VAR_4] = VAR_6;

    FUNC_2(VAR_1);
}
