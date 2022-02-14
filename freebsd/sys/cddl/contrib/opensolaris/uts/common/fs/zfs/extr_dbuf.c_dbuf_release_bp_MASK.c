
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* os_dsl_dataset; int os_phys_buf; } ;
typedef TYPE_3__ objset_t ;
struct TYPE_11__ {int db_buf; TYPE_2__* db_parent; TYPE_3__* db_objset; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
struct TYPE_9__ {int db_buf; } ;
struct TYPE_8__ {int ds_synced_link; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(dmu_buf_impl_t *VAR_0)
{
 objset_t *VAR_1 = VAR_0->db_objset;

 FUNC_0(FUNC_4(FUNC_3(VAR_1)));
 FUNC_0(FUNC_2(VAR_1->os_phys_buf) ||
     FUNC_5(&VAR_1->os_dsl_dataset->ds_synced_link));
 FUNC_0(VAR_0->db_parent == ((void*)0) || FUNC_2(VAR_0->db_parent->db_buf));

 (void) FUNC_1(VAR_0->db_buf, VAR_0);
}
