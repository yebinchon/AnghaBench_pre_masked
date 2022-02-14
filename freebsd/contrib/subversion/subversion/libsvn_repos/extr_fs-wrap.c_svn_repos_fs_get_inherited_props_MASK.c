
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int (* svn_repos_authz_func_t ) (scalar_t__*,int *,char const*,void*,int *) ;
struct TYPE_4__ {int * prop_hash; int path_or_url; } ;
typedef TYPE_1__ svn_prop_inherited_item_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int **,int *,char const*,char const*,int *) ;
 int FUNC_7 (int **,int *,char const*,int *) ;
 char* FUNC_8 (char const*,int *) ;
 int FUNC_9 (int *,char const*,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_1__**,int ) ;

svn_error_t *
FUNC_14(apr_array_header_t **VAR_2,
                                 svn_fs_root_t *VAR_3,
                                 const char *VAR_4,
                                 const char *VAR_5,
                                 svn_repos_authz_func_t VAR_6,
                                 void *VAR_7,
                                 apr_pool_t *VAR_8,
                                 apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10 = FUNC_11(VAR_9);
  apr_array_header_t *VAR_11;
  const char *VAR_12 = VAR_4;

  VAR_11 = FUNC_1(VAR_8, 1,
                                   sizeof(svn_prop_inherited_item_t *));
  while (!(VAR_12[0] == '/' && VAR_12[1] == '\0'))
    {
      svn_boolean_t VAR_13 = VAR_1;
      apr_hash_t *VAR_14 = ((void*)0);

      FUNC_10(VAR_10);
      VAR_12 = FUNC_8(VAR_12, VAR_9);

      if (VAR_6)
        FUNC_0(VAR_6(&VAR_13, VAR_3, VAR_12,
                                VAR_7, VAR_10));
      if (VAR_13)
        {
          if (VAR_5)
            {
              svn_string_t *VAR_15;

              FUNC_0(FUNC_6(&VAR_15, VAR_3, VAR_12, VAR_5,
                                       VAR_8));
              if (VAR_15)
                {
                  VAR_14 = FUNC_3(VAR_8);
                  FUNC_9(VAR_14, VAR_5, VAR_15);
                }
            }
          else
            {
              FUNC_0(FUNC_7(&VAR_14, VAR_3,
                                           VAR_12, VAR_8));
            }

          if (VAR_14 && FUNC_2(VAR_14))
            {
              svn_prop_inherited_item_t *VAR_16 =
                FUNC_4(VAR_8, sizeof(*VAR_16));
              VAR_16->path_or_url =
                FUNC_5(VAR_8, VAR_12 + 1);
              VAR_16->prop_hash = VAR_14;

              FUNC_13(VAR_11, &VAR_16, 0);
            }
        }
    }

  FUNC_12(VAR_10);

  *VAR_2 = VAR_11;
  return VAR_0;
}
