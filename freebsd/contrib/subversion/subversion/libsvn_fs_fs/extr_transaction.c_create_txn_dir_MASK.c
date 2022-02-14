
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_5__ {int number; int revision; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct get_and_increment_txn_key_baton {int txn_number; int * fs; int * pool; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (TYPE_1__*,int *) ;
 char* FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ,struct get_and_increment_txn_key_baton*,int *) ;
 int * FUNC_4 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
               svn_fs_fs__id_part_t *VAR_3,
               svn_fs_t *VAR_4,
               svn_revnum_t VAR_5,
               apr_pool_t *VAR_6)
{
  struct get_and_increment_txn_key_baton VAR_7;
  const char *VAR_8;





  VAR_7.pool = VAR_6;
  VAR_7.fs = VAR_4;
  FUNC_0(FUNC_3(VAR_4,
                                           VAR_1,
                                           &VAR_7,
                                           VAR_6));
  VAR_3->revision = VAR_5;
  VAR_3->number = VAR_7.txn_number;

  *VAR_2 = FUNC_1(VAR_3, VAR_6);
  VAR_8 = FUNC_2(VAR_4, VAR_3, VAR_6);

  return FUNC_4(VAR_8, VAR_0, VAR_6);
}
