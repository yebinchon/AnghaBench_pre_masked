
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_hash_t *VAR_2,
                  const char *VAR_3,
                  svn_stream_t *VAR_4,
                  apr_pool_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7;

  VAR_7 = FUNC_1(VAR_5);
  FUNC_0(FUNC_2(VAR_7, VAR_4, VAR_0, VAR_5));
  FUNC_3(VAR_2, VAR_3, VAR_7);

  return VAR_1;
}
