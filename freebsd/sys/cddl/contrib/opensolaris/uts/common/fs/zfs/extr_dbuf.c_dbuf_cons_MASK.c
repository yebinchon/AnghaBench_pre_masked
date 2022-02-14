
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db_holds; int db_cache_link; int db_changed; int db_mtx; } ;
typedef TYPE_1__ dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, void *VAR_3, int VAR_4)
{
 dmu_buf_impl_t *VAR_5 = VAR_2;
 FUNC_0(VAR_5, sizeof (dmu_buf_impl_t));

 FUNC_3(&VAR_5->db_mtx, ((void*)0), VAR_1, ((void*)0));
 FUNC_1(&VAR_5->db_changed, ((void*)0), VAR_0, ((void*)0));
 FUNC_2(&VAR_5->db_cache_link);
 FUNC_4(&VAR_5->db_holds);

 return (0);
}
