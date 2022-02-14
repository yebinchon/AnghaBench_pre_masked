
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static apr_hash_t *
FUNC_7(svn_ra_session_t *VAR_0,
                   apr_hash_t *VAR_1,
                   apr_pool_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  apr_hash_t *VAR_4;
  apr_hash_index_t *VAR_5;

  if (!VAR_1)
    return ((void*)0);

  VAR_4 = FUNC_5(VAR_2);
  for (VAR_5 = FUNC_0(VAR_3, VAR_1); VAR_5; VAR_5 = FUNC_1(VAR_5))
    {
      const char *VAR_6 = FUNC_2(VAR_5);
      FUNC_6(VAR_4,
                    FUNC_4(VAR_0, VAR_6, VAR_2),
                    FUNC_3(VAR_5));
    }

  return VAR_4;
}
