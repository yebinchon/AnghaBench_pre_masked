
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct baton_apr {int pool; int file; } ;
typedef int apr_size_t ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (char const,int ,int ) ;
 int * FUNC_2 (int ,char const*,int,int*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_0, const char *VAR_1, apr_size_t *VAR_2)
{
  struct baton_apr *VAR_3 = VAR_0;
  svn_error_t *VAR_4;

  if (*VAR_2 == 1)
    {
      VAR_4 = FUNC_1(*VAR_1, VAR_3->file, VAR_3->pool);
      if (VAR_4)
        *VAR_2 = 0;
    }
  else
    VAR_4 = FUNC_2(VAR_3->file, VAR_1, *VAR_2, VAR_2, VAR_3->pool);

  return FUNC_0(VAR_4);
}
