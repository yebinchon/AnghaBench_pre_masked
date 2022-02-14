
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_repos_revision_access_level_t ;
typedef int (* svn_repos_authz_func_t ) (scalar_t__*,int *,char const*,void*,int *) ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_path_change_iterator_t ;
struct TYPE_4__ {char const* data; } ;
struct TYPE_5__ {int change_kind; TYPE_1__ path; } ;
typedef TYPE_2__ svn_fs_path_change3_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char const**,int *,char const*,int *) ;


 int FUNC_3 (TYPE_2__**,int *) ;


 int FUNC_4 (int **,int *,int *,int *) ;
 int FUNC_5 (int **,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

svn_error_t *
FUNC_10(svn_repos_revision_access_level_t *VAR_6,
                                svn_repos_t *VAR_7,
                                svn_revnum_t VAR_8,
                                svn_repos_authz_func_t VAR_9,
                                void *VAR_10,
                                apr_pool_t *VAR_11)
{
  svn_fs_t *VAR_12 = FUNC_9(VAR_7);
  svn_fs_root_t *VAR_13;
  svn_fs_path_change_iterator_t *VAR_14;
  svn_fs_path_change3_t *VAR_15;
  svn_boolean_t VAR_16 = VAR_0;
  svn_boolean_t VAR_17 = VAR_0;
  apr_pool_t *VAR_18;


  *VAR_6 = VAR_3;


  if (! VAR_9)
    return VAR_1;


  FUNC_0(FUNC_5(&VAR_13, VAR_12, VAR_8, VAR_11));
  FUNC_0(FUNC_4(&VAR_14, VAR_13, VAR_11, VAR_11));
  FUNC_0(FUNC_3(&VAR_15, VAR_14));





  if (!VAR_15)
    return VAR_1;



  VAR_18 = FUNC_7(VAR_11);
  while (VAR_15)
    {
      svn_boolean_t VAR_19;

      FUNC_6(VAR_18);

      FUNC_0(VAR_9(&VAR_19, VAR_13, VAR_15->path.data,
                              VAR_10, VAR_18));
      if (! VAR_19)
        VAR_17 = VAR_2;
      else
        VAR_16 = VAR_2;



      if (VAR_16 && VAR_17)
        goto decision;

      switch (VAR_15->change_kind)
        {
        case 131:
        case 128:
          {
            const char *VAR_20;
            svn_revnum_t VAR_21;

            FUNC_0(FUNC_2(&VAR_21, &VAR_20,
                                       VAR_13, VAR_15->path.data,
                                       VAR_18));
            if (VAR_20 && FUNC_1(VAR_21))
              {
                svn_fs_root_t *VAR_22;
                FUNC_0(FUNC_5(&VAR_22, VAR_12,
                                             VAR_21, VAR_18));
                FUNC_0(VAR_9(&VAR_19,
                                        VAR_22, VAR_20,
                                        VAR_10, VAR_18));
                if (! VAR_19)
                  VAR_17 = VAR_2;



                if (VAR_16 && VAR_17)
                  goto decision;
              }
          }
          break;

        case 130:
        case 129:
        default:
          break;
        }

      FUNC_0(FUNC_3(&VAR_15, VAR_14));
    }

 decision:
  FUNC_8(VAR_18);


  if (! VAR_16)
    *VAR_6 = VAR_4;


  else if (VAR_17)
    *VAR_6 = VAR_5;


  return VAR_1;
}
