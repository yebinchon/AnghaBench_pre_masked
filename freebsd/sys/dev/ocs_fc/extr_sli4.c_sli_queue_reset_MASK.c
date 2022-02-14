
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sli4_t ;
struct TYPE_6__ {int * virt; } ;
struct TYPE_5__ {scalar_t__ r_idx; } ;
struct TYPE_7__ {scalar_t__ type; int size; int lock; scalar_t__ length; TYPE_2__ dma; TYPE_1__ u; scalar_t__ n_posted; scalar_t__ index; } ;
typedef TYPE_3__ sli4_queue_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

int32_t
FUNC_3(sli4_t *VAR_1, sli4_queue_t *VAR_2)
{

 FUNC_0(&VAR_2->lock);

 VAR_2->index = 0;
 VAR_2->n_posted = 0;

 if (VAR_0 == VAR_2->type) {
  VAR_2->u.r_idx = 0;
 }

 if (VAR_2->dma.virt != ((void*)0)) {
  FUNC_1(VAR_2->dma.virt, 0, (VAR_2->size * (uint64_t)VAR_2->length));
 }

 FUNC_2(&VAR_2->lock);

 return 0;
}
