
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct edit_baton {int fs; int txn; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int **,int *,char const*,int *) ;
 int FUNC_6 (int **,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;
 int FUNC_9 (int **,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char **VAR_3,
                void *VAR_4,
                const char *VAR_5,
                svn_revnum_t VAR_6,
                apr_pool_t *VAR_7,
                apr_pool_t *VAR_8)
{
  struct edit_baton *VAR_9 = VAR_4;
  svn_stream_t *VAR_10;
  svn_stream_t *VAR_11;
  const char *VAR_12;
  svn_fs_root_t *VAR_13;
  svn_error_t *VAR_14;

  if (!FUNC_1(VAR_6))
    VAR_6 = FUNC_7(VAR_9->txn);

  FUNC_0(FUNC_6(&VAR_13, VAR_9->fs, VAR_6, VAR_8));

  VAR_14 = FUNC_5(&VAR_10, VAR_13, VAR_5, VAR_8);
  if (VAR_14 && VAR_14->apr_err == VAR_0)
    {
      FUNC_3(VAR_14);
      *VAR_3 = ((void*)0);
      return VAR_1;
    }
  else if (VAR_14)
    return FUNC_4(VAR_14);
  FUNC_0(FUNC_9(&VAR_11, &VAR_12, ((void*)0),
                                 VAR_2,
                                 VAR_8, VAR_8));
  FUNC_0(FUNC_8(VAR_10, VAR_11, ((void*)0), ((void*)0), VAR_8));

  *VAR_3 = FUNC_2(VAR_7, VAR_12);

  return VAR_1;
}
