
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct baton_apr {int file; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int **,char const*,int *,int *) ;
 int FUNC_1 (int ,int **,int *,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0,
                     svn_stringbuf_t **VAR_1,
                     const char *VAR_2,
                     svn_boolean_t *VAR_3,
                     apr_pool_t *VAR_4)
{
  struct baton_apr *VAR_5 = VAR_0;

  if (VAR_2[0] == '\n' && VAR_2[1] == '\0')
    {


      return FUNC_2(FUNC_1(VAR_5->file, VAR_1,
                                             VAR_3, VAR_4));
    }
  else
    {
      return FUNC_2(FUNC_0(VAR_5->file, VAR_1,
                                                  VAR_2, VAR_3, VAR_4));
    }
}
