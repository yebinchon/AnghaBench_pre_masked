
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef TYPE_1__* (* svn_repos_history_func_t ) (void*,char const*,scalar_t__,int *) ;
typedef int (* svn_repos_authz_func_t ) (int *,int *,char const*,void*,int *) ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_history_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int *,int *) ;
 TYPE_1__* FUNC_5 (int ,int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char const**,scalar_t__*,int *,int *) ;
 int FUNC_8 (int **,int *,int ,int *,int *) ;
 int FUNC_9 (int **,int *,char const*,int *,int *) ;
 int FUNC_10 (int **,int *,scalar_t__,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

svn_error_t *
FUNC_14(svn_fs_t *VAR_4,
                   const char *VAR_5,
                   svn_repos_history_func_t VAR_6,
                   void *VAR_7,
                   svn_repos_authz_func_t VAR_8,
                   void *VAR_9,
                   svn_revnum_t VAR_10,
                   svn_revnum_t VAR_11,
                   svn_boolean_t VAR_12,
                   apr_pool_t *VAR_13)
{
  svn_fs_history_t *VAR_14;
  apr_pool_t *VAR_15 = FUNC_12(VAR_13);
  apr_pool_t *VAR_16 = FUNC_12(VAR_13);
  const char *VAR_17;
  svn_revnum_t VAR_18;
  svn_fs_root_t *VAR_19;


  if (! FUNC_1(VAR_10))
    return FUNC_5
      (VAR_2, 0,
       FUNC_2("Invalid start revision %ld"), VAR_10);
  if (! FUNC_1(VAR_11))
    return FUNC_5
      (VAR_2, 0,
       FUNC_2("Invalid end revision %ld"), VAR_11);


  if (VAR_10 > VAR_11)
    {
      svn_revnum_t VAR_20 = VAR_10;
      VAR_10 = VAR_11;
      VAR_11 = VAR_20;
    }


  FUNC_0(FUNC_10(&VAR_19, VAR_4, VAR_11, VAR_13));

  if (VAR_8)
    {
      svn_boolean_t VAR_21;
      FUNC_0(VAR_8(&VAR_21, VAR_19, VAR_5,
                              VAR_9, VAR_13));
      if (! VAR_21)
        return FUNC_4(VAR_0, ((void*)0), ((void*)0));
    }

  FUNC_0(FUNC_9(&VAR_14, VAR_19, VAR_5, VAR_15, VAR_15));


  do
    {



      apr_pool_t *VAR_22;
      svn_error_t *VAR_23;

      FUNC_0(FUNC_8(&VAR_14, VAR_14, VAR_12, VAR_16,
                                   VAR_15));


      if (! VAR_14)
        break;


      FUNC_0(FUNC_7(&VAR_17, &VAR_18,
                                      VAR_14, VAR_16));



      if (VAR_18 < VAR_10)
        break;


      if (VAR_8)
        {
          svn_boolean_t VAR_24;
          svn_fs_root_t *VAR_25;
          FUNC_0(FUNC_10(&VAR_25, VAR_4,
                                       VAR_18, VAR_16));
          FUNC_0(VAR_8(&VAR_24, VAR_25, VAR_17,
                                  VAR_9, VAR_16));
          if (! VAR_24)
            break;
        }


      VAR_23 = VAR_6(VAR_7, VAR_17, VAR_18, VAR_16);
      if (VAR_23)
        {
          if (VAR_23->apr_err == VAR_1)
            {
              FUNC_3(VAR_23);
              goto cleanup;
            }
          else
            {
              return FUNC_6(VAR_23);
            }
        }



      FUNC_11(VAR_15);
      VAR_22 = VAR_15;
      VAR_15 = VAR_16;
      VAR_16 = VAR_22;
    }
  while (VAR_14);

 cleanup:
  FUNC_13(VAR_15);
  FUNC_13(VAR_16);
  return VAR_3;
}
