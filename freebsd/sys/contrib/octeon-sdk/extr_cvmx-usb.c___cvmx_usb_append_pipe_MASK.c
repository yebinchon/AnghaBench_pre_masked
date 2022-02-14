
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ cvmx_usb_pipe_t ;
struct TYPE_6__ {TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ cvmx_usb_pipe_list_t ;



__attribute__((used)) static inline void FUNC_0(cvmx_usb_pipe_list_t *VAR_0, cvmx_usb_pipe_t *VAR_1)
{
    VAR_1->next = ((void*)0);
    VAR_1->prev = VAR_0->tail;
    if (VAR_0->tail)
        VAR_0->tail->next = VAR_1;
    else
        VAR_0->head = VAR_1;
    VAR_0->tail = VAR_1;
}
