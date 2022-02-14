
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct edit_baton {int cancel_baton; int cancel_func; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 char* FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int *,char const*,int *,int *) ;
 int FUNC_4 (int *,char const*,int ,int *) ;
 int FUNC_5 (int **,struct edit_baton*) ;
 int FUNC_6 (int *,char const*,int const*,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_1,
              const char *VAR_2,
              svn_revnum_t VAR_3,
              const svn_checksum_t *VAR_4,
              svn_stream_t *VAR_5,
              apr_hash_t *VAR_6,
              apr_pool_t *VAR_7)
{
  struct edit_baton *VAR_8 = VAR_1;
  const char *VAR_9 = FUNC_0(VAR_2, VAR_7);
  svn_fs_root_t *VAR_10;

  FUNC_1(FUNC_5(&VAR_10, VAR_8));
  FUNC_1(FUNC_4(VAR_10, VAR_9, VAR_3, VAR_7));

  if (VAR_5 != ((void*)0))
    {
      FUNC_2(VAR_4 != ((void*)0));
      FUNC_1(FUNC_6(VAR_10, VAR_9, VAR_4, VAR_5,
                       VAR_8->cancel_func, VAR_8->cancel_baton, VAR_7));
    }

  if (VAR_6 != ((void*)0))
    {
      FUNC_1(FUNC_3(VAR_10, VAR_9, VAR_6, VAR_7));
    }

  return VAR_0;
}
