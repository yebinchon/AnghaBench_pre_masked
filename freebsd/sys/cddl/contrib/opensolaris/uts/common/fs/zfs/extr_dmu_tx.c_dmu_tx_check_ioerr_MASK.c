
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zio_t ;
typedef int uint64_t ;
struct TYPE_4__ {int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(zio_t *VAR_5, dnode_t *VAR_6, int VAR_7, uint64_t VAR_8)
{
 int VAR_9;
 dmu_buf_impl_t *VAR_10;

 FUNC_4(&VAR_6->dn_struct_rwlock, VAR_4);
 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_3);
 FUNC_5(&VAR_6->dn_struct_rwlock);
 if (VAR_10 == ((void*)0))
  return (FUNC_0(VAR_2));
 VAR_9 = FUNC_2(VAR_10, VAR_5, VAR_0 | VAR_1);
 FUNC_3(VAR_10, VAR_3);
 return (VAR_9);
}
