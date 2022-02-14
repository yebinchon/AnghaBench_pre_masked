
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uchar ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1 (const uchar *VAR_0, unsigned int VAR_1, long unsigned int *VAR_2)
{
  unsigned long VAR_3 = 0;
  uchar VAR_4;
  while (VAR_1--)
    {
      VAR_4 = *VAR_0++;
      if (!FUNC_0 (VAR_4))
 return 1;
      VAR_3 *= 10;
      VAR_3 += VAR_4 - '0';
    }
  *VAR_2 = VAR_3;
  return 0;
}
