
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_11__ {scalar_t__ zb_objset; } ;
struct TYPE_8__ {TYPE_7__ scn_bookmark; int scn_flags; } ;
typedef TYPE_1__ dsl_scan_phys_t ;
struct TYPE_9__ {scalar_t__ ds_object; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_10__ {scalar_t__ ds_next_snap_obj; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ,int ,int ,int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_3(dsl_dataset_t *VAR_2, dsl_scan_phys_t *VAR_3)
{
 if (VAR_3->scn_bookmark.zb_objset == VAR_2->ds_object) {
  if (VAR_2->ds_is_snapshot) {
   VAR_3->scn_bookmark.zb_objset =
       FUNC_1(VAR_2)->ds_next_snap_obj;
   FUNC_2("destroying ds %llu; currently traversing; "
       "reset zb_objset to %llu",
       (u_longlong_t)VAR_2->ds_object,
       (u_longlong_t)FUNC_1(VAR_2)->
       ds_next_snap_obj);
   VAR_3->scn_flags |= VAR_0;
  } else {
   FUNC_0(&VAR_3->scn_bookmark,
       VAR_1, 0, 0, 0);
   FUNC_2("destroying ds %llu; currently traversing; "
       "reset bookmark to -1,0,0,0",
       (u_longlong_t)VAR_2->ds_object);
  }
 }
}
