
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uchar ;



uchar *
FUNC_0 (uchar *VAR_0, const uchar *VAR_1, unsigned int VAR_2)
{
  while (VAR_2--)
    {
      uchar VAR_3 = *VAR_1++;

      if (VAR_3 == '\\' || VAR_3 == '"')
 {
   *VAR_0++ = '\\';
   *VAR_0++ = VAR_3;
 }
      else
   *VAR_0++ = VAR_3;
    }

  return VAR_0;
}
