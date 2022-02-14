
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int chdis; scalar_t__ chena; } ;
struct TYPE_12__ {int u32; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_usbcx_hccharx_t ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ cvmx_usb_transaction_t ;
typedef int cvmx_usb_status_t ;
typedef int cvmx_usb_state_t ;
struct TYPE_14__ {int flags; size_t channel; TYPE_3__* head; } ;
typedef TYPE_4__ cvmx_usb_pipe_t ;
struct TYPE_15__ {int index; int ** pipe_for_channel; TYPE_3__* transaction; TYPE_4__* pipe; } ;
typedef TYPE_5__ cvmx_usb_internal_state_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

cvmx_usb_status_t FUNC_8(cvmx_usb_state_t *VAR_9, int VAR_10,
                                  int VAR_11)
{
    cvmx_usb_transaction_t *VAR_12;
    cvmx_usb_internal_state_t *VAR_13 = (cvmx_usb_internal_state_t*)VAR_9;
    cvmx_usb_pipe_t *VAR_14 = VAR_13->pipe + VAR_10;

    FUNC_1();
    FUNC_2("%p", *VAR_9);
    FUNC_2("%d", VAR_10);
    FUNC_2("%d", VAR_11);

    if (FUNC_7((VAR_10 < 0) || (VAR_10 >= VAR_4)))
        FUNC_3(VAR_2);
    if (FUNC_7((VAR_11 < 0) || (VAR_11 >= VAR_5)))
        FUNC_3(VAR_2);


    if (FUNC_7((VAR_14->flags & VAR_6) == 0))
        FUNC_3(VAR_2);

    VAR_12 = VAR_13->transaction + VAR_11;


    if (FUNC_7((VAR_12->flags & VAR_8) == 0))
        FUNC_3(VAR_2);



    if ((VAR_14->head == VAR_12) &&
        (VAR_14->flags & VAR_7))
    {
        cvmx_usbcx_hccharx_t VAR_15;

        VAR_13->pipe_for_channel[VAR_14->channel] = ((void*)0);
        VAR_14->flags &= ~VAR_7;

        VAR_0;

        VAR_15.u32 = FUNC_5(VAR_13, FUNC_0(VAR_14->channel, VAR_13->index));

        if (VAR_15.s.chena)
        {
            VAR_15.s.chdis = 1;
            FUNC_6(VAR_13, FUNC_0(VAR_14->channel, VAR_13->index), VAR_15.u32);
        }
    }
    FUNC_4(VAR_13, VAR_14, VAR_12, VAR_1);
    FUNC_3(VAR_3);
}
