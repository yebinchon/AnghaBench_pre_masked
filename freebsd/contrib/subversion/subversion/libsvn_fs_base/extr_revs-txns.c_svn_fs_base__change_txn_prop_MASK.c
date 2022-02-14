
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_3__ {int id; int * fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct change_txn_prop_args {char const* name; int const* value; int id; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ,struct change_txn_prop_args*,int ,int *) ;
 int VAR_1 ;

svn_error_t *
FUNC_3(svn_fs_txn_t *VAR_2,
                             const char *VAR_3,
                             const svn_string_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  struct change_txn_prop_args VAR_6;
  svn_fs_t *VAR_7 = VAR_2->fs;

  FUNC_0(FUNC_1(VAR_7, VAR_0));

  VAR_6.id = VAR_2->id;
  VAR_6.name = VAR_3;
  VAR_6.value = VAR_4;
  return FUNC_2(VAR_7, VAR_1, &VAR_6,
                                VAR_0, VAR_5);
}
