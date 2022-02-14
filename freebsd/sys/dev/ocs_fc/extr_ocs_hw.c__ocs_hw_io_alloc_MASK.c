
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int io_alloc_failed_count; int io_inuse; int io_free; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_9__ {int ref; int abort_reqtag; int quarantine_first_phase; int quarantine; int state; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static inline ocs_hw_io_t *
FUNC_4(ocs_hw_t *VAR_5)
{
 ocs_hw_io_t *VAR_6 = ((void*)0);

 if (((void*)0) != (VAR_6 = FUNC_2(&VAR_5->io_free))) {
  FUNC_1(&VAR_5->io_inuse, VAR_6);
  VAR_6->state = VAR_1;
  VAR_6->quarantine = VAR_0;
  VAR_6->quarantine_first_phase = VAR_2;
  VAR_6->abort_reqtag = VAR_3;
  FUNC_3(&VAR_6->ref, VAR_4, VAR_6);
 } else {
  FUNC_0(&VAR_5->io_alloc_failed_count, 1);
 }

 return VAR_6;
}
