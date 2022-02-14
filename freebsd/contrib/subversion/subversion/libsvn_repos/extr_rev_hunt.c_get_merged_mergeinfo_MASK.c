
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int fs; } ;
typedef TYPE_2__ svn_repos_t ;
typedef int svn_fs_root_t ;
typedef int svn_fs_path_change_iterator_t ;
struct TYPE_19__ {char const* data; int len; } ;
struct TYPE_21__ {scalar_t__ mergeinfo_mod; TYPE_1__ path; scalar_t__ prop_mod; } ;
typedef TYPE_3__ svn_fs_path_change3_t ;
struct TYPE_22__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct path_revision {char* path; scalar_t__ revnum; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int **,int *,char*,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_6 (TYPE_3__**,int *) ;
 TYPE_4__* FUNC_7 (int **,int *,int *,int *) ;
 TYPE_4__* FUNC_8 (int **,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;
 TYPE_4__* FUNC_10 (int **,int **,int *,int *,int ,int *,int *) ;
 int VAR_5 ;
 TYPE_4__* FUNC_11 (int *,int *,int *,int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_hash_t **VAR_7,
                     svn_repos_t *VAR_8,
                     struct path_revision *VAR_9,
                     apr_pool_t *VAR_10,
                     apr_pool_t *VAR_11)
{
  apr_hash_t *VAR_12, *VAR_13, *VAR_14, *VAR_15;
  svn_error_t *VAR_16;
  svn_fs_root_t *VAR_17, *VAR_18;
  const char *VAR_19 = VAR_9->path;
  const char *VAR_20 = ((void*)0);

  svn_fs_path_change_iterator_t *VAR_21;
  svn_fs_path_change3_t *VAR_22;



  FUNC_0(FUNC_8(&VAR_17, VAR_8->fs, VAR_9->revnum,
                               VAR_11));
  FUNC_0(FUNC_7(&VAR_21, VAR_17, VAR_11, VAR_11));
  FUNC_0(FUNC_6(&VAR_22, VAR_21));



  while (VAR_22)
    {
      if ( VAR_22->prop_mod
          && VAR_22->mergeinfo_mod != VAR_6
          && FUNC_9(VAR_22->path.data, VAR_19))
        {
          if (!VAR_20 || FUNC_9(VAR_20, VAR_22->path.data))
            VAR_20 = FUNC_2(VAR_11, VAR_22->path.data,
                                  VAR_22->path.len);
        }

      FUNC_0(FUNC_6(&VAR_22, VAR_21));
    }

  if (VAR_20 == ((void*)0))
    {
      *VAR_7 = ((void*)0);
      return VAR_3;
    }






  VAR_16 = FUNC_5(&VAR_12,
                                       VAR_17, VAR_9->path,
                                       VAR_5, VAR_4,
                                       VAR_11, VAR_11);
  if (VAR_16)
    {
      if (VAR_16->apr_err == VAR_2)
        {



          FUNC_3(VAR_16);
          *VAR_7 = ((void*)0);
          return VAR_3;
        }
      else
        {
          return FUNC_4(VAR_16);
        }
    }

  FUNC_0(FUNC_8(&VAR_18, VAR_8->fs, VAR_9->revnum - 1,
                               VAR_11));
  VAR_16 = FUNC_5(&VAR_13,
                                       VAR_18, VAR_9->path,
                                       VAR_5, VAR_4,
                                       VAR_11, VAR_11);
  if (VAR_16 && (VAR_16->apr_err == VAR_1
              || VAR_16->apr_err == VAR_2))
    {


      FUNC_3(VAR_16);
      *VAR_7 = ((void*)0);
      return VAR_3;
    }
  else
    FUNC_0(VAR_16);



  FUNC_0(FUNC_10(&VAR_14, &VAR_15, VAR_13,
                              VAR_12, VAR_0, VAR_10,
                              VAR_11));
  FUNC_0(FUNC_11(VAR_15, VAR_14, VAR_10, VAR_11));


  if (FUNC_1(VAR_15))
    *VAR_7 = VAR_15;
  else
    *VAR_7 = ((void*)0);

  return VAR_3;
}
