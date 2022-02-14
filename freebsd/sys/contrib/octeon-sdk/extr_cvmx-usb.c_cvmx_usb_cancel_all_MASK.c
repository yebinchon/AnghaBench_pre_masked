
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ cvmx_usb_status_t ;
typedef int cvmx_usb_state_t ;
struct TYPE_4__ {int flags; scalar_t__ head; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;
struct TYPE_5__ {TYPE_1__* pipe; } ;
typedef TYPE_2__ cvmx_usb_internal_state_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int,int ) ;

cvmx_usb_status_t FUNC_6(cvmx_usb_state_t *VAR_4, int VAR_5)
{
    cvmx_usb_internal_state_t *VAR_6 = (cvmx_usb_internal_state_t*)VAR_4;
    cvmx_usb_pipe_t *VAR_7 = VAR_6->pipe + VAR_5;

    FUNC_0();
    FUNC_1("%p", *VAR_4);
    FUNC_1("%d", VAR_5);
    if (FUNC_4((VAR_5 < 0) || (VAR_5 >= VAR_2)))
        FUNC_2(VAR_0);


    if (FUNC_4((VAR_7->flags & VAR_3) == 0))
        FUNC_2(VAR_0);


    while (VAR_7->head)
    {
        cvmx_usb_status_t VAR_8 = FUNC_5(VAR_4, VAR_5,
            FUNC_3(VAR_6, VAR_7->head));
        if (FUNC_4(VAR_8 != VAR_1))
            FUNC_2(VAR_8);
    }
    FUNC_2(VAR_1);
}
