
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {int lock; } ;
struct TYPE_8__ {TYPE_1__* fcfi; TYPE_5__ io_pending_lock; int io_pool; int * ocs; } ;
typedef TYPE_2__ ocs_xport_t ;
typedef int ocs_t ;
struct TYPE_7__ {TYPE_5__ pend_frames_lock; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(ocs_xport_t *VAR_1)
{
 ocs_t *VAR_2;
 uint32_t VAR_3;

 if (VAR_1) {
  VAR_2 = VAR_1->ocs;
  FUNC_2(VAR_1->io_pool);
  FUNC_4(VAR_2);
  if(FUNC_0(&VAR_1->io_pending_lock.lock))
   FUNC_3(&VAR_1->io_pending_lock);

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_3(&VAR_1->fcfi[VAR_3].pend_frames_lock);
  }

  FUNC_5(VAR_1);

  FUNC_1(VAR_2, VAR_1, sizeof(*VAR_1));
 }
}
