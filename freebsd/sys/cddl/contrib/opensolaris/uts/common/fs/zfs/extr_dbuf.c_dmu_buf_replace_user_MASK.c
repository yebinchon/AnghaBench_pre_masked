
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void dmu_buf_user_t ;
typedef int dmu_buf_t ;
struct TYPE_3__ {void* db_user; int db_mtx; } ;
typedef TYPE_1__ dmu_buf_impl_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *
FUNC_3(dmu_buf_t *VAR_1, dmu_buf_user_t *VAR_2,
    dmu_buf_user_t *VAR_3)
{
 dmu_buf_impl_t *VAR_4 = (dmu_buf_impl_t *)VAR_1;

 FUNC_1(&VAR_4->db_mtx);
 FUNC_0(VAR_4, VAR_0);
 if (VAR_4->db_user == VAR_2)
  VAR_4->db_user = VAR_3;
 else
  VAR_2 = VAR_4->db_user;
 FUNC_0(VAR_4, VAR_0);
 FUNC_2(&VAR_4->db_mtx);

 return (VAR_2);
}
