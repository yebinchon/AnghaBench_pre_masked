
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_test {scalar_t__ expr; } ;
typedef unsigned char hashval_t ;



hashval_t
FUNC_0 (const void *VAR_0)
{
  const struct c_test *VAR_1 = (const struct c_test *) VAR_0;
  const unsigned char *VAR_2, *VAR_3 = (const unsigned char *) VAR_1->expr;
  hashval_t VAR_4;
  unsigned char VAR_5;
  unsigned int VAR_6;

  VAR_2 = VAR_3;
  VAR_4 = 0;

  while ((VAR_5 = *VAR_3++) != '\0')
    {
      VAR_4 += VAR_5 + (VAR_5 << 17);
      VAR_4 ^= VAR_4 >> 2;
    }

  VAR_6 = VAR_3 - VAR_2;
  VAR_4 += VAR_6 + (VAR_6 << 17);
  VAR_4 ^= VAR_4 >> 2;

  return VAR_4;
}
