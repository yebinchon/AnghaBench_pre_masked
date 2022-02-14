
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmu_buf_t ;
struct TYPE_4__ {TYPE_1__* db_objset; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
typedef int arc_buf_t ;
struct TYPE_3__ {int os_spa; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int) ;

arc_buf_t *
FUNC_1(dmu_buf_t *VAR_1, int VAR_2)
{
 dmu_buf_impl_t *VAR_3 = (dmu_buf_impl_t *)VAR_1;

 return (FUNC_0(VAR_3->db_objset->os_spa, VAR_0, VAR_2));
}
