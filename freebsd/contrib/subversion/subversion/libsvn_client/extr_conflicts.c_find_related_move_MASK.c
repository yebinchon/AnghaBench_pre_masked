
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
struct repos_move_info {int dummy; } ;
struct copy_info {int node_kind; int copyfrom_rev; int copyto_path; int copyfrom_path; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct repos_move_info**,char const*,int ,int ,int ,int ,char const*,int *,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_2 (int **,int ,int ,char const*,int ,char const*,char const*,int *,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(struct repos_move_info **VAR_2,
                  struct copy_info *VAR_3,
                  const char *VAR_4,
                  svn_revnum_t VAR_5,
                  const char *VAR_6,
                  apr_hash_t *VAR_7,
                  const char *VAR_8,
                  const char *VAR_9,
                  svn_client_ctx_t *VAR_10,
                  svn_ra_session_t *VAR_11,
                  apr_pool_t *VAR_12,
                  apr_pool_t *VAR_13)
{
  svn_client__pathrev_t *VAR_14;
  svn_error_t *VAR_15;

  *VAR_2 = ((void*)0);
  VAR_15 = FUNC_2(&VAR_14, VAR_3->copyfrom_path, VAR_3->copyfrom_rev,
                 VAR_4, FUNC_3(VAR_5),
                 VAR_8, VAR_9, VAR_11, VAR_10,
                 VAR_13, VAR_13);
  if (VAR_15)
    {
      if (VAR_15->apr_err == VAR_0)
        {
          FUNC_4(VAR_15);
          VAR_14 = ((void*)0);
        }
      else
        return FUNC_5(VAR_15);
    }

  if (VAR_14)
    FUNC_0(FUNC_1(VAR_2, VAR_4,
                         VAR_3->copyto_path, VAR_3->copyfrom_rev,
                         VAR_3->node_kind, VAR_5, VAR_6,
                         VAR_7, VAR_11, VAR_8,
                         VAR_12, VAR_13));

  return VAR_1;
}
