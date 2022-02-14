
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_element__content_t ;
typedef int svn_branch__repos_t ;
struct TYPE_4__ {int eid; int branch; int rev; } ;
typedef TYPE_1__ svn_branch__el_rev_id_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const*,int ,char const*,int *) ;
 int FUNC_3 (int ,int **,int,int *) ;

svn_error_t *
FUNC_4(svn_branch__el_rev_id_t **VAR_1,
                                    const svn_branch__repos_t *VAR_2,
                                    svn_revnum_t VAR_3,
                                    const char *VAR_4,
                                    int VAR_5,
                                    apr_pool_t *VAR_6,
                                    apr_pool_t *VAR_7)
{
  svn_branch__el_rev_id_t *VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8));
  svn_element__content_t *VAR_9;

  VAR_8->rev = VAR_3;
  FUNC_0(FUNC_2(&VAR_8->branch,
                                             VAR_2, VAR_3, VAR_4,
                                             VAR_7));
  FUNC_0(FUNC_3(VAR_8->branch, &VAR_9,
                                        VAR_5, VAR_7));
  if (VAR_9)
    {
      VAR_8->eid = VAR_5;
    }
  else
    {
      VAR_8->eid = -1;
    }
  *VAR_1 = VAR_8;
  return VAR_0;
}
