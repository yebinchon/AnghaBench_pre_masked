
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char const* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_notify_t ;
typedef int (* svn_repos_notify_func_t ) (void*,int *,int *) ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__**,TYPE_1__*,char const*,int *) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__*,int *,int ,int ,int *) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int * FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (char const*,char const**,char*,int ,int *,int ,int *) ;

svn_error_t *
FUNC_7(svn_string_t **VAR_3,
                                     const svn_string_t *VAR_4,
                                     const char *VAR_5,
                                     apr_hash_t *VAR_6,
                                     svn_revnum_t VAR_7,
                                     apr_int32_t VAR_8,
                                     svn_repos_notify_func_t VAR_9,
                                     void *VAR_10,
                                     apr_pool_t *VAR_11,
                                     apr_pool_t *VAR_12)
{
  svn_string_t VAR_13 = *VAR_4;





  if (FUNC_4(VAR_13.data, "\r"))
    {
      const char *VAR_14;

      FUNC_0(FUNC_6(VAR_13.data,
                                           &VAR_14,
                                           "\n",
                                           VAR_0,
                                           ((void*)0),
                                           VAR_0,
                                           VAR_11));
      VAR_13.data = VAR_14;
      VAR_13.len = FUNC_3(VAR_14);

      if (VAR_9)
        {
          svn_repos_notify_t *VAR_15
                  = FUNC_5(
                                VAR_2,
                                VAR_12);

          VAR_9(VAR_10, VAR_15, VAR_12);
        }
    }


  FUNC_0(FUNC_2(VAR_3, &VAR_13,
                                  VAR_6, VAR_7,
                                  VAR_8,
                                  VAR_11));

  if (VAR_5)
    {


      FUNC_0(FUNC_1(VAR_3, *VAR_3,
                                     VAR_5, VAR_11));
    }

  return VAR_1;
}
