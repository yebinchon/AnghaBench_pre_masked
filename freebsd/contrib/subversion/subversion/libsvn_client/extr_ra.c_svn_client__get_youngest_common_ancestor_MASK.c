
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_9__ {int url; int repos_root_url; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__ const*,int *,int ,TYPE_1__ const*,int *,int ,int *,int *) ;
 int FUNC_3 (int **,int *,TYPE_1__ const*,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int **,int ,int *,int *,int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

svn_error_t *
FUNC_7(svn_client__pathrev_t **VAR_2,
                                         const svn_client__pathrev_t *VAR_3,
                                         const svn_client__pathrev_t *VAR_4,
                                         svn_ra_session_t *VAR_5,
                                         svn_client_ctx_t *VAR_6,
                                         apr_pool_t *VAR_7,
                                         apr_pool_t *VAR_8)
{
  apr_pool_t *VAR_9 = ((void*)0);
  apr_hash_t *VAR_10, *VAR_11;
  svn_boolean_t VAR_12;
  svn_boolean_t VAR_13;

  if (FUNC_1(VAR_3->repos_root_url, VAR_4->repos_root_url) != 0)
    {
      *VAR_2 = ((void*)0);
      return VAR_1;
    }


  if (VAR_5 == ((void*)0))
    {
      VAR_9 = FUNC_5(VAR_8);
      FUNC_0(FUNC_4(&VAR_5, VAR_3->url, ((void*)0), VAR_6,
                                          VAR_9, VAR_9));
    }



  FUNC_0(FUNC_3(&VAR_10,
                                               &VAR_12,
                                               VAR_3,
                                               VAR_0,
                                               VAR_0,
                                               VAR_5, VAR_6, VAR_8));
  FUNC_0(FUNC_3(&VAR_11,
                                               &VAR_13,
                                               VAR_4,
                                               VAR_0,
                                               VAR_0,
                                               VAR_5, VAR_6, VAR_8));

  if (VAR_9)
    FUNC_6(VAR_9);

  FUNC_0(FUNC_2(VAR_2,
                                                    VAR_3, VAR_10,
                                                    VAR_12,
                                                    VAR_4, VAR_11,
                                                    VAR_13,
                                                    VAR_7,
                                                    VAR_8));

  return VAR_1;
}
