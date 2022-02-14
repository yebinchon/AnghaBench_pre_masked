
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct shim_callbacks_baton {int wc_ctx; int relpath_map; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int ,char const*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int **,char const**,int *,int ,int *,int *) ;
 TYPE_1__* FUNC_6 (int **,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char **VAR_3,
                void *VAR_4,
                const char *VAR_5,
                svn_revnum_t VAR_6,
                apr_pool_t *VAR_7,
                apr_pool_t *VAR_8)
{
  struct shim_callbacks_baton *VAR_9 = VAR_4;
  const char *VAR_10;
  svn_stream_t *VAR_11;
  svn_stream_t *VAR_12;
  svn_error_t *VAR_13;

  VAR_10 = FUNC_3(VAR_9->relpath_map, VAR_5);
  if (!VAR_10)
    {
      *VAR_3 = ((void*)0);
      return VAR_1;
    }


  VAR_13 = FUNC_6(&VAR_11, VAR_9->wc_ctx,
                                      VAR_10, VAR_8,
                                      VAR_8);
  if (VAR_13 && VAR_13->apr_err == VAR_0)
    {
      FUNC_1(VAR_13);
      *VAR_3 = ((void*)0);
      return VAR_1;
    }
  else if (VAR_13)
    return FUNC_2(VAR_13);

  FUNC_0(FUNC_5(&VAR_12, VAR_3, ((void*)0),
                                 VAR_2,
                                 VAR_7, VAR_8));
  FUNC_0(FUNC_4(VAR_11, VAR_12, ((void*)0), ((void*)0),
                           VAR_8));

  return VAR_1;
}
