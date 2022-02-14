
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dn_struct_rwlock; TYPE_3__* dn_bonus; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_5__ {int db_pending_evict; int db_mtx; int db_holds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(dnode_t *VAR_2)
{
 FUNC_2(&VAR_2->dn_struct_rwlock, VAR_0);
 if (VAR_2->dn_bonus != ((void*)0)) {
  if (FUNC_4(&VAR_2->dn_bonus->db_holds)) {
   FUNC_1(&VAR_2->dn_bonus->db_mtx);
   FUNC_0(VAR_2->dn_bonus);
   VAR_2->dn_bonus = ((void*)0);
  } else {
   VAR_2->dn_bonus->db_pending_evict = VAR_1;
  }
 }
 FUNC_3(&VAR_2->dn_struct_rwlock);
}
