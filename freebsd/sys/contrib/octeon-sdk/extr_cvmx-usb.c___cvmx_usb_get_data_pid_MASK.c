
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pid_toggle; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;



__attribute__((used)) static inline int FUNC_0(cvmx_usb_pipe_t *VAR_0)
{
    if (VAR_0->pid_toggle)
        return 2;
    else
        return 0;
}
