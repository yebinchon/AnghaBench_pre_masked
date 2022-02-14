
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_int64_t ;


 int FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static apr_int64_t FUNC_1(const char *VAR_0)
{

  if (VAR_0[0] == 'H' &&
      VAR_0[1] == 'T' &&
      VAR_0[2] == 'T' &&
      VAR_0[3] == 'P' &&
      VAR_0[4] == '/' &&
      (VAR_0[5] >= '0' && VAR_0[5] <= '9') &&
      VAR_0[6] == '.' &&
      (VAR_0[7] >= '0' && VAR_0[7] <= '9') &&
      VAR_0[8] == ' ')
    {
      char *VAR_1;

      return FUNC_0(VAR_0 + 8, &VAR_1, 10);
    }
  return 0;
}
