
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef size_t uint64_t ;
typedef int u_longlong_t ;
struct TYPE_33__ {scalar_t__ dn_objset; scalar_t__ dn_nlevels; scalar_t__ dn_dbuf; int dn_mtx; int * dn_dirty_records; } ;
typedef TYPE_7__ dnode_t ;
struct TYPE_34__ {size_t tx_txg; } ;
typedef TYPE_8__ dmu_tx_t ;
struct TYPE_27__ {scalar_t__ db_size; } ;
struct TYPE_35__ {scalar_t__ db_objset; scalar_t__ db_blkid; scalar_t__ db_level; scalar_t__ db_parent; scalar_t__ db_state; scalar_t__ db_dirtycnt; int * db_buf; int db_holds; int * db_blkptr; TYPE_1__ db; TYPE_10__* db_last_dirty; int db_mtx; } ;
typedef TYPE_9__ dmu_buf_impl_t ;
struct TYPE_31__ {int * dr_data; } ;
struct TYPE_32__ {TYPE_5__ dl; } ;
struct TYPE_25__ {size_t dr_txg; TYPE_6__ dt; TYPE_4__* dr_parent; struct TYPE_25__* dr_next; int dr_accounted; TYPE_9__* dr_dbuf; } ;
typedef TYPE_10__ dbuf_dirty_record_t ;
typedef int boolean_t ;
struct TYPE_28__ {int dr_mtx; int dr_children; } ;
struct TYPE_29__ {TYPE_2__ di; } ;
struct TYPE_30__ {TYPE_3__ dt; } ;
struct TYPE_26__ {scalar_t__ dp_meta_objset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 size_t VAR_5 ;
 int FUNC_6 (int *,TYPE_9__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_10__*) ;
 TYPE_13__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_9__*,char*,int ) ;
 int FUNC_13 (TYPE_13__*,int ,size_t) ;
 int FUNC_14 (TYPE_10__*,int) ;
 int FUNC_15 (int *,TYPE_10__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 size_t FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int *,void*) ;

__attribute__((used)) static boolean_t
FUNC_20(dmu_buf_impl_t *VAR_6, dmu_tx_t *VAR_7)
{
 dnode_t *VAR_8;
 uint64_t VAR_9 = VAR_7->tx_txg;
 dbuf_dirty_record_t *VAR_10, **VAR_11;

 FUNC_0(VAR_9 != 0);







 FUNC_0(VAR_6->db_objset ==
     FUNC_10(VAR_6->db_objset)->dp_meta_objset ||
     VAR_9 != FUNC_18(FUNC_11(VAR_6->db_objset)));
 FUNC_0(VAR_6->db_blkid != VAR_3);
 FUNC_1(VAR_6->db_level);
 FUNC_0(FUNC_5(&VAR_6->db_mtx));




 for (VAR_11 = &VAR_6->db_last_dirty; (VAR_10 = *VAR_11) != ((void*)0); VAR_11 = &VAR_10->dr_next)
  if (VAR_10->dr_txg <= VAR_9)
   break;
 if (VAR_10 == ((void*)0) || VAR_10->dr_txg < VAR_9)
  return (VAR_0);
 FUNC_0(VAR_10->dr_txg == VAR_9);
 FUNC_0(VAR_10->dr_dbuf == VAR_6);

 FUNC_3(VAR_6);
 VAR_8 = FUNC_2(VAR_6);

 FUNC_12(VAR_6, "size=%llx\n", (u_longlong_t)VAR_6->db.db_size);

 FUNC_0(VAR_6->db.db_size != 0);

 FUNC_13(FUNC_10(VAR_8->dn_objset),
     VAR_10->dr_accounted, VAR_9);

 *VAR_11 = VAR_10->dr_next;







 if (VAR_10->dr_parent) {
  FUNC_16(&VAR_10->dr_parent->dt.di.dr_mtx);
  FUNC_15(&VAR_10->dr_parent->dt.di.dr_children, VAR_10);
  FUNC_17(&VAR_10->dr_parent->dt.di.dr_mtx);
 } else if (VAR_6->db_blkid == VAR_4 ||
     VAR_6->db_level + 1 == VAR_8->dn_nlevels) {
  FUNC_0(VAR_6->db_blkptr == ((void*)0) || VAR_6->db_parent == VAR_8->dn_dbuf);
  FUNC_16(&VAR_8->dn_mtx);
  FUNC_15(&VAR_8->dn_dirty_records[VAR_9 & VAR_5], VAR_10);
  FUNC_17(&VAR_8->dn_mtx);
 }
 FUNC_4(VAR_6);

 if (VAR_6->db_state != VAR_2) {
  FUNC_9(VAR_10);

  FUNC_0(VAR_6->db_buf != ((void*)0));
  FUNC_0(VAR_10->dt.dl.dr_data != ((void*)0));
  if (VAR_10->dt.dl.dr_data != VAR_6->db_buf)
   FUNC_6(VAR_10->dt.dl.dr_data, VAR_6);
 }

 FUNC_14(VAR_10, sizeof (dbuf_dirty_record_t));

 FUNC_0(VAR_6->db_dirtycnt > 0);
 VAR_6->db_dirtycnt -= 1;

 if (FUNC_19(&VAR_6->db_holds, (void *)(uintptr_t)VAR_9) == 0) {
  FUNC_0(VAR_6->db_state == VAR_2 || FUNC_7(VAR_6->db_buf));
  FUNC_8(VAR_6);
  return (VAR_1);
 }

 return (VAR_0);
}
