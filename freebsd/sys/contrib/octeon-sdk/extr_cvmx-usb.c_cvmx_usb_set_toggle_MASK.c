
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cvmx_usb_state_t ;
struct TYPE_3__ {int pid_toggle; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;
struct TYPE_4__ {TYPE_1__* pipe; } ;
typedef TYPE_2__ cvmx_usb_internal_state_t ;



extern void FUNC_0(cvmx_usb_state_t *VAR_0, int VAR_1, int VAR_2)
{
    cvmx_usb_internal_state_t *VAR_3 = (cvmx_usb_internal_state_t*)VAR_0;
    cvmx_usb_pipe_t *VAR_4 = VAR_3->pipe + VAR_1;

    VAR_4->pid_toggle = !!VAR_2;
}
