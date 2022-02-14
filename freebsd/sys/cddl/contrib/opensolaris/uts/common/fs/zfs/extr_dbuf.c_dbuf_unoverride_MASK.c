
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {scalar_t__ db_level; scalar_t__ db_blkid; TYPE_1__* db_objset; TYPE_5__* db_data_pending; int db_mtx; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
struct TYPE_9__ {scalar_t__ dr_override_state; int dr_data; int dr_nopwrite; int dr_overridden_by; } ;
struct TYPE_10__ {TYPE_2__ dl; } ;
struct TYPE_12__ {TYPE_3__ dt; int dr_txg; TYPE_4__* dr_dbuf; } ;
typedef TYPE_5__ dbuf_dirty_record_t ;
typedef int blkptr_t ;
struct TYPE_8__ {int os_spa; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int *) ;

void
FUNC_5(dbuf_dirty_record_t *VAR_4)
{
 dmu_buf_impl_t *VAR_5 = VAR_4->dr_dbuf;
 blkptr_t *VAR_6 = &VAR_4->dt.dl.dr_overridden_by;
 uint64_t VAR_7 = VAR_4->dr_txg;

 FUNC_0(FUNC_2(&VAR_5->db_mtx));





 FUNC_0(VAR_4->dt.dl.dr_override_state != VAR_2);
 FUNC_0(VAR_5->db_level == 0);

 if (VAR_5->db_blkid == VAR_1 ||
     VAR_4->dt.dl.dr_override_state == VAR_3)
  return;

 FUNC_0(VAR_5->db_data_pending != VAR_4);


 if (!FUNC_1(VAR_6) && !VAR_4->dt.dl.dr_nopwrite)
  FUNC_4(VAR_5->db_objset->os_spa, VAR_7, VAR_6);

 VAR_4->dt.dl.dr_override_state = VAR_3;
 VAR_4->dt.dl.dr_nopwrite = VAR_0;
 FUNC_3(VAR_4->dt.dl.dr_data, VAR_5);
}
