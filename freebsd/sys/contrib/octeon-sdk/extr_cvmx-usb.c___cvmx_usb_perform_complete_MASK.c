
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ type; int iso_number_packets; int idle_pipes; scalar_t__ transfer_type; scalar_t__ active_pipes; TYPE_3__* head; TYPE_3__* next; TYPE_2__* prev; TYPE_2__* tail; int stage; TYPE_1__* iso_packets; scalar_t__ actual_bytes; struct TYPE_25__* active_split; } ;
typedef TYPE_4__ cvmx_usb_transaction_t ;
typedef TYPE_4__ cvmx_usb_pipe_t ;
typedef TYPE_4__ cvmx_usb_internal_state_t ;
typedef TYPE_4__* cvmx_usb_complete_t ;
struct TYPE_24__ {TYPE_2__* prev; } ;
struct TYPE_23__ {TYPE_3__* next; } ;
struct TYPE_22__ {TYPE_4__* status; scalar_t__ length; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,TYPE_4__*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int ,TYPE_4__*) ;
 int FUNC_6 (scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(cvmx_usb_internal_state_t * VAR_4,
                                        cvmx_usb_pipe_t *VAR_5,
                                        cvmx_usb_transaction_t *VAR_6,
                                        cvmx_usb_complete_t VAR_7)
{
    FUNC_0();
    FUNC_1("%p", VAR_4);
    FUNC_1("%p", VAR_5);
    FUNC_1("%p", VAR_6);
    FUNC_1("%d", VAR_7);


    if (VAR_4->active_split == VAR_6)
        VAR_4->active_split = ((void*)0);



    if (FUNC_7(VAR_6->type == VAR_3))
    {

        VAR_6->iso_packets[0].length = VAR_6->actual_bytes;
        VAR_6->iso_packets[0].status = VAR_7;



        if ((VAR_6->iso_number_packets > 1) && (VAR_7 == VAR_1))
        {
            VAR_6->actual_bytes = 0;
            VAR_6->iso_number_packets--;
            VAR_6->iso_packets++;
            VAR_6->stage = VAR_2;
            goto done;
        }
    }


    if (VAR_6->next)
        VAR_6->next->prev = VAR_6->prev;
    else
        VAR_5->tail = VAR_6->prev;
    if (VAR_6->prev)
        VAR_6->prev->next = VAR_6->next;
    else
        VAR_5->head = VAR_6->next;
    if (!VAR_5->head)
    {
        FUNC_6(VAR_4->active_pipes + VAR_5->transfer_type, VAR_5);
        FUNC_3(&VAR_4->idle_pipes, VAR_5);

    }
    FUNC_5(VAR_4, VAR_5, VAR_6,
                                VAR_0,
                                VAR_7);
    FUNC_4(VAR_4, VAR_6);
done:
    FUNC_2();
}
