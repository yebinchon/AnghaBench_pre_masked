
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_14__ {scalar_t__ tx_txg; } ;
typedef TYPE_1__ dmu_tx_t ;
typedef int dmu_buf_t ;
struct TYPE_15__ {scalar_t__ db_state; int db_mtx; TYPE_3__* db_last_dirty; int db_holds; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
struct TYPE_16__ {scalar_t__ dr_txg; struct TYPE_16__* dr_next; } ;
typedef TYPE_3__ dbuf_dirty_record_t ;
struct TYPE_13__ {int dn_struct_rwlock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_11__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int *,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(dmu_buf_t *VAR_4, dmu_tx_t *VAR_5)
{
 dmu_buf_impl_t *VAR_6 = (dmu_buf_impl_t *)VAR_4;
 int VAR_7 = VAR_2 | VAR_3;

 FUNC_0(VAR_5->tx_txg != 0);
 FUNC_0(!FUNC_10(&VAR_6->db_holds));







 FUNC_8(&VAR_6->db_mtx);
 dbuf_dirty_record_t *VAR_8;
 for (VAR_8 = VAR_6->db_last_dirty;
     VAR_8 != ((void*)0) && VAR_8->dr_txg >= VAR_5->tx_txg; VAR_8 = VAR_8->dr_next) {





  if (VAR_8->dr_txg == VAR_5->tx_txg && VAR_6->db_state == VAR_0) {

   FUNC_7(VAR_8);
   FUNC_9(&VAR_6->db_mtx);
   return;
  }
 }
 FUNC_9(&VAR_6->db_mtx);

 FUNC_2(VAR_6);
 if (FUNC_4(&FUNC_1(VAR_6)->dn_struct_rwlock))
  VAR_7 |= VAR_1;
 FUNC_3(VAR_6);
 (void) FUNC_6(VAR_6, ((void*)0), VAR_7);
 (void) FUNC_5(VAR_6, VAR_5);
}
