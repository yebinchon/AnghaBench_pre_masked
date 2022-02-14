
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sli4_t ;
struct TYPE_5__ {int * virt; } ;
struct TYPE_4__ {int length; int size; TYPE_2__ dma; } ;
typedef TYPE_1__ sli4_queue_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int *,int *,int) ;

int32_t
FUNC_2(sli4_t *VAR_1, sli4_queue_t *VAR_2, uint32_t VAR_3, uint8_t *VAR_4)
{
 int32_t VAR_5 = 0;
 uint8_t *VAR_6 = VAR_2->dma.virt;

 if (VAR_3 >= VAR_2->length) {
  return -1;
 }

 VAR_6 += VAR_3 * VAR_2->size;

 if (VAR_4) {
  FUNC_1(VAR_6, VAR_4, VAR_2->size);
 }

 FUNC_0(&VAR_2->dma, VAR_0);

 return VAR_5;
}
