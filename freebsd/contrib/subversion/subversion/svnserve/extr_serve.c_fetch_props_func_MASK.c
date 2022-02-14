
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (void*,char const*,int *) ;
 int FUNC_3 (int **,void*,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int **,int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_hash_t **VAR_2,
                 void *VAR_3,
                 const char *VAR_4,
                 svn_revnum_t VAR_5,
                 apr_pool_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_fs_root_t *VAR_8;
  svn_error_t *VAR_9;

  VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_7);
  FUNC_0(FUNC_3(&VAR_8, VAR_3, VAR_5, VAR_7));

  VAR_9 = FUNC_6(VAR_2, VAR_8, VAR_4, VAR_6);
  if (VAR_9 && VAR_9->apr_err == VAR_0)
    {
      FUNC_4(VAR_9);
      *VAR_2 = FUNC_1(VAR_6);
      return VAR_1;
    }
  else if (VAR_9)
    return FUNC_5(VAR_9);

  return VAR_1;
}
