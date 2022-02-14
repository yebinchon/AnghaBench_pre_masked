
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ zb_objset; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int u_longlong_t ;
struct TYPE_8__ {scalar_t__ ds_object; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_9__ {scalar_t__ ds_prev_snap_obj; } ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(dsl_dataset_t *VAR_0, zbookmark_phys_t *VAR_1)
{
 if (VAR_1->zb_objset == VAR_0->ds_object) {
  VAR_1->zb_objset =
      FUNC_0(VAR_0)->ds_prev_snap_obj;
  FUNC_1("snapshotting ds %llu; currently traversing; "
      "reset zb_objset to %llu",
      (u_longlong_t)VAR_0->ds_object,
      (u_longlong_t)FUNC_0(VAR_0)->ds_prev_snap_obj);
 }
}
