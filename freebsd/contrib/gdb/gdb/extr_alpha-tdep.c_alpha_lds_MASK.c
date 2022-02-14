
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;


 int FUNC_0 (void const*,int) ;
 int FUNC_1 (void*,int,int) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0, const void *VAR_1)
{
  ULONGEST VAR_2 = FUNC_0 (VAR_1, 4);
  ULONGEST VAR_3 = (VAR_2 >> 0) & 0x7fffff;
  ULONGEST VAR_4 = (VAR_2 >> 31) & 1;
  ULONGEST VAR_5 = (VAR_2 >> 30) & 1;
  ULONGEST VAR_6 = (VAR_2 >> 23) & 0x7f;
  ULONGEST VAR_7, VAR_8;

  VAR_7 = (VAR_5 << 10) | VAR_6;
  if (VAR_5)
    {
      if (VAR_6 == 0x7f)
 VAR_7 = 0x7ff;
    }
  else
    {
      if (VAR_6 != 0x00)
 VAR_7 |= 0x380;
    }

  VAR_8 = (VAR_4 << 63) | (VAR_7 << 52) | (VAR_3 << 29);
  FUNC_1 (VAR_0, 8, VAR_8);
}
