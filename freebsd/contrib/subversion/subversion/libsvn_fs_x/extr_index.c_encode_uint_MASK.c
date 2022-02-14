
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_size_t ;



__attribute__((used)) static apr_size_t
FUNC_0(unsigned char *VAR_0,
            apr_uint64_t VAR_1)
{
  unsigned char *VAR_2 = VAR_0;
  while (VAR_1 >= 0x80)
    {
      *VAR_0 = (unsigned char)((VAR_1 % 0x80) + 0x80);
      VAR_1 /= 0x80;
      ++VAR_0;
    }

  *VAR_0 = (unsigned char)(VAR_1 % 0x80);
  return (VAR_0 - VAR_2) + 1;
}
