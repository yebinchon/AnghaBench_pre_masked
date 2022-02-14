
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct edit_baton {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char const*,int *,int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (int *,char const*,int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int **,struct edit_baton*) ;
 int FUNC_9 (int *,int *,char const*,int *,int *) ;
 int FUNC_10 (int *,char const*,int *) ;
 int FUNC_11 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(void *VAR_4,
               const char *VAR_5,
               const char *VAR_6,
               apr_hash_t *VAR_7,
               svn_revnum_t VAR_8,
               apr_pool_t *VAR_9)
{
  struct edit_baton *VAR_10 = VAR_4;
  const char *VAR_11 = FUNC_0(VAR_5, VAR_9);
  svn_fs_root_t *VAR_12;

  FUNC_1(FUNC_8(&VAR_12, VAR_10));

  if (FUNC_2(VAR_8))
    {
      FUNC_1(FUNC_7(VAR_12, VAR_11, VAR_8, VAR_9));
      FUNC_1(FUNC_10(VAR_12, VAR_11, VAR_9));
    }
  else
    {
      FUNC_1(FUNC_6(VAR_12, VAR_11, VAR_9));
    }
  FUNC_3();
}
