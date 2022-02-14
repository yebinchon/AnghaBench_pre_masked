
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *,int ,int *,int ,int *,int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int **,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_3,
               svn_ra_session_t *VAR_4,
               const char *VAR_5,
               svn_boolean_t VAR_6,
               apr_hash_t *VAR_7,
               apr_pool_t *VAR_8)
{
  svn_stream_t *VAR_9;

  if (VAR_5)
    {
      FUNC_0(FUNC_3(&VAR_9, VAR_5, VAR_8, VAR_8));
    }
  else
    {
      FUNC_0(FUNC_2(&VAR_9, VAR_1, VAR_8));
    }

  FUNC_0(FUNC_1(VAR_9, VAR_3, VAR_4,
                                     VAR_6, VAR_7,
                                     VAR_2, ((void*)0), VAR_8));

  return VAR_0;
}
