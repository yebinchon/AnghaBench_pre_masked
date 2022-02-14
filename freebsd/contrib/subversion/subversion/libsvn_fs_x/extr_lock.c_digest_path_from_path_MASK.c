
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (char const**,char const*,int *) ;
 char* FUNC_3 (int *,char const*,int ,int ,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_4,
                      const char *VAR_5,
                      const char *VAR_6,
                      apr_pool_t *VAR_7)
{
  const char *VAR_8;
  FUNC_0(FUNC_2(&VAR_8, VAR_6, VAR_7));
  *VAR_4 = FUNC_3(VAR_7, VAR_5, VAR_1,
                                      FUNC_1(VAR_7, VAR_8,
                                                     VAR_0),
                                      VAR_8, VAR_3);
  return VAR_2;
}
