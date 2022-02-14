
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ device_speed; } ;
typedef TYPE_3__ cvmx_usb_pipe_t ;
struct TYPE_7__ {scalar_t__ prtspd; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_10__ {TYPE_2__ usbcx_hprt; } ;
typedef TYPE_4__ cvmx_usb_internal_state_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(cvmx_usb_internal_state_t *VAR_1, cvmx_usb_pipe_t *VAR_2)
{
    return ((VAR_2->device_speed != VAR_0) && (VAR_1->usbcx_hprt.s.prtspd == VAR_0));
}
