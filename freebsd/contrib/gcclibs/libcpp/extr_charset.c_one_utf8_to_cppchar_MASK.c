
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int cppchar_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_0 (const uchar **VAR_2, size_t *VAR_3,
       cppchar_t *VAR_4)
{
  static const uchar VAR_5[6] = { 0x7F, 0x1F, 0x0F, 0x07, 0x02, 0x01 };
  static const uchar VAR_6[6] = { 0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC };

  cppchar_t VAR_7;
  const uchar *VAR_8 = *VAR_2;
  size_t VAR_9, VAR_10;

  if (*VAR_3 < 1)
    return VAR_1;

  VAR_7 = *VAR_8;
  if (VAR_7 < 0x80)
    {
      *VAR_4 = VAR_7;
      *VAR_3 -= 1;
      *VAR_2 += 1;
      return 0;
    }



  for (VAR_9 = 2; VAR_9 < 7; VAR_9++)
    if ((VAR_7 & ~VAR_5[VAR_9-1]) == VAR_6[VAR_9-1])
      goto found;
  return VAR_0;
 found:

  if (*VAR_3 < VAR_9)
    return VAR_1;

  VAR_7 = (VAR_7 & VAR_5[VAR_9-1]);
  VAR_8++;
  for (VAR_10 = 1; VAR_10 < VAR_9; VAR_10++)
    {
      cppchar_t VAR_11 = *VAR_8++;
      if ((VAR_11 & 0xC0) != 0x80)
 return VAR_0;
      VAR_7 = ((VAR_7 << 6) + (VAR_11 & 0x3F));
    }


  if (VAR_7 <= 0x7F && VAR_9 > 1) return VAR_0;
  if (VAR_7 <= 0x7FF && VAR_9 > 2) return VAR_0;
  if (VAR_7 <= 0xFFFF && VAR_9 > 3) return VAR_0;
  if (VAR_7 <= 0x1FFFFF && VAR_9 > 4) return VAR_0;
  if (VAR_7 <= 0x3FFFFFF && VAR_9 > 5) return VAR_0;


  if (VAR_7 > 0x7FFFFFFF || (VAR_7 >= 0xD800 && VAR_7 <= 0xDFFF)) return VAR_0;

  *VAR_4 = VAR_7;
  *VAR_2 = VAR_8;
  *VAR_3 -= VAR_9;
  return 0;
}
