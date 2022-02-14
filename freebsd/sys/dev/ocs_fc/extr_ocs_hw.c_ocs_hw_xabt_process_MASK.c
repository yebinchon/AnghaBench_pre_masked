
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_18__ {int io_lock; int io_wait_free; int os; int q_hist; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_19__ {scalar_t__ state; scalar_t__ is_port_owned; int rnode; scalar_t__ status_saved; int (* done ) (TYPE_3__*,int ,int ,int ,int ,void*) ;int saved_ext; int saved_len; int saved_status; void* arg; int ref; scalar_t__ xbusy; } ;
typedef TYPE_3__ ocs_hw_io_t ;
typedef int (* ocs_hw_done_t ) (TYPE_3__*,int ,int ,int ,int ,void*) ;
typedef int int32_t ;
struct TYPE_20__ {TYPE_1__* queue; } ;
typedef TYPE_5__ hw_cq_t ;
struct TYPE_17__ {int index; int length; int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int *,int ,void*,int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(ocs_hw_t *VAR_5, hw_cq_t *VAR_6, uint8_t *VAR_7, uint16_t VAR_8)
{

 ocs_hw_io_t *VAR_9 = ((void*)0);

 VAR_9 = FUNC_2(VAR_5, VAR_8);

 FUNC_8(&VAR_5->q_hist, VAR_4, (void *)VAR_7, 0, VAR_6->queue->id,
         ((VAR_6->queue->index - 1) & (VAR_6->queue->length - 1)));
 if (VAR_9 == ((void*)0)) {

  FUNC_7(VAR_5->os, "Error: xabt io lookup failed rid=%#x\n", VAR_8);
  return;
 }

 if (!VAR_9->xbusy) {
  FUNC_6(VAR_5->os, "xabt io not busy rid=%#x\n", VAR_8);
 } else {

  VAR_9->xbusy = VAR_0;
 }

       if (VAR_9->is_port_owned) {
               FUNC_5(&VAR_5->io_lock);

               FUNC_9(&VAR_9->ref);
               FUNC_10(&VAR_5->io_lock);
       }




 if (VAR_9->done != ((void*)0)) {
  ocs_hw_done_t VAR_10 = VAR_9->done;
  void *VAR_11 = VAR_9->arg;


  int32_t VAR_12 = VAR_9->saved_status;
  uint32_t VAR_13 = VAR_9->saved_len;
  uint32_t VAR_14 = VAR_9->saved_ext;

  VAR_9->done = ((void*)0);
  VAR_9->status_saved = 0;

  VAR_10(VAR_9, VAR_9->rnode, VAR_13, VAR_12, VAR_14, VAR_11);
 }


 if (VAR_9->is_port_owned) {
  FUNC_5(&VAR_5->io_lock);
  FUNC_3(VAR_5, VAR_9);
  FUNC_10(&VAR_5->io_lock);

  FUNC_0(VAR_5, VAR_9);
  return;
 }

 FUNC_5(&VAR_5->io_lock);
  if ((VAR_9->state == VAR_2) || (VAR_9->state == VAR_3)) {





   if (VAR_9->state == VAR_3) {
    VAR_9->state = VAR_1;
    FUNC_4(&VAR_5->io_wait_free, VAR_9);
    FUNC_1(VAR_5, VAR_9);
   }
  }
 FUNC_10(&VAR_5->io_lock);
}
