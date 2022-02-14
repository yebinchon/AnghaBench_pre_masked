
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,char const*,int const*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_fs_root_t *VAR_1,
              const char *VAR_2,
              apr_hash_t *VAR_3,
              apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = FUNC_7(VAR_4);
  apr_hash_index_t *VAR_6;





  for (VAR_6 = FUNC_1(VAR_4, VAR_3); VAR_6;
       VAR_6 = FUNC_2(VAR_6))
    {
      const char *VAR_7 = FUNC_3(VAR_6);
      const svn_string_t *VAR_8 = FUNC_4(VAR_6);

      FUNC_6(VAR_5);

      FUNC_0(FUNC_5(VAR_1, VAR_2, VAR_7, VAR_8, VAR_5));
    }

  FUNC_8(VAR_5);
  return VAR_0;
}
