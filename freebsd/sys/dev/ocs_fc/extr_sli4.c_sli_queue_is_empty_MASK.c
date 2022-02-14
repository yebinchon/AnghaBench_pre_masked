
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sli4_t ;
struct TYPE_6__ {int * virt; } ;
struct TYPE_5__ {int index; int size; int lock; TYPE_4__ dma; } ;
typedef TYPE_1__ sli4_queue_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;

int32_t
FUNC_4(sli4_t *VAR_3, sli4_queue_t *VAR_4)
{
 int32_t VAR_5 = VAR_2;
 uint8_t *VAR_6 = VAR_4->dma.virt;

 FUNC_1(&VAR_4->lock);

 FUNC_0(&VAR_4->dma, VAR_1);

 VAR_6 += VAR_4->index * VAR_4->size;

 VAR_5 = !FUNC_3(VAR_4, VAR_6, VAR_0);

 FUNC_2(&VAR_4->lock);

 return VAR_5;
}
