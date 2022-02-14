
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int cppchar_t ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0 (cppchar_t VAR_1, uchar **VAR_2, size_t *VAR_3)
{
  static const uchar VAR_4[6] = { 0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC };
  static const uchar VAR_5[6] = { 0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE };
  size_t VAR_6;
  uchar VAR_7[6], *VAR_8 = &VAR_7[6];
  uchar *VAR_9 = *VAR_2;

  VAR_6 = 1;
  if (VAR_1 < 0x80)
    *--VAR_8 = VAR_1;
  else
    {
      do
 {
   *--VAR_8 = ((VAR_1 & 0x3F) | 0x80);
   VAR_1 >>= 6;
   VAR_6++;
 }
      while (VAR_1 >= 0x3F || (VAR_1 & VAR_5[VAR_6-1]));
      *--VAR_8 = (VAR_1 | VAR_4[VAR_6-1]);
    }

  if (*VAR_3 < VAR_6)
    return VAR_0;

  while (VAR_8 < &VAR_7[6])
    *VAR_9++ = *VAR_8++;
  *VAR_3 -= VAR_6;
  *VAR_2 = VAR_9;
  return 0;
}
