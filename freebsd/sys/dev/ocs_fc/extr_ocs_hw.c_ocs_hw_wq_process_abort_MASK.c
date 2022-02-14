
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {int io_abort_lock; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_9__ {scalar_t__ saved_len; scalar_t__ saved_ext; scalar_t__ abort_reqtag; scalar_t__ abort_in_progress; int rnode; int (* abort_done ) (TYPE_2__*,int ,scalar_t__,int ,scalar_t__,void*) ;void* abort_arg; scalar_t__ status_saved; int saved_status; int (* done ) (TYPE_2__*,int ,scalar_t__,int ,scalar_t__,void*) ;void* arg; TYPE_1__* hw; } ;
typedef TYPE_2__ ocs_hw_io_t ;
typedef int (* ocs_hw_done_t ) (TYPE_2__*,int ,scalar_t__,int ,scalar_t__,void*) ;
typedef int int32_t ;
typedef int hw_wq_callback_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3, uint8_t *VAR_4, int32_t VAR_5)
{
 ocs_hw_io_t *VAR_6 = VAR_3;
 ocs_hw_t *VAR_7 = VAR_6->hw;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 hw_wq_callback_t *VAR_10;






 VAR_8 = FUNC_6(&VAR_7->sli, VAR_4);
 if (VAR_5 == VAR_1 &&
     VAR_8 == VAR_0 &&
  VAR_6->done != ((void*)0)) {
  ocs_hw_done_t VAR_11 = VAR_6->done;
  void *VAR_12 = VAR_6->arg;

  VAR_6->done = ((void*)0);







  VAR_5 = VAR_6->saved_status;
  VAR_9 = VAR_6->saved_len;
  VAR_8 = VAR_6->saved_ext;
  VAR_6->status_saved = 0;
  VAR_11(VAR_6, VAR_6->rnode, VAR_9, VAR_5, VAR_8, VAR_12);
 }

 if (VAR_6->abort_done != ((void*)0)) {
  ocs_hw_done_t VAR_13 = VAR_6->abort_done;
  void *VAR_14 = VAR_6->abort_arg;

  VAR_6->abort_done = ((void*)0);

  VAR_13(VAR_6, VAR_6->rnode, VAR_9, VAR_5, VAR_8, VAR_14);
 }
 FUNC_4(&VAR_7->io_abort_lock);

  VAR_6->abort_in_progress = 0;
 FUNC_5(&VAR_7->io_abort_lock);


 FUNC_0(VAR_6->abort_reqtag != VAR_2);
 VAR_10 = FUNC_3(VAR_7, VAR_6->abort_reqtag);
 FUNC_2(VAR_7, VAR_10);





 (void)FUNC_1(VAR_7, VAR_6);
}
