
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int *,char*,char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_stream_t *VAR_1,
             apr_hash_t *VAR_2,
             const char *VAR_3,
             apr_pool_t *VAR_4)
{
  const char *VAR_5 = FUNC_1(VAR_2, VAR_3);

  if (VAR_5)
    {
      FUNC_0(FUNC_2(VAR_1, VAR_4,
                                "%s: %s\n", VAR_3, VAR_5));
    }
  return VAR_0;
}
