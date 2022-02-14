
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;



unsigned char *
FUNC_0(unsigned char *VAR_0, apr_uint64_t VAR_1)
{
  int VAR_2;
  apr_uint64_t VAR_3;


  VAR_3 = VAR_1 >> 7;
  VAR_2 = 1;
  while (VAR_3 > 0)
    {
      VAR_3 = VAR_3 >> 7;
      VAR_2++;
    }



  while (--VAR_2 >= 1)
    *VAR_0++ = (unsigned char)(((VAR_1 >> (VAR_2 * 7)) | 0x80) & 0xff);

  *VAR_0++ = (unsigned char)(VAR_1 & 0x7f);

  return VAR_0;
}
