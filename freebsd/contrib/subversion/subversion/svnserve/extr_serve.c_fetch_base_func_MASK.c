
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
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (void*,char const*,int *) ;
 int FUNC_3 (int **,void*,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int **,int *,char const*,int *) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int FUNC_8 (int **,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_3,
                void *VAR_4,
                const char *VAR_5,
                svn_revnum_t VAR_6,
                apr_pool_t *VAR_7,
                apr_pool_t *VAR_8)
{
  svn_stream_t *VAR_9;
  svn_stream_t *VAR_10;
  const char *VAR_11;
  svn_fs_root_t *VAR_12;
  svn_error_t *VAR_13;

  VAR_5 = FUNC_2(VAR_4, VAR_5, VAR_8);
  FUNC_0(FUNC_3(&VAR_12, VAR_4, VAR_6, VAR_8));

  VAR_13 = FUNC_6(&VAR_9, VAR_12, VAR_5, VAR_8);
  if (VAR_13 && VAR_13->apr_err == VAR_0)
    {
      FUNC_4(VAR_13);
      *VAR_3 = ((void*)0);
      return VAR_1;
    }
  else if (VAR_13)
    return FUNC_5(VAR_13);
  FUNC_0(FUNC_8(&VAR_10, &VAR_11, ((void*)0),
                                 VAR_2,
                                 VAR_8, VAR_8));
  FUNC_0(FUNC_7(VAR_9, VAR_10, ((void*)0), ((void*)0), VAR_8));

  *VAR_3 = FUNC_1(VAR_7, VAR_11);

  return VAR_1;
}
