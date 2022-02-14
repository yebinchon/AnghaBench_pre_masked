
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ cvmx_usb_transfer_t ;
struct TYPE_12__ {scalar_t__ type; int flags; int buffer_length; int iso_start_frame; int iso_number_packets; struct TYPE_12__* prev; struct TYPE_12__* next; int stage; void* callback_data; int callback; int * iso_packets; void* control_header; void* buffer; } ;
typedef TYPE_1__ cvmx_usb_transaction_t ;
struct TYPE_13__ {int flags; scalar_t__ transfer_type; scalar_t__ next_tx_frame; int interval; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ cvmx_usb_pipe_t ;
typedef int cvmx_usb_iso_packet_t ;
struct TYPE_14__ {scalar_t__ frame_number; scalar_t__ active_pipes; int idle_pipes; TYPE_2__* pipe; } ;
typedef TYPE_3__ cvmx_usb_internal_state_t ;
typedef int cvmx_usb_callback_func_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(cvmx_usb_internal_state_t *VAR_7,
                                         int VAR_8,
                                         cvmx_usb_transfer_t VAR_9,
                                         int VAR_10,
                                         uint64_t VAR_11,
                                         int VAR_12,
                                         uint64_t VAR_13,
                                         int VAR_14,
                                         int VAR_15,
                                         cvmx_usb_iso_packet_t *VAR_16,
                                         cvmx_usb_callback_func_t VAR_17,
                                         void *VAR_18)
{
    int VAR_19;
    cvmx_usb_transaction_t *VAR_20;
    cvmx_usb_pipe_t *VAR_21 = VAR_7->pipe + VAR_8;

    FUNC_0();
    if (FUNC_7((VAR_8 < 0) || (VAR_8 >= VAR_5)))
        FUNC_1(VAR_0);

    if (FUNC_7((VAR_21->flags & VAR_6) == 0))
        FUNC_1(VAR_0);
    if (FUNC_7(VAR_21->transfer_type != VAR_9))
        FUNC_1(VAR_0);

    VAR_20 = FUNC_2(VAR_7);
    if (FUNC_7(!VAR_20))
        FUNC_1(VAR_1);

    VAR_20->type = VAR_9;
    VAR_20->flags |= VAR_10;
    VAR_20->buffer = VAR_11;
    VAR_20->buffer_length = VAR_12;
    VAR_20->control_header = VAR_13;
    VAR_20->iso_start_frame = VAR_14;
    VAR_20->iso_number_packets = VAR_15;
    VAR_20->iso_packets = VAR_16;
    VAR_20->callback = VAR_17;
    VAR_20->callback_data = VAR_18;
    if (VAR_20->type == VAR_4)
        VAR_20->stage = VAR_3;
    else
        VAR_20->stage = VAR_2;

    VAR_20->next = ((void*)0);
    if (VAR_21->tail)
    {
        VAR_20->prev = VAR_21->tail;
        VAR_20->prev->next = VAR_20;
    }
    else
    {
        if (VAR_21->next_tx_frame < VAR_7->frame_number)
            VAR_21->next_tx_frame = VAR_7->frame_number + VAR_21->interval -
                (VAR_7->frame_number - VAR_21->next_tx_frame) % VAR_21->interval;
        VAR_20->prev = ((void*)0);
        VAR_21->head = VAR_20;
        FUNC_5(&VAR_7->idle_pipes, VAR_21);
        FUNC_3(VAR_7->active_pipes + VAR_21->transfer_type, VAR_21);
    }
    VAR_21->tail = VAR_20;

    VAR_19 = FUNC_4(VAR_7, VAR_20);


    if (!VAR_20->prev)
        FUNC_6(VAR_7, 0);

    FUNC_1(VAR_19);
}
