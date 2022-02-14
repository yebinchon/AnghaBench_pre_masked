
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned char *
FUNC_1 (unsigned char *VAR_2, unsigned char *VAR_3, int VAR_4, int VAR_5)
{
  unsigned char VAR_6;

  FUNC_0(VAR_5);

  while (VAR_4-- > 0)
    {
      VAR_6 = *VAR_2++;
      if (VAR_1)
 return 0;
      *VAR_3++ = VAR_0[VAR_6 >> 4];
      *VAR_3++ = VAR_0[VAR_6 & 0xf];
    }

  *VAR_3 = 0;

  FUNC_0(0);

  return VAR_3;
}
