
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * db_data; } ;
struct TYPE_7__ {TYPE_1__ db; TYPE_3__* db_buf; int db_mtx; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
struct TYPE_8__ {int * b_data; } ;
typedef TYPE_3__ arc_buf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(dmu_buf_impl_t *VAR_0, arc_buf_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->db_mtx));
 FUNC_0(VAR_1 != ((void*)0));

 VAR_0->db_buf = VAR_1;
 FUNC_0(VAR_1->b_data != ((void*)0));
 VAR_0->db.db_data = VAR_1->b_data;
}
