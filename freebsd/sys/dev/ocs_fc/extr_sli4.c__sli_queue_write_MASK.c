
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ perf_wq_id_association; } ;
struct TYPE_10__ {int os; TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
struct TYPE_12__ {int * virt; } ;
struct TYPE_11__ {int index; int size; int type; int n_posted; int length; TYPE_6__ dma; int id; } ;
typedef TYPE_3__ sli4_queue_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (int ,int ,char*,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *,int ) ;

int32_t
FUNC_5(sli4_t *VAR_3, sli4_queue_t *VAR_4, uint8_t *VAR_5)
{
 int32_t VAR_6 = 0;
 uint8_t *VAR_7 = VAR_4->dma.virt;
 uint32_t VAR_8;

 VAR_8 = VAR_4->index;
 VAR_7 += VAR_4->index * VAR_4->size;

 if (VAR_5) {
  if ((128 == VAR_4->type) && VAR_3->config.perf_wq_id_association) {
   FUNC_4(VAR_5, VAR_4->id);
  }
  FUNC_2(VAR_7, VAR_5, VAR_4->size);
  VAR_4->n_posted = 1;
 }

 FUNC_0(&VAR_4->dma, VAR_2);

 VAR_6 = FUNC_3(VAR_3, VAR_4);

 VAR_4->index = (VAR_4->index + VAR_4->n_posted) & (VAR_4->length - 1);
 VAR_4->n_posted = 0;

 if (VAR_6 < 0) {

  return VAR_6;
 } else if (VAR_6 > 0) {

  return -VAR_6;
 } else {
  return VAR_8;
 }
}
