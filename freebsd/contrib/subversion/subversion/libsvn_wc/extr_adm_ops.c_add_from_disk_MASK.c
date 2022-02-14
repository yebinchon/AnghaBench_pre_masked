
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 int FUNC_2 (int *,char const*,int const*,int *,int *) ;
 int FUNC_3 (int *,char const*,int const*,int *,int *) ;
 int FUNC_4 (int **,int *,char const*,int *,int *) ;
 int FUNC_5 (int *,char const*,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_wc__db_t *VAR_4,
              const char *VAR_5,
              svn_node_kind_t VAR_6,
              const apr_hash_t *VAR_7,
              apr_pool_t *VAR_8)
{
  if (VAR_6 == VAR_3)
    {
      svn_skel_t *VAR_9 = ((void*)0);

      if (VAR_7 && (FUNC_1(VAR_7, VAR_1)
                    || FUNC_1(VAR_7, VAR_2)))
        FUNC_0(FUNC_4(&VAR_9, VAR_4, VAR_5,
                                                 VAR_8, VAR_8));

      FUNC_0(FUNC_3(VAR_4, VAR_5, VAR_7, VAR_9,
                                     VAR_8));
      if (VAR_9)
        FUNC_0(FUNC_5(VAR_4, VAR_5, ((void*)0), ((void*)0), VAR_8));
    }
  else
    {
      FUNC_0(FUNC_2(VAR_4, VAR_5, VAR_7, ((void*)0),
                                          VAR_8));
    }

  return VAR_0;
}
