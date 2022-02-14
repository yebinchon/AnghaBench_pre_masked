
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
typedef int apr_pool_t ;


 char* FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (int *,char const*,int ,int *) ;
 int FUNC_5 (int **,struct edit_baton*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,int *,char const*,int *) ;
 int FUNC_8 (int *,char const*,int *) ;
 int FUNC_9 (int **,int ,int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_1,
        const char *VAR_2,
        svn_revnum_t VAR_3,
        const char *VAR_4,
        svn_revnum_t VAR_5,
        apr_pool_t *VAR_6)
{
  struct edit_baton *VAR_7 = VAR_1;
  const char *VAR_8 = FUNC_0(VAR_2, VAR_6);
  const char *VAR_9 = FUNC_0(VAR_4, VAR_6);
  svn_fs_root_t *VAR_10;
  svn_fs_root_t *VAR_11;

  FUNC_1(FUNC_5(&VAR_10, VAR_7));


  if (FUNC_2(VAR_5))
    {
      FUNC_1(FUNC_4(VAR_10, VAR_9, VAR_5, VAR_6));
      FUNC_1(FUNC_8(VAR_10, VAR_9, VAR_6));
    }
  else
    {
      FUNC_1(FUNC_3(VAR_10, VAR_9, VAR_6));
    }

  FUNC_1(FUNC_9(&VAR_11, FUNC_10(VAR_10), VAR_3,
                               VAR_6));
  FUNC_1(FUNC_7(VAR_11, VAR_8, VAR_10, VAR_9, VAR_6));
  FUNC_6(VAR_11);

  return VAR_0;
}
