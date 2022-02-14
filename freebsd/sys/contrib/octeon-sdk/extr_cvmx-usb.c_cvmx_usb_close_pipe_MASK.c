
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cvmx_usb_status_t ;
typedef int cvmx_usb_state_t ;
struct TYPE_5__ {int flags; int head; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;
struct TYPE_6__ {int free_pipes; int idle_pipes; TYPE_1__* pipe; } ;
typedef TYPE_2__ cvmx_usb_internal_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;

cvmx_usb_status_t FUNC_6(cvmx_usb_state_t *VAR_5, int VAR_6)
{
    cvmx_usb_internal_state_t *VAR_7 = (cvmx_usb_internal_state_t*)VAR_5;
    cvmx_usb_pipe_t *VAR_8 = VAR_7->pipe + VAR_6;

    FUNC_0();
    FUNC_1("%p", *VAR_5);
    FUNC_1("%d", VAR_6);
    if (FUNC_5((VAR_6 < 0) || (VAR_6 >= VAR_3)))
        FUNC_2(VAR_1);


    if (FUNC_5((VAR_8->flags & VAR_4) == 0))
        FUNC_2(VAR_1);


    if (FUNC_5(VAR_8->head))
        FUNC_2(VAR_0);

    VAR_8->flags = 0;
    FUNC_4(&VAR_7->idle_pipes, VAR_8);
    FUNC_3(&VAR_7->free_pipes, VAR_8);

    FUNC_2(VAR_2);
}
