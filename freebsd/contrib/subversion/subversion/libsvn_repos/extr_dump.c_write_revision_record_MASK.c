
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int *,int *,int ,int *) ;
 int FUNC_5 (int **,int *,int ,int ,void*,int *) ;
 TYPE_1__* FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_stream_t *VAR_2,
                      svn_repos_t *VAR_3,
                      svn_revnum_t VAR_4,
                      svn_boolean_t VAR_5,
                      svn_repos_authz_func_t VAR_6,
                      void *VAR_7,
                      apr_pool_t *VAR_8)
{
  apr_hash_t *VAR_9;
  apr_time_t VAR_10;
  svn_string_t *VAR_11;

  if (VAR_5)
    {
      FUNC_0(FUNC_5(&VAR_9, VAR_3, VAR_4,
                                             VAR_6, VAR_7, VAR_8));




      VAR_11 = FUNC_2(VAR_9, VAR_1);
      if (VAR_11)
        {
          FUNC_0(FUNC_7(&VAR_10, VAR_11->data, VAR_8));
          VAR_11 = FUNC_6(FUNC_8(VAR_10, VAR_8),
                                        VAR_8);
          FUNC_3(VAR_9, VAR_1, VAR_11);
        }
    }
   else
    {


      VAR_9 = FUNC_1(VAR_8);
    }

  FUNC_0(FUNC_4(VAR_2, VAR_4, ((void*)0), VAR_9,
                                          VAR_5,
                                          VAR_8));
  return VAR_0;
}
