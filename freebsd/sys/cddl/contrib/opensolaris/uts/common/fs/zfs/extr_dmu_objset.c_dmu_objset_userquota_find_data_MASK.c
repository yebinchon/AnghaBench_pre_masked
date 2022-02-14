
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_20__ {scalar_t__ dn_bonuslen; } ;
typedef TYPE_5__ dnode_t ;
struct TYPE_21__ {scalar_t__ tx_txg; } ;
typedef TYPE_6__ dmu_tx_t ;
struct TYPE_16__ {void* db_data; } ;
struct TYPE_22__ {scalar_t__ db_dirtycnt; TYPE_8__* db_last_dirty; TYPE_1__ db; } ;
typedef TYPE_7__ dmu_buf_impl_t ;
struct TYPE_18__ {TYPE_2__* dr_data; } ;
struct TYPE_19__ {TYPE_3__ dl; } ;
struct TYPE_23__ {scalar_t__ dr_txg; TYPE_11__* dr_dbuf; TYPE_4__ dt; struct TYPE_23__* dr_next; } ;
typedef TYPE_8__ dbuf_dirty_record_t ;
struct TYPE_17__ {void* b_data; } ;
struct TYPE_15__ {scalar_t__ db_blkid; } ;


 TYPE_5__* FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void *
FUNC_3(dmu_buf_impl_t *VAR_1, dmu_tx_t *VAR_2)
{
 dbuf_dirty_record_t *VAR_3, **VAR_4;
 void *VAR_5;

 if (VAR_1->db_dirtycnt == 0)
  return (VAR_1->db.db_data);

 for (VAR_4 = &VAR_1->db_last_dirty; (VAR_3 = *VAR_4) != ((void*)0); VAR_4 = &VAR_3->dr_next)
  if (VAR_3->dr_txg == VAR_2->tx_txg)
   break;

 if (VAR_3 == ((void*)0)) {
  VAR_5 = ((void*)0);
 } else {
  dnode_t *VAR_6;

  FUNC_1(VAR_3->dr_dbuf);
  VAR_6 = FUNC_0(VAR_3->dr_dbuf);

  if (VAR_6->dn_bonuslen == 0 &&
      VAR_3->dr_dbuf->db_blkid == VAR_0)
   VAR_5 = VAR_3->dt.dl.dr_data->b_data;
  else
   VAR_5 = VAR_3->dt.dl.dr_data;

  FUNC_2(VAR_3->dr_dbuf);
 }

 return (VAR_5);
}
