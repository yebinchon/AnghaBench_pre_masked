
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int **,int ,char const*,int ,int *) ;
 int VAR_1 ;
 char* FUNC_3 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_2,
            const char *VAR_3,
            apr_pool_t *VAR_4)
{
  svn_checksum_t *VAR_5;

  FUNC_0(FUNC_2(&VAR_5, VAR_1, VAR_3, FUNC_1(VAR_3), VAR_4));

  *VAR_2 = FUNC_3(VAR_5, VAR_4);
  return VAR_0;
}
