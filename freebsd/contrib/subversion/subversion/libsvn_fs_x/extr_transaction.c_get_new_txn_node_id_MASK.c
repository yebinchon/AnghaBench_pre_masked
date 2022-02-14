
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_3__ {int number; int change_set; } ;
typedef TYPE_1__ svn_fs_x__id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int *,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_x__id_t *VAR_1,
                    svn_fs_t *VAR_2,
                    svn_fs_x__txn_id_t VAR_3,
                    apr_pool_t *VAR_4)
{
  apr_uint64_t VAR_5, VAR_6;


  FUNC_0(FUNC_1(&VAR_5, &VAR_6, VAR_2, VAR_3, VAR_4));

  VAR_1->change_set = FUNC_2(VAR_3);
  VAR_1->number = VAR_5;

  FUNC_0(FUNC_3(VAR_2, VAR_3, ++VAR_5, VAR_6, VAR_4));

  return VAR_0;
}
