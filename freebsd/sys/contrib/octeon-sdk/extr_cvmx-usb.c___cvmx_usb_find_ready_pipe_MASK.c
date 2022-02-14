
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int flags; scalar_t__ next_tx_frame; int split_sc_frame; struct TYPE_8__* next; struct TYPE_8__* head; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;
struct TYPE_9__ {TYPE_1__* head; } ;
typedef TYPE_2__ cvmx_usb_pipe_list_t ;
struct TYPE_10__ {TYPE_1__* active_split; } ;
typedef TYPE_3__ cvmx_usb_internal_state_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static cvmx_usb_pipe_t *FUNC_1(cvmx_usb_internal_state_t *VAR_1, cvmx_usb_pipe_list_t *VAR_2, uint64_t VAR_3)
{
    cvmx_usb_pipe_t *VAR_4 = VAR_2->head;
    while (VAR_4)
    {
        if (!(VAR_4->flags & VAR_0) && VAR_4->head &&
            (VAR_4->next_tx_frame <= VAR_3) &&
            ((VAR_4->split_sc_frame == -1) || ((((int)VAR_3 - (int)VAR_4->split_sc_frame) & 0x7f) < 0x40)) &&
            (!VAR_1->active_split || (VAR_1->active_split == VAR_4->head)))
        {
            FUNC_0(VAR_4, 128);
            FUNC_0(VAR_4->head, 0);
            return VAR_4;
        }
        VAR_4 = VAR_4->next;
    }
    return ((void*)0);
}
