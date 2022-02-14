
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int txn_number; int * fs; } ;
typedef TYPE_1__ get_and_increment_txn_key_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char **VAR_2,
               svn_fs_x__txn_id_t *VAR_3,
               svn_fs_t *VAR_4,
               apr_pool_t *VAR_5,
               apr_pool_t *VAR_6)
{
  get_and_increment_txn_key_baton_t VAR_7;





  VAR_7.fs = VAR_4;
  FUNC_0(FUNC_2(VAR_4,
                                          VAR_1,
                                          &VAR_7,
                                          VAR_6));
  *VAR_3 = VAR_7.txn_number;
  *VAR_2 = FUNC_1(*VAR_3, VAR_5);

  return VAR_0;
}
