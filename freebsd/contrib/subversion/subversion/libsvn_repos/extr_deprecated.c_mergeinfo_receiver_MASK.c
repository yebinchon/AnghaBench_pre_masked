
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mergeinfo_t ;
typedef void* svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (void*,int ,int ,int ) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_1,
                   svn_mergeinfo_t VAR_2,
                   void *VAR_3,
                   apr_pool_t *VAR_4)
{
  svn_mergeinfo_catalog_t VAR_5 = VAR_3;
  apr_pool_t *VAR_6 = FUNC_0(VAR_5);
  apr_size_t VAR_7 = FUNC_3(VAR_1);

  FUNC_1(VAR_5,
               FUNC_2(VAR_6, VAR_1, VAR_7),
               VAR_7,
               FUNC_4(VAR_2, VAR_6));

  return VAR_0;
}
