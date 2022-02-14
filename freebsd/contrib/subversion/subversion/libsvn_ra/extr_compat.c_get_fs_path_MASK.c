
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char const**,char const*,int *) ;
 int FUNC_3 (int *,char const**,int *) ;
 int FUNC_4 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_1,
            svn_ra_session_t *VAR_2,
            const char *VAR_3,
            apr_pool_t *VAR_4)
{
  const char *VAR_5, *VAR_6;

  FUNC_0(FUNC_3(VAR_2, &VAR_5, VAR_4));
  FUNC_0(FUNC_2(VAR_2, &VAR_6, VAR_5, VAR_4));
  *VAR_1 = FUNC_1(FUNC_4(VAR_6,
                                                         VAR_3, VAR_4),
                                        VAR_4);
  return VAR_0;
}
