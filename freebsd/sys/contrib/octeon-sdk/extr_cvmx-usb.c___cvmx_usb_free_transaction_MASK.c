
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int * prev; scalar_t__ flags; } ;
typedef TYPE_1__ cvmx_usb_transaction_t ;
struct TYPE_6__ {TYPE_1__* free_transaction_tail; TYPE_1__* free_transaction_head; } ;
typedef TYPE_2__ cvmx_usb_internal_state_t ;



__attribute__((used)) static inline void FUNC_0(cvmx_usb_internal_state_t *VAR_0,
                                        cvmx_usb_transaction_t *VAR_1)
{
    VAR_1->flags = 0;
    VAR_1->prev = ((void*)0);
    VAR_1->next = ((void*)0);
    if (VAR_0->free_transaction_tail)
        VAR_0->free_transaction_tail->next = VAR_1;
    else
        VAR_0->free_transaction_head = VAR_1;
    VAR_0->free_transaction_tail = VAR_1;
}
