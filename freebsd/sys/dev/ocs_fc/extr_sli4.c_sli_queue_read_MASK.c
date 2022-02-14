
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int os; } ;
typedef TYPE_2__ sli4_t ;
struct TYPE_11__ {int * virt; } ;
struct TYPE_8__ {int r_idx; } ;
struct TYPE_10__ {int type; int index; int size; int lock; int n_posted; int length; TYPE_7__ dma; TYPE_1__ u; } ;
typedef TYPE_3__ sli4_queue_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (int ,int ,char*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;

int32_t
FUNC_6(sli4_t *VAR_5, sli4_queue_t *VAR_6, uint8_t *VAR_7)
{
 int32_t VAR_8 = 0;
 uint8_t *VAR_9 = VAR_6->dma.virt;
 uint32_t *VAR_10 = ((void*)0);

 if (128 == VAR_6->type) {
  VAR_10 = &VAR_6->u.r_idx;
 } else {
  VAR_10 = &VAR_6->index;
 }

 FUNC_2(&VAR_6->lock);

 FUNC_0(&VAR_6->dma, VAR_3);

 VAR_9 += *VAR_10 * VAR_6->size;

 if (!FUNC_5(VAR_6, VAR_9, VAR_4)) {
  FUNC_4(&VAR_6->lock);
  return -1;
 }

 if (VAR_7) {
  FUNC_3(VAR_7, VAR_9, VAR_6->size);
 }

 switch (VAR_6->type) {
  case 129:
  case 130:
  case 128:
   *VAR_10 = (*VAR_10 + 1) & (VAR_6->length - 1);
   if (128 != VAR_6->type) {
    VAR_6->n_posted++;
   }
   break;
  default:

   break;
 }

 FUNC_4(&VAR_6->lock);

 return VAR_8;
}
