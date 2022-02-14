
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* drc_ds; scalar_t__ drc_resumable; } ;
typedef TYPE_2__ dmu_recv_cookie_t ;
struct TYPE_8__ {TYPE_1__* ds_dir; } ;
struct TYPE_6__ {int dd_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(dmu_recv_cookie_t *VAR_2)
{
 if (VAR_2->drc_resumable) {

  FUNC_3(VAR_2->drc_ds->ds_dir->dd_pool, 0);
  FUNC_0(VAR_2->drc_ds, VAR_1);
 } else {
  char VAR_3[VAR_0];
  FUNC_1(VAR_2->drc_ds, VAR_3);
  FUNC_0(VAR_2->drc_ds, VAR_1);
  (void) FUNC_2(VAR_3);
 }
}
