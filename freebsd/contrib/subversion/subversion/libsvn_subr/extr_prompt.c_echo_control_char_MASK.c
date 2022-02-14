
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_file_t ;


 int FUNC_0 (char const,int *) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(char VAR_0, apr_file_t *VAR_1)
{
  if (FUNC_1(VAR_0))
    {
      const char VAR_2 = (VAR_0 < 32? '@' + VAR_0 : '?');
      FUNC_0('^', VAR_1);
      FUNC_0(VAR_2, VAR_1);
    }
  else if (FUNC_2(VAR_0))
    {

      FUNC_0(VAR_0, VAR_1);
    }
  else
    {

      FUNC_0('^', VAR_1);
      FUNC_0('!', VAR_1);
    }
}
