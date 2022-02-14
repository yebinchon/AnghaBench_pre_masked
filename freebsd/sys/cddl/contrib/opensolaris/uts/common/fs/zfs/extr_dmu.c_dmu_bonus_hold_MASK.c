
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_9__ {int dn_struct_rwlock; int dn_dbufs_count; TYPE_2__* dn_bonus; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_10__ {int db; int db_holds; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,void*) ;

int
FUNC_10(objset_t *VAR_5, uint64_t VAR_6, void *VAR_7, dmu_buf_t **VAR_8)
{
 dnode_t *VAR_9;
 dmu_buf_impl_t *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_2, &VAR_9);
 if (VAR_11)
  return (VAR_11);

 FUNC_7(&VAR_9->dn_struct_rwlock, VAR_3);
 if (VAR_9->dn_bonus == ((void*)0)) {
  FUNC_8(&VAR_9->dn_struct_rwlock);
  FUNC_7(&VAR_9->dn_struct_rwlock, VAR_4);
  if (VAR_9->dn_bonus == ((void*)0))
   FUNC_2(VAR_9);
 }
 VAR_10 = VAR_9->dn_bonus;


 if (FUNC_9(&VAR_10->db_holds, VAR_7) == 1) {
  FUNC_0(FUNC_4(VAR_9, VAR_10));
  FUNC_1(&VAR_9->dn_dbufs_count);
 }






 FUNC_8(&VAR_9->dn_struct_rwlock);

 FUNC_6(VAR_9, VAR_2);

 FUNC_0(0 == FUNC_3(VAR_10, ((void*)0), VAR_0 | VAR_1));

 *VAR_8 = &VAR_10->db;
 return (0);
}
