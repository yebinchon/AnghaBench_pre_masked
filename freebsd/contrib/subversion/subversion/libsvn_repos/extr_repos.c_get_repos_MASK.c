
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conf_path; int db_path; int fs; int fs_type; } ;
typedef TYPE_1__ svn_repos_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int *,int *) ;
 int FUNC_9 (char const**,int ,int *) ;
 int * FUNC_10 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_repos_t **VAR_2,
          const char *VAR_3,
          svn_boolean_t VAR_4,
          svn_boolean_t VAR_5,
          svn_boolean_t VAR_6,
          apr_hash_t *VAR_7,
          apr_pool_t *VAR_8,
          apr_pool_t *VAR_9)
{
  svn_repos_t *VAR_10;
  const char *VAR_11;


  VAR_10 = FUNC_4(VAR_3, VAR_8);


  FUNC_0(FUNC_3(VAR_10, VAR_9));


  FUNC_0(FUNC_9(&VAR_11, VAR_10->db_path, VAR_9));
  VAR_10->fs_type = FUNC_2(VAR_8, VAR_11);


  FUNC_0(FUNC_5(VAR_10, VAR_4, VAR_5, VAR_8));


  if (VAR_6)
    FUNC_0(FUNC_8(&VAR_10->fs, VAR_10->db_path, VAR_7,
                         VAR_8, VAR_9));
  *VAR_2 = VAR_10;
  return VAR_0;
}
