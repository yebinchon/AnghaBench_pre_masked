
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_1, const char *VAR_2, apr_pool_t *VAR_3,
              apr_pool_t *VAR_4)
{
  const char *VAR_5;
  const char *VAR_6;






  FUNC_0(FUNC_3(&VAR_5,
                                  VAR_2,
                                  VAR_4));


  VAR_6 = FUNC_2(VAR_5, VAR_4);

  *VAR_1 = FUNC_1(VAR_3, VAR_6);

  return VAR_0;
}
