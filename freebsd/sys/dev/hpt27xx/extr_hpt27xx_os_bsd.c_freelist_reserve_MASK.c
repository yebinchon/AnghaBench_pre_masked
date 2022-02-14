
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct freelist {void* count; void* reserved_count; scalar_t__ head; void* size; scalar_t__ dma; struct freelist* next; } ;
struct TYPE_4__ {TYPE_1__* vbus_ext; } ;
struct TYPE_3__ {scalar_t__ ext_type; struct freelist* freelist_head; } ;
typedef TYPE_1__* PVBUS_EXT ;
typedef TYPE_2__* PHBA ;
typedef void* HPT_UINT ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct freelist *VAR_1, void *VAR_2, HPT_UINT VAR_3, HPT_UINT VAR_4)
{
    PVBUS_EXT VAR_5 = VAR_2;

    if (VAR_5->ext_type!=VAR_0)
        VAR_5 = ((PHBA)VAR_2)->vbus_ext;

    VAR_1->next = VAR_5->freelist_head;
    VAR_5->freelist_head = VAR_1;
    VAR_1->dma = 0;
    VAR_1->size = VAR_3;
    VAR_1->head = 0;



    VAR_1->count = VAR_4;
}
