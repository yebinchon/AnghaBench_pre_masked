
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_fs_t ;
struct TYPE_11__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ,char const*) ;
 TYPE_1__* FUNC_6 (int *,int *,int ,int *) ;
 TYPE_1__* FUNC_7 (int **,char const*,int ,int ,int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_fs_t *VAR_5,
                           apr_hash_t **VAR_6,
                           const char *VAR_7,
                           apr_pool_t *VAR_8)
{
  apr_file_t *VAR_9;
  svn_error_t *VAR_10;
  svn_stream_t *VAR_11;

  *VAR_6 = ((void*)0);
  VAR_10 = FUNC_7(&VAR_9, VAR_7,
                         VAR_1, VAR_0, VAR_8);
  if (VAR_10 && FUNC_0(VAR_10->apr_err))
    {
      FUNC_4(VAR_10);
      return VAR_4;
    }
  FUNC_1(VAR_10);

  VAR_11 = FUNC_9(VAR_9, VAR_2, VAR_8);
  *VAR_6 = FUNC_3(VAR_8);
  VAR_10 = FUNC_6(*VAR_6, VAR_11, VAR_3, VAR_8);
  if (VAR_10)
    return FUNC_5(VAR_10, FUNC_2("malformed node origin data in '%s'"),
                                 VAR_7);
  return FUNC_8(VAR_11);
}
