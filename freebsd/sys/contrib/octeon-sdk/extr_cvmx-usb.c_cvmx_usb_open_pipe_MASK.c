
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int cvmx_usb_transfer_t ;
typedef int cvmx_usb_state_t ;
typedef int cvmx_usb_speed_t ;
struct TYPE_10__ {int flags; int device_addr; int endpoint_num; int device_speed; int max_packet; int transfer_type; int transfer_dir; int interval; int next_tx_frame; int multi_count; int hub_device_addr; int hub_port; int split_sc_frame; scalar_t__ pid_toggle; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;
typedef int cvmx_usb_pipe_flags_t ;
struct TYPE_12__ {TYPE_1__* head; } ;
struct TYPE_11__ {int frame_number; int idle_pipes; TYPE_3__ free_pipes; } ;
typedef TYPE_2__ cvmx_usb_internal_state_t ;
typedef int cvmx_usb_direction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(cvmx_usb_state_t *VAR_14, cvmx_usb_pipe_flags_t VAR_15,
                       int VAR_16, int VAR_17,
                       cvmx_usb_speed_t VAR_18, int VAR_19,
                       cvmx_usb_transfer_t VAR_20,
                       cvmx_usb_direction_t VAR_21, int VAR_22,
                       int VAR_23, int VAR_24, int VAR_25)
{
    cvmx_usb_pipe_t *VAR_26;
    cvmx_usb_internal_state_t *VAR_27 = (cvmx_usb_internal_state_t*)VAR_14;

    FUNC_0();
    FUNC_1("%p", *VAR_14);
    FUNC_1("0x%x", VAR_15);
    FUNC_1("%d", VAR_16);
    FUNC_1("%d", VAR_17);
    FUNC_1("%d", VAR_18);
    FUNC_1("%d", VAR_19);
    FUNC_1("%d", VAR_20);
    FUNC_1("%d", VAR_21);
    FUNC_1("%d", VAR_22);
    FUNC_1("%d", VAR_23);
    FUNC_1("%d", VAR_24);
    FUNC_1("%d", VAR_25);

    if (FUNC_7((VAR_16 < 0) || (VAR_16 > VAR_9)))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_17 < 0) || (VAR_17 > VAR_10)))
        FUNC_2(VAR_2);
    if (FUNC_7(VAR_18 > VAR_5))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_19 <= 0) || (VAR_19 > 1024)))
        FUNC_2(VAR_2);
    if (FUNC_7(VAR_20 > VAR_8))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_21 != VAR_1) &&
        (VAR_21 != VAR_0)))
        FUNC_2(VAR_2);
    if (FUNC_7(VAR_22 < 0))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_20 == VAR_7) && VAR_22))
        FUNC_2(VAR_2);
    if (FUNC_7(VAR_23 < 0))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_18 != VAR_4) &&
        (VAR_23 != 0)))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_24 < 0) || (VAR_24 > VAR_9)))
        FUNC_2(VAR_2);
    if (FUNC_7((VAR_25 < 0) || (VAR_25 > VAR_11)))
        FUNC_2(VAR_2);


    VAR_26 = VAR_27->free_pipes.head;
    if (!VAR_26)
        FUNC_2(VAR_3);
    FUNC_6(&VAR_27->free_pipes, VAR_26);
    VAR_26->flags = VAR_15 | VAR_13;
    if ((VAR_18 == VAR_4) &&
        (VAR_21 == VAR_1) &&
        (VAR_20 == VAR_6))
        VAR_26->flags |= VAR_12;
    VAR_26->device_addr = VAR_16;
    VAR_26->endpoint_num = VAR_17;
    VAR_26->device_speed = VAR_18;
    VAR_26->max_packet = VAR_19;
    VAR_26->transfer_type = VAR_20;
    VAR_26->transfer_dir = VAR_21;


    if (!VAR_22)
        VAR_22 = 1;
    if (FUNC_5(VAR_27, VAR_26))
    {
        VAR_26->interval = VAR_22*8;

        VAR_26->next_tx_frame = ((VAR_27->frame_number+7)&~7) + VAR_26->interval;
    }
    else
    {
        VAR_26->interval = VAR_22;
        VAR_26->next_tx_frame = VAR_27->frame_number + VAR_26->interval;
    }
    VAR_26->multi_count = VAR_23;
    VAR_26->hub_device_addr = VAR_24;
    VAR_26->hub_port = VAR_25;
    VAR_26->pid_toggle = 0;
    VAR_26->split_sc_frame = -1;
    FUNC_3(&VAR_27->idle_pipes, VAR_26);




    FUNC_2(FUNC_4(VAR_27, VAR_26));
}
