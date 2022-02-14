
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_int64_t ;



__attribute__((used)) static char*
FUNC_0(apr_int64_t VAR_0, char *VAR_1)
{

  if (VAR_0 < 0)
  {
    VAR_0 = -VAR_0;
    *VAR_1 = (char)((VAR_0 & 63) + ' ' + 65);
  }
  else
    *VAR_1 = (char)((VAR_0 & 63) + ' ' + 1);
  VAR_0 /= 64;


  while (VAR_0)
  {
    *++VAR_1 = (char)((VAR_0 & 127) + ' ' + 1);
    VAR_0 /= 128;
  }


  return VAR_1;
}
