
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_key_t ;


 int VAR_0 ;

__attribute__((used)) static hash_key_t
FUNC_0(const char *VAR_1)
{
  const unsigned char *VAR_2 = (const unsigned char *)VAR_1;
  const unsigned char *VAR_3 = VAR_2 + VAR_0;

  hash_key_t VAR_4 = 0;
  hash_key_t VAR_5 = 0;

  for (; VAR_2 < VAR_3; VAR_2 += 8)
    {
      VAR_4 += VAR_2[0]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[1]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[2]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[3]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[4]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[5]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[6]; VAR_5 += VAR_4;
      VAR_4 += VAR_2[7]; VAR_5 += VAR_4;
    }

  return VAR_5 * 0x10000 + VAR_4;
}
