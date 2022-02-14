
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int os_lock; int os_evicting_node; int os_dnodes; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_12__ {int dn_id_flags; int dn_zfetch; scalar_t__ dn_newgid; scalar_t__ dn_newuid; scalar_t__ dn_oldgid; scalar_t__ dn_olduid; scalar_t__ dn_oldflags; scalar_t__ dn_oldused; void* dn_have_spill; int * dn_zio; TYPE_8__* dn_bonus; int * dn_dirtyctx_firstset; scalar_t__ dn_dirtyctx; scalar_t__ dn_dirty_txg; scalar_t__ dn_assigned_txg; scalar_t__ dn_free_txg; scalar_t__ dn_allocated_txg; TYPE_1__* dn_handle; int dn_object; TYPE_2__* dn_objset; } ;
typedef TYPE_3__ dnode_t ;
typedef int boolean_t ;
struct TYPE_13__ {int db_mtx; } ;
struct TYPE_10__ {int dnh_zrlock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(dnode_t *VAR_4)
{
 objset_t *VAR_5 = VAR_4->dn_objset;
 boolean_t VAR_6 = VAR_1;

 FUNC_0((VAR_4->dn_id_flags & VAR_2) == 0);

 FUNC_12(&VAR_5->os_lock);
 FUNC_2(&VAR_4->dn_objset);
 if (!FUNC_1(VAR_4->dn_object)) {
  FUNC_11(&VAR_5->os_dnodes, VAR_4);
  VAR_6 =
      FUNC_9(&VAR_5->os_dnodes) &&
      FUNC_10(&VAR_5->os_evicting_node);
 }
 FUNC_13(&VAR_5->os_lock);


 if (!FUNC_14(&VAR_4->dn_handle->dnh_zrlock))
  FUNC_15(&VAR_4->dn_handle->dnh_zrlock);

 VAR_4->dn_allocated_txg = 0;
 VAR_4->dn_free_txg = 0;
 VAR_4->dn_assigned_txg = 0;
 VAR_4->dn_dirty_txg = 0;

 VAR_4->dn_dirtyctx = 0;
 if (VAR_4->dn_dirtyctx_firstset != ((void*)0)) {
  FUNC_8(VAR_4->dn_dirtyctx_firstset, 1);
  VAR_4->dn_dirtyctx_firstset = ((void*)0);
 }
 if (VAR_4->dn_bonus != ((void*)0)) {
  FUNC_12(&VAR_4->dn_bonus->db_mtx);
  FUNC_4(VAR_4->dn_bonus);
  VAR_4->dn_bonus = ((void*)0);
 }
 VAR_4->dn_zio = ((void*)0);

 VAR_4->dn_have_spill = VAR_1;
 VAR_4->dn_oldused = 0;
 VAR_4->dn_oldflags = 0;
 VAR_4->dn_olduid = 0;
 VAR_4->dn_oldgid = 0;
 VAR_4->dn_newuid = 0;
 VAR_4->dn_newgid = 0;
 VAR_4->dn_id_flags = 0;

 FUNC_6(&VAR_4->dn_zfetch);
 FUNC_7(VAR_3, VAR_4);
 FUNC_3(sizeof (dnode_t), VAR_0);

 if (VAR_6)
  FUNC_5(VAR_5);
}
