
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stream_t *VAR_1,
              svn_fs_root_t *VAR_2,
              const char *VAR_3 ,
              apr_pool_t *VAR_4)
{
  if (VAR_2 == ((void*)0))
    FUNC_0(FUNC_2(VAR_1));
  else
    {
      svn_stream_t *VAR_5;


      FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4));
      FUNC_0(FUNC_3(VAR_5, VAR_1, ((void*)0), ((void*)0), VAR_4));
    }

  return VAR_0;
}
