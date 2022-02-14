
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int terminal_handle_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_2, apr_pool_t *VAR_3)
{
  if (VAR_2)
    {
      terminal_handle_t *VAR_4;
      FUNC_0(FUNC_4(&VAR_4, VAR_0, VAR_3));
      FUNC_0(FUNC_5(
                  FUNC_2(VAR_3,
                               FUNC_1("Authentication realm: %s\n"), VAR_2),
                  VAR_4, VAR_3));
      FUNC_0(FUNC_3(VAR_4));
    }

  return VAR_1;
}
