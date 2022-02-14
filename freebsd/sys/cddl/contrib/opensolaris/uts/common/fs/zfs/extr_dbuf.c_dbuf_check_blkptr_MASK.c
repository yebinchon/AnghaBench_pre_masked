
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int dn_struct_rwlock; TYPE_9__* dn_phys; TYPE_3__* dn_dbuf; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_11__ {scalar_t__ db_data; } ;
struct TYPE_13__ {scalar_t__ db_blkid; int db_level; TYPE_1__ db; int * db_blkptr; struct TYPE_13__* db_parent; int db_mtx; } ;
typedef TYPE_3__ dmu_buf_impl_t ;
typedef int blkptr_t ;
struct TYPE_14__ {int dn_nlevels; scalar_t__ dn_nblkptr; int dn_indblkshift; int * dn_blkptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int,int,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(dnode_t *VAR_3, dmu_buf_impl_t *VAR_4)
{

 FUNC_0(FUNC_4(&VAR_4->db_mtx));

 if (VAR_4->db_blkptr != ((void*)0))
  return;

 if (VAR_4->db_blkid == VAR_0) {
  VAR_4->db_blkptr = FUNC_3(VAR_3->dn_phys);
  FUNC_1(VAR_4->db_blkptr);
  return;
 }
 if (VAR_4->db_level == VAR_3->dn_phys->dn_nlevels-1) {





  FUNC_0(VAR_4->db_blkid < VAR_3->dn_phys->dn_nblkptr);
  FUNC_0(VAR_4->db_parent == ((void*)0));
  VAR_4->db_parent = VAR_3->dn_dbuf;
  VAR_4->db_blkptr = &VAR_3->dn_phys->dn_blkptr[VAR_4->db_blkid];
  FUNC_2(VAR_4);
 } else {
  dmu_buf_impl_t *VAR_5 = VAR_4->db_parent;
  int VAR_6 = VAR_3->dn_phys->dn_indblkshift - VAR_2;

  FUNC_0(VAR_3->dn_phys->dn_nlevels > 1);
  if (VAR_5 == ((void*)0)) {
   FUNC_7(&VAR_4->db_mtx);
   FUNC_8(&VAR_3->dn_struct_rwlock, VAR_1);
   VAR_5 = FUNC_5(VAR_3, VAR_4->db_level + 1,
       VAR_4->db_blkid >> VAR_6, VAR_4);
   FUNC_9(&VAR_3->dn_struct_rwlock);
   FUNC_6(&VAR_4->db_mtx);
   VAR_4->db_parent = VAR_5;
  }
  VAR_4->db_blkptr = (blkptr_t *)VAR_5->db.db_data +
      (VAR_4->db_blkid & ((1ULL << VAR_6) - 1));
  FUNC_2(VAR_4);
 }
}
