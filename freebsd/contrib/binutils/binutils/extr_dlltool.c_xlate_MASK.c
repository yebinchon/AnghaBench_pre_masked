
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static const char *
FUNC_4 (const char *VAR_3)
{
  int VAR_4 = (*VAR_3 == '@');

  if (!VAR_4 && (VAR_1
     || (VAR_0
         && FUNC_0 (VAR_3, '@'))))
    {
      char *VAR_5 = FUNC_3 (FUNC_2 (VAR_3) + 2);

      VAR_5[0] = '_';
      FUNC_1 (VAR_5 + 1, VAR_3);
      VAR_3 = VAR_5;
    }

  if (VAR_2)
    {
      char *VAR_6;

      VAR_3 += VAR_4;
      VAR_6 = FUNC_0 (VAR_3, '@');
      if (VAR_6)
 *VAR_6 = 0;
    }
  return VAR_3;
}
