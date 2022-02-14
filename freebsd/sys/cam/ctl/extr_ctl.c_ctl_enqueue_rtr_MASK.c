
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t targ_mapped_lun; } ;
struct TYPE_4__ {TYPE_1__ nexus; } ;
union ctl_io {TYPE_2__ io_hdr; } ;
struct ctl_thread {int queue_lock; int rtr_queue; } ;
struct ctl_softc {struct ctl_thread* threads; } ;


 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ctl_thread*) ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_5(union ctl_io *VAR_2)
{
 struct ctl_softc *VAR_3 = FUNC_0(VAR_2);
 struct ctl_thread *VAR_4;

 VAR_4 = &VAR_3->threads[VAR_2->io_hdr.nexus.targ_mapped_lun % VAR_1];
 FUNC_2(&VAR_4->queue_lock);
 FUNC_1(&VAR_4->rtr_queue, &VAR_2->io_hdr, VAR_0);
 FUNC_3(&VAR_4->queue_lock);
 FUNC_4(VAR_4);
}
