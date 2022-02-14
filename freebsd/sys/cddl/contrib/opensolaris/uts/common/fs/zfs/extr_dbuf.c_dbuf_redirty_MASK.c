
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ db_object; } ;
struct TYPE_7__ {scalar_t__ db_level; scalar_t__ db_blkid; scalar_t__ db_state; int db_buf; TYPE_1__ db; int db_mtx; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
struct TYPE_8__ {TYPE_2__* dr_dbuf; } ;
typedef TYPE_3__ dbuf_dirty_record_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(dbuf_dirty_record_t *VAR_3)
{
 dmu_buf_impl_t *VAR_4 = VAR_3->dr_dbuf;

 FUNC_0(FUNC_1(&VAR_4->db_mtx));

 if (VAR_4->db_level == 0 && VAR_4->db_blkid != VAR_1) {




  FUNC_4(VAR_3);
  if (VAR_4->db.db_object != VAR_2 &&
      VAR_4->db_state != VAR_0) {

   FUNC_0(FUNC_3(VAR_4->db_buf));
   FUNC_2(VAR_4->db_buf);
  }
 }
}
