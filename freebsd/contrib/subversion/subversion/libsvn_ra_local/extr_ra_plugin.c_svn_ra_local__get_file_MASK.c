
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_8__ {TYPE_4__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
struct TYPE_9__ {int uuid; int callback_baton; TYPE_2__* callbacks; int fs; TYPE_1__* fs_path; } ;
typedef TYPE_4__ svn_ra_local__session_baton_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {int * cancel_func; } ;
struct TYPE_6__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,char const*,int ,int *,int *) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_6 (int **,int *,char const*,int *) ;
 int FUNC_7 (int **,int ,int ,int *) ;
 int FUNC_8 (int *,int ,int *) ;
 char* FUNC_9 (int ,char const*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int *,int ,int *,int ,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_ra_session_t *VAR_5,
                       const char *VAR_6,
                       svn_revnum_t VAR_7,
                       svn_stream_t *VAR_8,
                       svn_revnum_t *VAR_9,
                       apr_hash_t **VAR_10,
                       apr_pool_t *VAR_11)
{
  svn_fs_root_t *VAR_12;
  svn_stream_t *VAR_13;
  svn_revnum_t VAR_14;
  svn_ra_local__session_baton_t *VAR_15 = VAR_5->priv;
  const char *VAR_16 = FUNC_9(VAR_15->fs_path->data, VAR_6, VAR_11);
  svn_node_kind_t VAR_17;


  if (! FUNC_1(VAR_7))
    {
      FUNC_0(FUNC_8(&VAR_14, VAR_15->fs, VAR_11));
      FUNC_0(FUNC_7(&VAR_12, VAR_15->fs, VAR_14, VAR_11));
      if (VAR_9 != ((void*)0))
        *VAR_9 = VAR_14;
    }
  else
    FUNC_0(FUNC_7(&VAR_12, VAR_15->fs, VAR_7, VAR_11));

  FUNC_0(FUNC_5(&VAR_17, VAR_12, VAR_16, VAR_11));
  if (VAR_17 == VAR_4)
    {
      return FUNC_4(VAR_1, ((void*)0),
                               FUNC_2("'%s' path not found"), VAR_16);
    }
  else if (VAR_17 != VAR_3)
    {
      return FUNC_4(VAR_0, ((void*)0),
                               FUNC_2("'%s' is not a file"), VAR_16);
    }

  if (VAR_8)
    {

      FUNC_0(FUNC_6(&VAR_13, VAR_12, VAR_16, VAR_11));
      FUNC_0(FUNC_10(VAR_13, FUNC_11(VAR_8, VAR_11),
                               VAR_15->callbacks
                                 ? VAR_15->callbacks->cancel_func : ((void*)0),
                               VAR_15->callback_baton,
                               VAR_11));
    }


  if (VAR_10)
    FUNC_0(FUNC_3(VAR_10, VAR_12, VAR_16, VAR_15->uuid, VAR_11, VAR_11));

  return VAR_2;
}
