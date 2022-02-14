
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_9__ {int db; } ;
typedef TYPE_2__ dmu_buf_impl_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (TYPE_2__*,void*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(dnode_t *VAR_3, uint32_t VAR_4, void *VAR_5, dmu_buf_t **VAR_6)
{
 dmu_buf_impl_t *VAR_7 = ((void*)0);
 int VAR_8;

 if ((VAR_4 & VAR_0) == 0)
  FUNC_4(&VAR_3->dn_struct_rwlock, VAR_2);

 VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_5);

 if ((VAR_4 & VAR_0) == 0)
  FUNC_5(&VAR_3->dn_struct_rwlock);

 FUNC_0(VAR_7 != ((void*)0));
 VAR_8 = FUNC_2(VAR_7, ((void*)0), VAR_4);
 if (VAR_8 == 0)
  *VAR_6 = &VAR_7->db;
 else
  FUNC_3(VAR_7, VAR_5);
 return (VAR_8);
}
