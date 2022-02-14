
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_lock_t ;
typedef int svn_fs_root_t ;
struct TYPE_3__ {scalar_t__ current_rev; } ;
typedef TYPE_1__ svn_fs_lock_target_t ;
typedef int svn_error_t ;
struct lock_baton {int fs; int steal_lock; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,char const*) ;
 int * FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int **,char const*,int ,int *) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 int FUNC_7 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_8 (scalar_t__*,int *,char const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_error_t **VAR_7,
           const char *VAR_8,
           const svn_fs_lock_target_t *VAR_9,
           struct lock_baton *VAR_10,
           svn_fs_root_t *VAR_11,
           svn_revnum_t VAR_12,
           apr_pool_t *VAR_13)
{
  svn_node_kind_t VAR_14;
  svn_lock_t *VAR_15;

  *VAR_7 = VAR_3;

  FUNC_0(FUNC_7(&VAR_14, VAR_11, VAR_8, VAR_13));
  if (VAR_14 == VAR_5)
    {
      *VAR_7 = FUNC_1(VAR_10->fs, VAR_8);
      return VAR_3;
    }



  if (VAR_14 == VAR_6)
    {
      if (FUNC_3(VAR_9->current_rev))
        *VAR_7 = FUNC_6(
          VAR_2, ((void*)0),
          FUNC_4("Path '%s' doesn't exist in HEAD revision"),
          VAR_8);
      else
        *VAR_7 = FUNC_6(
          VAR_0, ((void*)0),
          FUNC_4("Path '%s' doesn't exist in HEAD revision"),
          VAR_8);

      return VAR_3;
    }


  if (FUNC_3(VAR_9->current_rev))
    {
      svn_revnum_t VAR_16;

      if (VAR_9->current_rev > VAR_12)
        {
          *VAR_7 = FUNC_6(VAR_1, ((void*)0),
                                      FUNC_4("No such revision %ld"),
                                      VAR_9->current_rev);
          return VAR_3;
        }

      FUNC_0(FUNC_8(&VAR_16, VAR_11, VAR_8,
                                          VAR_13));





      if (! FUNC_3(VAR_16))
        {
          *VAR_7 = FUNC_6
            (VAR_2, ((void*)0),
             FUNC_4("Path '%s' doesn't exist in HEAD revision"), VAR_8);

          return VAR_3;
        }

      if (VAR_9->current_rev < VAR_16)
        {
          *VAR_7 = FUNC_6
            (VAR_2, ((void*)0),
             FUNC_4("Lock failed: newer version of '%s' exists"), VAR_8);

          return VAR_3;
        }
    }
  FUNC_0(FUNC_5(VAR_10->fs, &VAR_15, VAR_8, VAR_4, VAR_13));
  if (VAR_15)
    {
      if (! VAR_10->steal_lock)
        {

          *VAR_7 = FUNC_2(VAR_10->fs, VAR_15);
          return VAR_3;
        }
    }

  return VAR_3;
}
